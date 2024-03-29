BROKEN-powerpc64 =	Check failed: false. OS architecture not handled. (powerpc64)

USE_WXNEEDED=		Yes

DPB_PROPERTIES=		parallel parallel2

COMMENT=		Chromium browser

V=			100.0.4896.127

DISTNAME=		chromium-${V}

DISTFILES+=		${EXTRACT_ONLY} \
			${REGRESS_DISTFILES}

REGRESS_DISTFILES+=	chromium-${V}-testdata${EXTRACT_SUFX} \
			test_fonts-cd96fc55dc243f6c6f4cb63ad117cad6cd48dceb.tar.gz:0

EXTRACT_ONLY=		chromium-${V}${EXTRACT_SUFX}

CATEGORIES=		www

HOMEPAGE=		https://www.chromium.org/Home

MAINTAINER=		Robert Nagy <robert@openbsd.org>

EXTRACT_SUFX=		.tar.xz

FLAVORS=		component
PSEUDO_FLAVORS=		debug
FLAVOR?=

# BSD-like
PERMIT_PACKAGE =	Yes

MASTER_SITES=	https://commondatastorage.googleapis.com/chromium-browser-official/
MASTER_SITES0=	http://nerd.hu/distfiles/

MODULES=	lang/python

COMPILER =	base-clang ports-clang ports-gcc

MODPY_RUNDEP=		No
MODPY_SETUPTOOLS=	Yes

PATCHORIG=	.orig.port

# uses pledge()
WANTLIB += X11 Xext Xfixes Xrender c cups dbus-1 event
WANTLIB += execinfo Xft
WANTLIB += gdk_pixbuf-2.0 glib-2.0 gobject-2.0
WANTLIB += m
WANTLIB += kvm pthread
WANTLIB += xslt
WANTLIB += sndio
WANTLIB += ${COMPILER_LIBCXX}
WANTLIB += Xi Xtst
WANTLIB += Xcursor Xrandr gio-2.0
WANTLIB += nspr4 nss3 nssutil3 smime3
WANTLIB += atk-bridge-2.0
WANTLIB += X11-xcb xcb
WANTLIB += GL expat
WANTLIB += atk-1.0 cairo gdk-3 gtk-3 pango-1.0
WANTLIB += pangocairo-1.0
WANTLIB += Xcomposite Xdamage
WANTLIB += EGL Xau Xdmcp Xinerama Xxf86vm atspi cairo-gobject
WANTLIB += drm epoxy fontconfig freetype fribidi gmodule-2.0 graphite2
WANTLIB += gthread-2.0 intl pangoft2-1.0 pcre pixman-1
WANTLIB += plc4 plds4 util xcb-dri2 xcb-glx xcb-render xcb-shm
WANTLIB += xml2 z
WANTLIB += harfbuzz harfbuzz-subset harfbuzz-gobject
WANTLIB += ffi png
WANTLIB += iconv lzma
WANTLIB += fido2 cbor usbhid crypto
WANTLIB += gbm xkbcommon
WANTLIB += tiff xshmfence
WANTLIB += lzo2

RUN_DEPENDS=	devel/xdg-utils \
		devel/desktop-file-utils \
		fonts/noto/fonts \
		graphics/libexif \
		x11/gtk+3,-guic \
		x11/gtk+3,-cups
BUILD_DEPENDS=	archivers/bzip2 \
		devel/gperf \
		devel/bison \
		lang/node \
		shells/bash \
		sysutils/flock \
		sysutils/pciutils \
		devel/ninja \
		x11/gtk+3 \
		x11/py-xcbgen${MODPY_FLAVOR} \
		${MODGCC4_CPPDEP}
LIB_DEPENDS=	devel/harfbuzz \
		graphics/tiff \
		security/nss \
		textproc/libxslt \
		x11/gtk+3 \
		x11/xkbcommon \
		print/cups,-libs \
		${MODGCC4_CPPLIBDEP}

.include <bsd.own.mk>

# Set BUILDTYPE to Release
BUILDTYPE=	Release

SUBST_VARS+=	WRKSRC WRKDIR DEBUGFLAG

ALL_TARGET=		chrome chromedriver
TEST_TARGET=		base_unittests \
			blink_unittests \
			chromedriver_unittests \
			components_unittests \
			content_unittests \
			crypto_unittests \
			gl_tests \
			gpu_unittests \
			headless_unittests \
			media_unittests \
			mojo_unittests \
			net_unittests \
			printing_unittests \
			skia_unittests \
			url_unittests \
			wm_unittests

DIST_TARGET_DIR=	chrome

CONFIGURE_STYLE=none # prevent python MODULE from overriding do-build

BUILDDIR=	${WRKSRC}/out/${BUILDTYPE}

# These libraries are used from the system and the build infrastructure
# removes them from the bundled third_party directory and replaces them
# with hooks to use them from the system.
GN_SYSTEM_LIBS=	libevent \
		libxslt

