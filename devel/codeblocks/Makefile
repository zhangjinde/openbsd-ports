BROKEN-alpha=	sqvm.cpp:394:1: internal compiler error: Segmentation fault
COMMENT=	Code::Blocks C/C++ IDE

R=		12751
V=		20.03
REVISION=	0

DISTNAME=	codeblocks-${V}pl${R}
EXTRACT_SUFX=	.tar.xz

# source tarball for this OpenBSD-specific patch level:
MASTER_SITES=	https://jggimi.net/codeblocks/
#MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=codeblocks/Sources/${V}/}

DEBUG_PACKAGES=${BUILD_PACKAGES}

SHARED_LIBS +=  codeblocks           0.1      # 0.1
SHARED_LIBS +=  wxchartctrl          0.1      # 0.1
SHARED_LIBS +=  wxflatnotebook       0.1      # 0.1
SHARED_LIBS +=  wxcustombutton       0.1      # 0.1
SHARED_LIBS +=  wximagepanel         0.1      # 0.1
SHARED_LIBS +=  wxspeedbutton        0.1      # 0.1
SHARED_LIBS +=  wxkwic               0.1      # 0.1
SHARED_LIBS +=  wxtreelist           0.1      # 0.1
SHARED_LIBS +=  wxled                0.1      # 0.1
SHARED_LIBS +=  wxsmithlib           0.1      # 0.1
SHARED_LIBS +=  wxmathplot           0.1      # 0.1

CATEGORIES=	devel x11
DPB_PROPERTIES= parallel

MAINTAINER=	Josh Grosse <josh@jggimi.net>
HOMEPAGE=	http://www.codeblocks.org/

# GPLv3
PERMIT_PACKAGE=	Yes

WANTLIB += ${COMPILER_LIBCXX} ICE SDL2 SM X11 Xcomposite Xcursor
WANTLIB += Xau Xdmcp Xdamage Xext Xfixes Xi Xinerama Xrandr Xrender Xss
WANTLIB += Xxf86vm atk-1.0 atk-bridge-2.0 boost_system bz2 c cairo
WANTLIB += cairo-gobject curses epoxy execinfo expat ffi fontconfig
WANTLIB += freetype fribidi gamin-1 gdk-3 gdk_pixbuf-2.0 gio-2.0
WANTLIB += glib-2.0 gmodule-2.0 gobject-2.0 graphite2 gthread-2.0
WANTLIB += gtk-3 harfbuzz hunspell-1.7 iconv intl jpeg lzma m
WANTLIB += mspack notify pango-1.0 pangocairo-1.0 pangoft2-1.0
WANTLIB += pcre pixman-1 png samplerate sndio tiff usbhid wx_baseu-3.0
WANTLIB += wx_baseu_net-3.0 wx_baseu_xml-3.0 wx_gtk3u_adv-3.0
WANTLIB += wx_gtk3u_aui-3.0 wx_gtk3u_core-3.0 wx_gtk3u_html-3.0
WANTLIB += wx_gtk3u_propgrid-3.0 wx_gtk3u_qa-3.0 wx_gtk3u_richtext-3.0
WANTLIB += wx_gtk3u_xrc-3.0 xcb xcb-render xcb-shm z zstd

BUILD_DEPENDS=	archivers/zip

LIB_DEPENDS=	archivers/bzip2 \
		devel/boost \
		sysutils/gamin \
		textproc/hunspell \
		x11/wxWidgets>=3.0.4

RUN_DEPENDS=	devel/desktop-file-utils \
		misc/shared-mime-info \
		x11/gtk+3,-guic

# C++11
COMPILER =		base-clang ports-gcc

AUTOCONF_VERSION=	2.69
AUTOMAKE_VERSION=	1.15
BUILD_DEPENDS +=	${MODGNU_AUTOCONF_DEPENDS} \
			${MODGNU_AUTOMAKE_DEPENDS} \
			devel/libtool

CONFIGURE_STYLE=autoreconf
AUTORECONF=	./bootstrap

CXXFLAGS +=	-std=c++11
CONFIGURE_ENV=	CPPFLAGS="-I${X11BASE}/include -I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib"
CONFIGURE_ARGS=	--with-contrib-plugins=all
CONFIGURE_ARGS += --enable-debug
CONFIGURE_ARGS += --with-boost-libdir=${LOCALBASE}/lib

post-patch:
	echo : > ${WRKSRC}/update_revision.sh
	echo 'm4_define([SVN_REV], ${R})' > ${WRKSRC}/revision.m4
	echo 'm4_define([SVN_REVISION], ${V}svn${R})' >> ${WRKSRC}/revision.m4
	echo 'm4_define([SVN_DATE], )' >> ${WRKSRC}/revision.m4

pre-configure:
	${SUBST_CMD} ${WRKSRC}/src/plugins/compilergcc/compilergcc.cpp

post-install:
	find ${PREFIX}/share/codeblocks -type f -perm 444 \
		-exec chmod 644 '{}' +
	rm ${PREFIX}/lib/codeblocks/plugins/*.{a,la}

.include <bsd.port.mk>
