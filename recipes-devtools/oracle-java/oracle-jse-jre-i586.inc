PV_UPDATE = "131"
BUILD_NUMBER = "11"

require oracle-jse-jre.inc

SRC_URI = "http://download.oracle.com/otn-pub/java/jdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/d54c1d3a095b4ff2b6607d096fa80163/jre-8u${PV_UPDATE}-linux-i586.tar.gz"

SRC_URI[md5sum] = "c88bb459288ee336a0f6109be169bc8c"
SRC_URI[sha256sum] = "a773f2fe17061ef637ed2094b06313a99c0b45ba3d3cb7f8f1ebf18448495aeb"