GN_ARGS=	enable_nacl=false \
		is_official_build=true \
		is_debug=false \
		is_cfi=false \
		optimize_webui=true \
		enable_js_type_check=false \
		enable_one_click_signin=true \
		enable_remoting=false \
		enable_hangout_services_extension=true \
		use_kerberos=false \
		use_sndio=true \
		use_cups=true \
		use_system_libdrm=true \
		use_bundled_fontconfig=false \
		use_system_harfbuzz=true \
		use_system_freetype=false \
		use_gnome_keyring=false \
		is_clang=true \
		use_sysroot=false \
		treat_warnings_as_errors=false \
		clang_use_chrome_plugins=false \
		use_allocator=\"none\" \
		use_allocator_shim=false \
		disable_fieldtrial_testing_config=true \
		extra_cppflags=\"-idirafter ${LOCALBASE}/include -idirafter ${X11BASE}/include\" \
		fatal_linker_warnings=false \
		use_custom_libcxx=false \
		enable_wmax_tokens=false \
		use_thin_lto=false \
		thin_lto_enable_optimizations=false \
		use_udev=false

# notyet
GN_ARGS+=	use_vaapi=false

.if ${MACHINE_ARCH} == "i386"
GN_ARGS+=	extra_ldflags=\"-L${LOCALBASE}/lib -L${X11BASE}/lib -Wl,--no-keep-memory\"
.else
GN_ARGS+=	extra_ldflags=\"-L${LOCALBASE}/lib -L${X11BASE}/lib\"
.endif

.if ${MACHINE_ARCH} == "aarch64"
PKG_ARGS+=	-Dswiftshader=0
.else
PKG_ARGS+=	-Dswiftshader=1
.endif

# Note: these keys are for OpenBSD use ONLY. For your own distribution,
# please get your own set of keys. It's free!
GN_ARGS+=	google_api_key=\"AIzaSyA015yecfJyWi8UQpneQVrNzIKlxjv4MhI\" \
		ffmpeg_branding=\"Chrome\" \
		proprietary_codecs=true

# These are now restricted to use by Google, so bye-bye sync.
#GN_ARGS+=	google_default_client_id=\"451220141585.apps.googleusercontent.com\"
#GN_ARGS+=	google_default_client_secret=\"nQcDyaBvDyCeDrsRqKIWSHJn\" \

# XXX dwz doesn't work with chromium yet
DWZ = :

.if ${FLAVOR:Mdebug}
GN_ARGS+=	symbol_level=1
DEBUG_PACKAGES=	${BUILD_PACKAGES}
.else
GN_ARGS+=	symbol_level=0
.endif

.if ${FLAVOR:Mcomponent}
GN_ARGS+=	is_component_build=true
.else
GN_ARGS+=	is_component_build=false
.endif

pre-configure:
	@ln -sf ${MODPY_BIN} ${WRKDIR}/bin/python
.for _arch in x64 ia32 arm64
.  for _dir in avcodec avformat avutil
	@cp -pR ${WRKSRC}/third_party/ffmpeg/chromium/config/Chrome/linux/${_arch}/lib${_dir} \
		${WRKSRC}/third_party/ffmpeg/chromium/config/Chrome/openbsd/${_arch}/lib${_dir}
.  endfor
.endfor
	@mkdir -p ${WRKSRC}/third_party/node/openbsd/node-openbsd/bin
	@ln -sf ${TRUEPREFIX}/bin/node ${WRKSRC}/third_party/node/openbsd/node-openbsd/bin/node
	${SUBST_CMD} ${WRKSRC}/build/gn_run_binary.py ${WRKSRC}/v8/tools/run.py \
		${WRKSRC}/tools/protoc_wrapper/protoc_wrapper.py \
		${WRKSRC}/third_party/blink/renderer/build/scripts/run_with_pythonpath.py \
		${WRKSRC}/base/third_party/libevent/BUILD.gn

# Configuration consists of three steps:
# 1. replace the specified bundled libraries with hooks to use the system libs
# 2. bootstrap gn, the tool to generate ninja files
# 3. run gn with the appropriate configuration arguments
do-configure:
	@cd ${WRKSRC} && env -i ${MAKE_ENV} build/linux/unbundle/replace_gn_files.py \
		--system-libraries ${GN_SYSTEM_LIBS}
	@cd ${WRKSRC}/tools/gn && env -i ${MAKE_ENV} LDFLAGS=-L${LOCALBASE}/lib ${MODPY_BIN} bootstrap/bootstrap.py \
		--no-clean -s --gn-gen-args "${GN_ARGS}"
	@cd ${WRKSRC} && env -i ${CONFIGURE_ENV} ${WRKSRC}/out/Release/gn \
		gen --args="${GN_ARGS}" out/${BUILDTYPE}

