LICENSE_FLAGS = "oracle_java"
LICENSE = "Oracle_Binary_Code_License_Agreement"
LIC_FILES_CHKSUM = "\
	file://${JDK_JRE}${PV}_${PV_UPDATE}/LICENSE;md5=98f46ab6481d87c4d77e0e91a6dbc15f \
	file://${JDK_JRE}${PV}_${PV_UPDATE}/COPYRIGHT;md5=3dc1bfbd5bed75d650ad0506a0df5930 \
	file://${JDK_JRE}${PV}_${PV_UPDATE}/THIRDPARTYLICENSEREADME.txt;md5=745d6db5fc58c63f74ce6a7d4db7e695 \
	file://${JDK_JRE}${PV}_${PV_UPDATE}/THIRDPARTYLICENSEREADME-JAVAFX.txt;md5=4f31cd1a5d86744d5f00666d9a57ad2a \
	"

FETCHCMD_wget_append = " --no-check-certificate --no-cookies --header 'Cookie: oraclelicense=accept-securebackup-cookie' "

RDEPENDS_${PN} += " libasound atk cairo gdk-pixbuf mesa gtk+ libxtst libxi"
# get the java update version in the resulting package
PR =. "u${PV_UPDATE}"
S = "${WORKDIR}"

libdir_jvm ?= "${libdir}/jvm"
JDK_DIR = "java-8-oracle"
JDK_HOME = "${libdir_jvm}/${JDK_DIR}"

do_install () {
	install -d -m 0755			${D}${libdir_jvm}
	cp -a ${S}/${JDK_JRE}${PV}_${PV_UPDATE}	${D}${JDK_HOME}
}

# All the files are provided in a binaray package, and keeping all the
# files in a single package causes packaging QA errors and warnings.
# Avoid these packaging failure by skiping all the QA checks
INSANE_SKIP_${PN} = "${ERROR_QA} ${WARN_QA}"

# Inhibit warnings about files being stripped, we can't do anything about it.
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

PACKAGES = "${PN}-sources ${PN}"
FILES_${PN}-sources = "${JDK_HOME}/src.zip"
FILES_${PN} = "${JDK_HOME}"

RPROVIDES_${PN} = "java2-runtime java2-vm"
PROVIDES += "virtual/java"

inherit update-alternatives

pkg_postinst_${PN} () {
	update-alternatives --install ${bindir}/java java ${JDK_HOME}/jre/bin/java 75
}

pkg_prerm_${PN} () {
	update-alternatives --remove java ${JDK_HOME}/jre/bin/java
}
