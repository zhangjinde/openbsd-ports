COMMENT =	group together related tests in a test suite

MODULES =	cpan
PKG_ARCH =	*
DISTNAME =	Test-Group-0.20
CATEGORIES =	devel
REVISION =	0

# Perl
PERMIT_PACKAGE =	Yes

CONFIGURE_STYLE =	modbuild

RUN_DEPENDS =	devel/p5-File-Slurp \
		devel/p5-Test-Cmd
BUILD_DEPENDS =	${RUN_DEPENDS}

MAKE_ENV +=	TEST_POD=1

.include <bsd.port.mk>
