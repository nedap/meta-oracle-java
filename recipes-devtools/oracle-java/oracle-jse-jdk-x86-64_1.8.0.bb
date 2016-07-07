PV_UPDATE = "91"
BUILD_NUMBER = "14"

require oracle-jse-jdk.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/jdk-8u${PV_UPDATE}-linux-x64.tar.gz"

SRC_URI[md5sum] = "3f3d7d0cd70bfe0feab382ed4b0e45c0"
SRC_URI[sha256sum] = "6f9b516addfc22907787896517e400a62f35e0de4a7b4d864b26b61dbe1b7552"

COMPATIBLE_HOST = "(x86_64.*-linux)"
