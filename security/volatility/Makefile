COMMENT =		memory artifact extraction utility framework

MODPY_EGG_VERSION =	2.6.1
REVISION =		1
DISTNAME =		volatility-${MODPY_EGG_VERSION}

GH_ACCOUNT =		volatilityfoundation
GH_PROJECT =		volatility
GH_COMMIT =		c67017651e3cc774b944203677d15411adb7c6e4

EXTRACT_SUFX =		.zip

CATEGORIES =		security

HOMEPAGE =		http://www.volatilityfoundation.org/

MAINTAINER = 		Remi Pointel <rpointel@openbsd.org>

# GPLv2
PERMIT_PACKAGE = Yes

MODULES =		lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_2}
MODPY_SETUPTOOLS = 	Yes

RUN_DEPENDS =	security/distorm3 \
		security/yara/python \
		graphics/py2-Pillow \
		security/py-cryptodome

NO_TEST =		Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/volatility/
.for dir in contrib tools
	mv ${PREFIX}/${dir} ${PREFIX}/share/volatility/
.endfor

.include <bsd.port.mk>
