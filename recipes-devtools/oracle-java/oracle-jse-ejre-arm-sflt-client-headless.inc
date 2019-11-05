PV_UPDATE = "121"
BUILD_NUMBER = "13"
LICENSE_DIR = "ejdk${PV}_${PV_UPDATE}/linux_arm_sflt/jre"

require oracle-jse-ejre.inc

SRC_URI = "http://nvs0336/os-resources/oracle/ejdk-8u${PV_UPDATE}-linux-arm-sflt.tar.gz"

SRC_URI[md5sum] = "11041e7eedd897d70cabe54f29d10587"
SRC_URI[sha256sum] = "9ad72839dba09e336954c7653778a2517e6d0e56a9524f4c11ff008ad3eb4637"
