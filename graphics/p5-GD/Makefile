COMMENT =		Perl interface to the gd2 graphics library

DISTNAME =		GD-2.73
CATEGORIES =		graphics

# Perl
PERMIT_PACKAGE =	Yes

WANTLIB += c gd perl

BUILD_DEPENDS =		devel/p5-ExtUtils-PkgConfig

LIB_DEPENDS =		graphics/gd

MODULES =		cpan

MODCPAN_EXAMPLES =	Yes
MODCPAN_EXAMPLES_DIST =	demos

st-install:
	cd ${PREFIX} && rm -f \
		bin/README \
		bin/bdf2gdfont.PLS \
		bin/bdftogd \
		bin/cvtbdf.pl \
		man/man1/bdf2gdfont.PLS.1

# Tests will use p5-Test-Fork if available

.include <bsd.port.mk>
