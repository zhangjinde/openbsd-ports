COMMENT =		pragma to use the C3 method resolution order algorithm

MODULES =		cpan
PKG_ARCH =		*
DISTNAME =		Class-C3-0.35
CATEGORIES =		devel

# Artistic
PERMIT_PACKAGE =	Yes

RUN_DEPENDS =		devel/p5-Algorithm-C3>=0.06 \
			devel/p5-Test-Exception
BUILD_DEPENDS =		${RUN_DEPENDS}
TEST_DEPENDS =		devel/p5-MRO-Compat \
			devel/p5-Sub-Name

MAKE_ENV +=		TEST_POD=1

CONFIGURE_STYLE =	modinst

.include <bsd.port.mk>
