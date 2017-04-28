PV_UPDATE = "131"
BUILD_NUMBER = "11"

require oracle-jse-jdk.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/d54c1d3a095b4ff2b6607d096fa80163/jdk-8u${PV_UPDATE}-linux-i586.tar.gz"

SRC_URI[md5sum] = "a6741fd674372366546bd8480be735c7"
SRC_URI[sha256sum] = "0069a2b1b1cddbefa45f1ff12933fca3b114b6544d536ec0e2d4861a830d7154"

COMPATIBLE_HOST = "(i586.*-linux)"
