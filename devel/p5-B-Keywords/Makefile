COMMENT =	lists of Perl keywords for use in backend modules

DISTNAME =	B-Keywords-1.24
CATEGORIES =	devel

# perl
PERMIT_PACKAGE =	Yes

MODULES =	cpan
PKG_ARCH =	*

TEST_DEPENDS=	devel/p5-Test-CPAN-Meta

MAKE_ENV=	TEST_POD=Yes
# This would require Perl::MinimumVersion, Test::MinimumVersion and
# Test::Kwalitee that we don't ship.
TEST_ENV=	IS_MAINTAINER=No

.include <bsd.port.mk>
