PV_UPDATE = "91"
BUILD_NUMBER = "14"

require oracle-jse-jre.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/jre-8u${PV_UPDATE}-linux-x64.tar.gz"

SRC_URI[md5sum] = "cc48b4cacfeda1f699b43ea77ddfaa95"
SRC_URI[sha256sum] = "66d8971b240bbd03d114308958fff0fb8068d0589122885d9591727e5472137f"
