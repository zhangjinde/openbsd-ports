COMMENT =		make URLs for Gravatars from an email address

DISTNAME =		Gravatar-URL-1.07
REVISION =		0

CATEGORIES =		www mail

MAINTAINER =		Alexander Bluhm <bluhm@openbsd.org>

# Perl
PERMIT_PACKAGE =	Yes

CPAN_AUTHOR =		MSCHWERN

MODULES =		cpan
PKG_ARCH =		*
RUN_DEPENDS =		net/p5-Net-DNS>=1.01 \
			www/p5-URI
TEST_DEPENDS =		devel/p5-Test-Warn \
			devel/p5-Test-MockRandom

CONFIGURE_STYLE =	modbuild

.include <bsd.port.mk>
