COMMENT =	Catalyst plugin to subvert NEXT to use Class::C3

MODULES =	cpan
PKG_ARCH =	*
DISTNAME =	Catalyst-Plugin-C3-0.03
REVISION =	2
CATEGORIES =	devel www

# Perl
PERMIT_PACKAGE =		Yes

RUN_DEPENDS =	www/p5-Catalyst-Runtime \
		devel/p5-Class-C3
BUILD_DEPENDS =	${RUN_DEPENDS}

MAKE_ENV +=	TEST_POD=1

.include <bsd.port.mk>
