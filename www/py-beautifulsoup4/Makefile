COMMENT =	HTML/XML parser that supports invalid markup

MODPY_EGG_VERSION =	4.11.1
DISTNAME =	beautifulsoup4-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME}

CATEGORIES =	www

HOMEPAGE =	https://www.crummy.com/software/BeautifulSoup/

# MIT
PERMIT_PACKAGE =	Yes

MODULES =	lang/python

FLAVORS =	python3
FLAVOR =	python3

MODPY_SETUPTOOLS =	Yes
MODPY_PI =		Yes

# test files moved to a separate repo
NO_TEST =	Yes

RUN_DEPENDS =	www/py-soupsieve${MODPY_FLAVOR}

.include <bsd.port.mk>
