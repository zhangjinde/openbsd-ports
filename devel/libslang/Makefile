COMMENT=	stack-based interpreter for terminal applications

DISTNAME=	slang-2.3.2
PKGNAME=	lib${DISTNAME}
EXTRACT_SUFX=	.tar.bz2
SHARED_LIBS=	slang 16.1

CATEGORIES=	devel
MASTER_SITES=	http://www.jedsoft.org/releases/slang/ \
		http://www.jedsoft.org/releases/slang/old/

HOMEPAGE=	http://jedsoft.org/slang/

# Artistic
PERMIT_PACKAGE=	Yes

WANTLIB += c curses iconv m onig pcre png z

LIB_DEPENDS=		converters/libiconv \
			devel/pcre \
			graphics/png \
			textproc/oniguruma

AUTOCONF_VERSION=	2.69
CONFIGURE_STYLE=	autoconf no-autoheader
AUTOCONF_DIR=		${WRKSRC}/autoconf
MODGNU_CONFIG_GUESS_DIRS= ${WRKSRC}/autoconf

CONFIGURE_ARGS=		--with-pnginc=${LOCALBASE}/include \
			--with-pnglib=${LOCALBASE}/lib
TEST_TARGET=		runtests
TEST_FLAGS=		TCAPLIB="-ltermlib"

LIBslang_MAJOR=${LIBslang_VERSION:R}

SUBST_VARS += LIBslang_MAJOR

MAKE_ENV=		LIBslang_MAJOR=${LIBslang_MAJOR} \
			LIBslang_MINOR=${LIBslang_VERSION:E}

pre-configure:
	cd ${AUTOCONF_DIR}; cp configure ..

post-install:
	mkdir -p ${PREFIX}/share/slsh/examples
	mv ${WRKINST}/${SYSCONFDIR}/slsh.rc ${PREFIX}/share/slsh/examples
.include <bsd.port.mk>
