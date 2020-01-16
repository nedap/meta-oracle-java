PV_UPDATE = "211"
BUILD_NUMBER = "12"
LICENSE_DIR = "ejdk${PV}_${PV_UPDATE}/linux_arm_sflt/jre"

require oracle-jse-ejre.inc

SRC_URI = "http://nvs0336/os-resources/oracle/ejdk-8u${PV_UPDATE}-linux-arm-sflt.tar.gz"

SRC_URI[md5sum] = "22d3b9513918b76ac00e9053f8b5963f"
SRC_URI[sha256sum] = "d6b35496bd29e08cb73eadbfef7e026ac9713c1f6a1f0907d1e35dff21e7b6b2"
