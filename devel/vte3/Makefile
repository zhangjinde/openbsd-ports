COMMENT=		terminal emulation library

GNOME_PROJECT=		vte
GNOME_VERSION=		0.68.0
API_V=			2.91
SUBST_VARS +=		API_V

PKGNAME=		vte3-${GNOME_VERSION}

SHARED_LIBS += vte-2.91                  2.8 # 0.6800.0

CATEGORIES=		devel

MAINTAINER=		Jasper Lievisse Adriaanse <jasper@openbsd.org>, \
			Antoine Jacoutot <ajacoutot@openbsd.org>

# LGPLv2.1
PERMIT_PACKAGE=	Yes

WANTLIB += atk-1.0 c cairo cairo-gobject fribidi gdk-3 gdk_pixbuf-2.0
WANTLIB += gio-2.0 glib-2.0 gnutls gobject-2.0 gtk-3 icuuc intl
WANTLIB += m pango-1.0 pangocairo-1.0 pcre2-8 z
WANTLIB += ${COMPILER_LIBCXX}

MODULES=		devel/meson \
			x11/gnome

# C++20
COMPILER =		base-clang ports-clang

DEBUG_PACKAGES =	${BUILD_PACKAGES}

BUILD_DEPENDS=		devel/gperf
# src/box_drawing_generate.sh
BUILD_DEPENDS+=		shells/bash

LIB_DEPENDS=		devel/pcre2>=10.22p0 \
			security/gnutls \
			textproc/icu4c \
			x11/gtk+3

MODGNOME_TOOLS=		gobject-introspection vala

TEST_DEPENDS=		shells/bash

.include <bsd.port.arch.mk>
.if !${PROPERTIES:Mlld}
# -Bsymbolic-functions is not supported by ld.bfd
CONFIGURE_ARGS +=	-D_b_symbolic_functions=false
.endif

# XXX: https://bugzilla.gnome.org/show_bug.cgi?id=675987
post-install:
	rm -r ${WRKINST}${SYSCONFDIR}/profile.d

.include <bsd.port.mk>