do-build:
	@cd ${WRKSRC} && env -i ${MAKE_ENV} ninja \
		-j ${MAKE_JOBS} -C out/${BUILDTYPE} ${ALL_TARGET}

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/${DIST_TARGET_DIR}
	${INSTALL_PROGRAM} ${BUILDDIR}/${DIST_TARGET_DIR} ${PREFIX}/${DIST_TARGET_DIR}
	${SUBST_PROGRAM} ${FILESDIR}/${DIST_TARGET_DIR} ${PREFIX}/bin/${DIST_TARGET_DIR}
	${INSTALL_PROGRAM} ${BUILDDIR}/chromedriver.unstripped ${PREFIX}/bin/chromedriver
	${INSTALL_MAN} ${WRKSRC}/chrome/app/resources/manpage.1.in ${PREFIX}/man/man1/chrome.1
	@perl -pi -e "s,\@\@PACKAGE\@\@,chromium,g;s,\@\@MENUNAME\@\@,Chromium Web Browser,g" \
		${PREFIX}/man/man1/chrome.1
	${INSTALL_DATA} ${BUILDDIR}/*.pak ${PREFIX}/${DIST_TARGET_DIR}

	${INSTALL_DATA_DIR} ${PREFIX}/${DIST_TARGET_DIR}/locales
	${INSTALL_DATA} ${BUILDDIR}/locales/* ${PREFIX}/${DIST_TARGET_DIR}/locales
	${INSTALL_DATA} ${BUILDDIR}/*.png ${PREFIX}/${DIST_TARGET_DIR}
	${INSTALL_DATA_DIR} ${PREFIX}/${DIST_TARGET_DIR}/resources
	@cp -Rp ${BUILDDIR}/resources/* ${PREFIX}/${DIST_TARGET_DIR}/resources
	@chown -R ${SHAREOWN}:${SHAREGRP} ${PREFIX}/${DIST_TARGET_DIR}/resources
.for f in icudtl.dat snapshot_blob.bin v8_context_snapshot.bin
	${INSTALL_DATA} ${BUILDDIR}/${f} ${PREFIX}/${DIST_TARGET_DIR}
.endfor

	# ANGLE, EGL, Vk
.for f in libEGL libGLESv2
	${INSTALL_DATA} ${BUILDDIR}/${f}.so ${PREFIX}/${DIST_TARGET_DIR}
.endfor
.for f in libVkICD_mock_icd
	${INSTALL_DATA} ${BUILDDIR}/${f}.so ${PREFIX}/${DIST_TARGET_DIR}
.endfor
	${INSTALL_DATA} ${BUILDDIR}/libvulkan.so.1 \
		${PREFIX}/${DIST_TARGET_DIR}/libvulkan.so

.if ${MACHINE_ARCH} != "aarch64"
	# SwiftShader
	${INSTALL_DATA_DIR} ${PREFIX}/${DIST_TARGET_DIR}/swiftshader
	${INSTALL_DATA} ${BUILDDIR}/libvk_swiftshader.so ${PREFIX}/${DIST_TARGET_DIR}
.for f in libEGL.so libGLESv2.so
	${INSTALL_DATA} ${BUILDDIR}/swiftshader/${f} ${PREFIX}/${DIST_TARGET_DIR}/swiftshader
.endfor
.endif

.if ${FLAVOR:Mcomponent}
	cp -Rp ${BUILDDIR}/*.so ${BUILDDIR}/*.so.[0-9] ${PREFIX}/${DIST_TARGET_DIR}/
.endif

.for s in 22_mono 24 48 64 128 256
	${INSTALL_DATA_DIR} ${PREFIX}/share/icons/hicolor/${s}x${s}/apps
	${INSTALL_DATA} ${WRKSRC}/${DIST_TARGET_DIR}/app/theme/chromium/product_logo_${s}.png \
		${PREFIX}/share/icons/hicolor/${s}x${s}/apps/chrome.png
.endfor
	${INSTALL_DATA_DIR} ${PREFIX}/share/applications
	${INSTALL_DATA} ${FILESDIR}/chromium-browser.desktop \
		${PREFIX}/share/applications/chromium-browser.desktop

	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/chromium
.for f in pledge.main pledge.utility_audio pledge.utility_network pledge.utility_video \
    unveil.gpu unveil.main unveil.plugin unveil.renderer unveil.utility unveil.utility_audio \
    unveil.utility_network unveil.utility_video
	${INSTALL_DATA} ${FILESDIR}/${f} ${PREFIX}/share/examples/chromium
.endfor

pre-test:
.for _d in ${REGRESS_DISTFILES:C/:[0-9]$//}
	@${ECHO_MSG} "Extracting ${_d}"
	@case ${_d} in \
	*testdata*.tar.xz) \
		xzdec <${FULLDISTDIR}/${_d} | ${TAR} -C ${WRKDIR} -xf -;; \
	*font*.tar.gz) \
		${GZIP_CMD} -d <${FULLDISTDIR}/${_d} | ${TAR} -C ${WRKDIST}/third_party/test_fonts -xf -;; \
	esac;
.endfor

do-test:
	@cd ${WRKSRC} && env -i ${MAKE_ENV} ninja \
		-j ${MAKE_JOBS} -C out/${BUILDTYPE} ${TEST_TARGET}

.include <bsd.port.mk>
