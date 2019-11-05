PV_UPDATE = "121"
BUILD_NUMBER = "13"

require oracle-jse-jdk.inc

SRC_URI = "http://nvs0336/os-resources/oracle/jdk-8u${PV_UPDATE}-linux-x64.tar.gz"

SRC_URI[md5sum] = "91972fb4e753f1b6674c2b952d974320"
SRC_URI[sha256sum] = "97e30203f1aef324a07c94d9d078f5d19bb6c50e638e4492722debca588210bc"

COMPATIBLE_HOST = "(x86_64.*-linux)"
