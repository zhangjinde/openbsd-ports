COMMENT =	parse informal natural language date/time strings

MODULES =	cpan
PKG_ARCH =	*
DISTNAME =	DateTime-Format-Natural-1.13
CATEGORIES =	devel

# Perl
PERMIT_PACKAGE =		Yes

CONFIGURE_STYLE =	modbuild

#MAKE_ENV +=		TEST_POD=1

BUILD_DEPENDS =	devel/p5-Module-Util

RUN_DEPENDS =	devel/p5-Clone \
		devel/p5-DateTime \
		devel/p5-DateTime-TimeZone \
		devel/p5-List-MoreUtils \
		devel/p5-Params-Validate>=1.15 \
		devel/p5-boolean

# Recommended dependency
RUN_DEPENDS +=	devel/p5-Date-Calc

TEST_DEPENDS =	devel/p5-Test-MockTime

.include <bsd.port.mk>
