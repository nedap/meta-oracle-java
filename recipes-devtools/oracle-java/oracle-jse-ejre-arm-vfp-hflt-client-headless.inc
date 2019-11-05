PV_UPDATE = "121"
BUILD_NUMBER = "13"
LICENSE_DIR = "ejdk${PV}_${PV_UPDATE}/linux_armv6_vfp_hflt/jre"

require oracle-jse-ejre.inc

SRC_URI = "http://nvs0336/os-resources/oracle/ejdk-8u${PV_UPDATE}-linux-armv6-vfp-hflt.tar.gz"

SRC_URI[md5sum] = "e03ede35c89bd856ecec74c2f2f5f8f9"
SRC_URI[sha256sum] = "f67a6f0ee384b51badb1073078f6ead98e0949e6b983a0652a4ad06b4effab38"
