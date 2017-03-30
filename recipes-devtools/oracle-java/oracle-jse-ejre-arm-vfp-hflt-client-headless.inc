PV_UPDATE = "121"
BUILD_NUMBER = "13"
LICENSE_DIR = "ejdk${PV}_${PV_UPDATE}/linux_armv6_vfp_hflt/jre"

require oracle-jse-ejre.inc

SRC_URI = "http://download.oracle.com/otn/java/ejdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/e9e7ea248e2c4826b92b3f075a80e441/ejdk-8u${PV_UPDATE}-linux-armv6-vfp-hflt.tar.gz"

SRC_URI[md5sum] = "e03ede35c89bd856ecec74c2f2f5f8f9"
SRC_URI[sha256sum] = "f67a6f0ee384b51badb1073078f6ead98e0949e6b983a0652a4ad06b4effab38"
