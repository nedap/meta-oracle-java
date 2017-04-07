SUMMARY = "Oracle Java SE runtime environment binaries"
DESCRIPTION = "This is the proprietary JRE from Sun/Oracle, with the Hotspot JVM. It is\
 provided by Sun/Oracle only in binary format.\
 Java Platform, Standard Edition (Java SE) lets you develop and deploy Java\
 applications on desktops and servers, as well as in today's demanding\
 embedded environments. Java offers the rich user interface, performance,\
 versatility, portability, and security that today's applications require.\
 The JRE (Java Runtime Environment) is needed on a system to run Java\
 applications and applets"

JDK_JRE = "ejre"
require oracle-jse.inc

DEPENDS = "virtual/java-native"

LIC_FILES_CHKSUM = "\
	file://${LICENSE_DIR}/COPYRIGHT;md5=3dc1bfbd5bed75d650ad0506a0df5930 \
	file://${LICENSE_DIR}/THIRDPARTYLICENSEREADME.txt;md5=745d6db5fc58c63f74ce6a7d4db7e695 \
	"

do_compile() {
	DEST=${S}/ejre${PV}_${PV_UPDATE}/jre
	rm -rf ${DEST}
	JAVA_HOME=${STAGING_DIR_NATIVE}/${JDK_HOME} ejdk${PV}_${PV_UPDATE}/bin/jrecreate.sh --dest ${DEST}
}
