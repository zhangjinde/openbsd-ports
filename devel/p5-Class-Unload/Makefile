COMMENT =	unload a class
DISTNAME =	Class-Unload-0.11
CATEGORIES =	devel
REVISION =	0

MAINTAINER =	Andrew Fresh <afresh1@openbsd.org>

# Same as Perl
PERMIT_PACKAGE =	Yes

MODULES =		cpan
PKG_ARCH =		*

RUN_DEPENDS =	devel/p5-Class-Inspector

TEST_DEPENDS =	devel/p5-Test-Requires

# additional depends to avoid skipping tests
TEST_DEPENDS +=	devel/p5-Moose

.include <bsd.port.mk>
