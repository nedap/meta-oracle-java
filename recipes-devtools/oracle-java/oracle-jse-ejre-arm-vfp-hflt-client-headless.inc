PV_UPDATE = "131"
BUILD_NUMBER = "11"
LICENSE_DIR = "ejdk${PV}_${PV_UPDATE}/linux_armv6_vfp_hflt/jre"

require oracle-jse-ejre.inc

SRC_URI = "http://download.oracle.com/otn/java/ejdk/8u${PV_UPDATE}-b${BUILD_NUMBER}/d54c1d3a095b4ff2b6607d096fa80163/ejdk-8u${PV_UPDATE}-linux-armv6-vfp-hflt.tar.gz"

SRC_URI[md5sum] = "85ceb493211d05ec7cbc8258eaee023e"
SRC_URI[sha256sum] = "5dcc644c999e7109efe46669ac717f3b96f3bbdeac3cb66f072ca4dfbc405b8e"
