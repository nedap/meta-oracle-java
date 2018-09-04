PV_UPDATE = "131"
BUILD_NUMBER = "11"
LICENSE_DIR = "ejdk${PV}_${PV_UPDATE}/linux_arm_sflt/jre"

require oracle-jse-ejre.inc

SRC_URI = "http://download.oracle.com/otn/java/ejdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/d54c1d3a095b4ff2b6607d096fa80163/ejdk-8u${PV_UPDATE}-linux-arm-sflt.tar.gz"

SRC_URI[md5sum] = "131b2f7eff8835c13ceddc0c4a01e8fd"
SRC_URI[sha256sum] = "5e341af9f6feb5343d6acf182444ac8d50687852ca3477aa8d83f7f92552cd53"
