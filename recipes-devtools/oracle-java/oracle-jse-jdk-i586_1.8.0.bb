PV_UPDATE = "91"
BUILD_NUMBER = "14"

require oracle-jse-jdk.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/jdk-8u${PV_UPDATE}-linux-i586.tar.gz"

SRC_URI[md5sum] = "f18cbe901f2c77630f1e301cea32b259"
SRC_URI[sha256sum] = "5ecd05b5e566cbe688fc1e3159f04004ccad14d4faa3f50d15ffba1d50b4cd52"

COMPATIBLE_HOST = "(i586.*-linux)"
