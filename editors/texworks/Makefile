COMMENT-main =		easy to use LaTeX and ConTeXt editor
COMMENT-python =	Python scripting for TeXworks
COMMENT-lua =		Lua scripting for TeXworks

V =			0.6.2
GH_ACCOUNT =		TeXworks
GH_PROJECT =		texworks
GH_TAGNAME =		release-${V}

REVISION-lua =		2
REVISION-python =	3
REVISION-main =		6

EPOCH =			0

CATEGORIES =		editors print
HOMEPAGE =		http://www.tug.org/texworks/
MAINTAINER =		Edd Barrett <edd@openbsd.org>

# GPLv2
PERMIT_PACKAGE =	Yes

MODULES =		lang/python \
			lang/lua \
			x11/qt5 \
			devel/cmake
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_2}

# c++-11 required for poppler
COMPILER =		base-clang ports-gcc

WANTLIB += ${COMPILER_LIBCXX} Qt5Concurrent Qt5Core Qt5DBus Qt5Gui
WANTLIB += Qt5Script Qt5ScriptTools Qt5Widgets Qt5Xml c hunspell-1.7
WANTLIB += m poppler poppler-qt5 synctex z GL

WANTLIB-lua += ${COMPILER_LIBCXX} ${MODLUA_WANTLIB} Qt5Concurrent Qt5Core
WANTLIB-lua += Qt5DBus Qt5Gui Qt5Script Qt5ScriptTools Qt5Widgets Qt5Xml m GL

WANTLIB-python += ${COMPILER_LIBCXX} Qt5Concurrent Qt5Core Qt5DBus Qt5Gui GL
WANTLIB-python += Qt5Script Qt5ScriptTools Qt5Widgets Qt5Xml m ${MODPY_WANTLIB}

MULTI_PACKAGES =	-main -lua -python

LIB_DEPENDS =		${MODQT5_LIB_DEPENDS} \
			x11/qt5/qtscript
LIB_DEPENDS-main =	${LIB_DEPENDS} \
			print/poppler,-qt5 \
			print/texlive/base,-synctex \
			textproc/hunspell
LIB_DEPENDS-lua =	${LIB_DEPENDS} \
			${MODLUA_LIB_DEPENDS}
LIB_DEPENDS-python =	${LIB_DEPENDS} \
			${MODPY_LIB_DEPENDS}

RUN_DEPENDS-main =	devel/desktop-file-utils \
			print/texlive/base>=2018
RUN_DEPENDS-lua =	editors/texworks,-main
RUN_DEPENDS-python =	editors/texworks,-main

MODLUA_SA =		Yes

USE_GMAKE =		Yes
NO_TEST =		Yes

SUBST_VARS +=		MODLUA-VERSION

CONFIGURE_STYLE =	cmake
CONFIGURE_ARGS +=	-DWITH_PYTHON=ON \
			-DTeXworks_DIC_DIR=${TRUEPREFIX}/share/mozilla-dicts
# The handling of the manual install dir is odd.
CONFIGURE_ARGS +=	-DTeXworks_MAN_DIR=/man/man1

pre-configure:
	${SUBST_CMD} ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
