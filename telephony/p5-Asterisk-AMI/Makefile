COMMENT=	interact with Asterisk Manager Interface from perl

DISTNAME=	Asterisk-AMI-v0.2.8
PKGNAME=	p5-${DISTNAME:S/-v/-/}
CATEGORIES=	telephony perl5
REVISION=	0

HOMEPAGE=	https://github.com/rrb3942/perl-Asterisk-AMI/

MODULES=	cpan
PKG_ARCH=	*
CPAN_AUTHOR=	GREENBEAN

# Artistic 2.0
PERMIT_PACKAGE=	Yes

RUN_DEPENDS=	devel/p5-AnyEvent>=5.2 \
		security/p5-Net-SSLeay

MODCPAN_EXAMPLES=	Yes
MODCPAN_EXAMPLES_DIR=	${PREFIX}/share/examples/p5-Asterisk-AMI

.include <bsd.port.mk>
