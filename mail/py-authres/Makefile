COMMENT =	module for RFC 5451 Authentication-Results Headers

MODPY_EGG_VERSION = 0.800
DISTNAME =	authres-${MODPY_EGG_VERSION}
PKGNAME =	py-${DISTNAME}
CATEGORIES =	mail

HOMEPAGE =	https://launchpad.net/authentication-results-python

# Apache 2.0
PERMIT_PACKAGE =	Yes

MODPY_PI =	Yes

MODULES	=	lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_2}

NO_TEST =	Yes

post-install:
	${INSTALL_DATA} ${WRKSRC}/authres/tests \
		${PREFIX}/lib/python${MODPY_VERSION}/site-packages/authres/tests

.include <bsd.port.mk>
