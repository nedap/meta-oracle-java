PV_UPDATE = "91"
BUILD_NUMBER = "14"

require oracle-jse-jre.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/jre-8u${PV_UPDATE}-linux-i586.tar.gz"

SRC_URI[md5sum] = "705521705f0ddaa150f64090e56ae96c"
SRC_URI[sha256sum] = "02071642f1628136516c88c11e46664a8cc363e685e9f066123b41d741567f43"

