COMMENT=		framework for defining and tracking users, sessions & seats

PKGNAME=		${DISTNAME:L}
REVISION=		0

GH_TAGNAME=		1.2.4
GH_ACCOUNT=		ConsoleKit2
GH_PROJECT=		ConsoleKit2

CATEGORIES=		sysutils	

SHARED_LIBS +=  consolekit           0.1      # 1.0
SHARED_LIBS +=  ck-connector         1.2      # 0.0

MAINTAINER=		Antoine Jacoutot <ajacoutot@openbsd.org>

# GPLv2+
PERMIT_PACKAGE=	Yes

WANTLIB =  ICE SM X11 c dbus-1 drm execinfo ffi gio-2.0 glib-2.0
WANTLIB += gmodule-2.0 gobject-2.0 iconv intl kvm pcre polkit-gobject-1
WANTLIB += pthread xcb z

USE_GMAKE=		Yes

BUILD_DEPENDS=		devel/gobject-introspection \
			textproc/xmlto

LIB_DEPENDS=		sysutils/polkit

# /usr/local/share/dbus-1/system-services/
RUN_DEPENDS +=		x11/dbus,-suid

CONFIGURE_STYLE=	gnu
CONFIGURE_ARGS=		--disable-pam-module \
			--with-pam-module-dir=${LOCALBASE}/lib/security

DEBUG_PACKAGES=		${BUILD_PACKAGES}

FAKE_FLAGS=		DBUS_SYS_DIR=${TRUEPREFIX}/share/examples/consolekit/dbus-1 \
			sysconfdir=${TRUEPREFIX}/share/examples/consolekit

AUTOCONF_VERSION=	2.69
AUTOMAKE_VERSION=	1.15
BUILD_DEPENDS +=	${MODGNU_AUTOCONF_DEPENDS} \
			${MODGNU_AUTOMAKE_DEPENDS} \
			devel/gettext,-tools \
			devel/libtool

pre-configure:
	cd ${WRKSRC} && \
		AUTOCONF_VERSION=${AUTOCONF_VERSION} \
		AUTOMAKE_VERSION=${AUTOMAKE_VERSION} \
		NOCONFIGURE=1 \
		/bin/sh ./autogen.sh ${CONFIGURE_ARGS}

post-install:
	rmdir ${WRKINST}/var/run/ConsoleKit
	rm -r ${WRKINST}/${SYSCONFDIR}/X11/xinit/xinitrc.d \
		${PREFIX}/share/examples/consolekit/logrotate.d
	${INSTALL_DATA_DIR} ${PREFIX}/share/polkit-1/rules.d
	${INSTALL_DATA} ${FILESDIR}/10-openbsd-consolekit.rules \
		${PREFIX}/share/polkit-1/rules.d

.include <bsd.port.mk>
