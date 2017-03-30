# Automatically choose java package based on target architecture
def get_java_pkg(d):
	TA = d.getVar('TARGET_ARCH', True)
	if TA == "arm":
		FPU = d.getVar('TARGET_FPU', True)
		if FPU == "soft":
			javaPkg = "oracle-jse-ejre-arm-sflt-client-headless"
		else:
			javaPkg = "oracle-jse-ejre-arm-vfp-hflt-client-headless"
	elif TA == "i586":
		javaPkg = "oracle-jse-jre-i586"
	elif TA == "x86_64":
		javaPkg = "oracle-jse-jre-x86-64"
	else:
		raise bb.parse.SkipPackage("Target architecture '%s' is not supported by the meta-oracle-java layer" %TA)

	return javaPkg

JAVA_PKG = "${@get_java_pkg(d)}"

require ${JAVA_PKG}.inc
