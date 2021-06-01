# $OpenBSD: Makefile,v 1.2 2021/05/28 16:50:41 ajacoutot Exp $

COMMENT =		HTTP client/server library for GNOME

GNOME_PROJECT =		libsoup
GNOME_VERSION =		2.99.7
PKGNAME=		libsoup3-${GNOME_VERSION}

SHARED_LIBS += soup-3.0                  0.0 # 0.0.0

API_VERSION =		3.0
SUBST_VARS =		API_VERSION

CATEGORIES =		devel www

MAINTAINER =		Jasper Lievisse Adriaanse <jasper@openbsd.org>, \
			Antoine Jacoutot <ajacoutot@openbsd.org>

# LGPLv2
PERMIT_PACKAGE=	Yes

WANTLIB += brotlidec gio-2.0 glib-2.0 gobject-2.0 intl nghttp2
WANTLIB += psl sqlite3 z

MODULES =		devel/meson \
			x11/gnome

MODGNOME_TOOLS =	gobject-introspection vala

# needed for tests
BUILD_DEPENDS +=	textproc/libxml

RUN_DEPENDS =		net/glib2-networking

LIB_DEPENDS =		archivers/brotli \
			databases/sqlite3 \
			devel/glib2 \
			net/libpsl \
			www/nghttp2

CONFIGURE_ARGS =	-Dgssapi=disabled \
			-Dntlm=disabled \
			-Dsysprof=disabled \
			-Dtls_check=false

# requires unported wstest and dependency on apache2, python quart...
CONFIGURE_ARGS +=	-Dautobahn=disabled \
			-Dtests=false

DEBUG_PACKAGES =	${BUILD_PACKAGES}

.include <bsd.port.mk>