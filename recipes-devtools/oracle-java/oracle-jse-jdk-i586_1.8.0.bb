PV_UPDATE = "121"
BUILD_NUMBER = "13"

require oracle-jse-jdk.inc

SRC_URI = "http://nvs0336/os-resources/oracle/jdk-8u${PV_UPDATE}-linux-i586.tar.gz"

SRC_URI[md5sum] = "9e0e84f36427ce258abfca35fbeb0c55"
SRC_URI[sha256sum] = "f7d6cf1468c5e71ff097bec0189caccdd8e709a2a88a2c9849ad6200c0f33d4c"

COMPATIBLE_HOST = "(i586.*-linux)"
