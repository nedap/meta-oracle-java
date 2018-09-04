SUMMARY = "Oracle Java SE Development Kit binaries"
DESCRIPTION = "This is the proprietary JDK from Sun/Oracle, with the Hotspot JVM. It is\
 provided by Sun/Oracle only in binary format.\
 Java Platform, Standard Edition (Java SE) lets you develop and deploy Java\
 applications on desktops and servers, as well as in today's demanding\
 embedded environments. Java offers the rich user interface, performance,\
 versatility, portability, and security that today's applications require.\
 To develop Java applications and applets, you need the JDK (Java Development\
 Kit), which includes the JRE."

JDK_JRE = "jdk"
require oracle-jse.inc

do_install_class-native() {
	install -d				${D}${libdir_jvm}
	cp -a ${S}/${JDK_JRE}${PV}_${PV_UPDATE}	${D}${JDK_HOME}

	install -d				${D}${bindir}
	ln -sf ${JDK_HOME}/bin/java		${D}${bindir}
	ln -sf ${JDK_HOME}/bin/javac		${D}${bindir}

	install -d				${D}${JDK_HOME}/bin
	ln -sf javah				${D}${JDK_HOME}/bin/gjavah
	ln -sf jar				${D}${JDK_HOME}/bin/fastjar
}

BBCLASSEXTEND = "native"

RPROVIDES_${PN} += "java2-development"
PROVIDES += "virtual/javac virtual/java-initial"

pkg_postinst_${PN} () {
	update-alternatives --install ${bindir}/jar   jar   ${JDK_HOME}/bin/jar 100
	update-alternatives --install ${bindir}/java  java  ${JDK_HOME}/bin/java 100
	update-alternatives --install ${bindir}/javac javac ${JDK_HOME}/bin/javac 100
	update-alternatives --install ${bindir}/javah javah ${JDK_HOME}/bin/javah 100
}

pkg_prerm_${PN} () {
	update-alternatives --remove jar   ${JDK_HOME}/bin/jar
	update-alternatives --remove java  ${JDK_HOME}/bin/java
	update-alternatives --remove javac ${JDK_HOME}/bin/javac
	update-alternatives --remove javah ${JDK_HOME}/bin/javah
}
