COMMENT =	Let's Encrypt API interfacing module and client

DISTNAME =	Crypt-LE-0.38
CATEGORIES =	security

# perl
PERMIT_PACKAGE =	Yes

MODULES =	cpan
PKG_ARCH =	*

HOMEPAGE =	https://github.com/do-know/Crypt-LE

RUN_DEPENDS =	converters/p5-Convert-ASN1 \
		converters/p5-JSON-MaybeXS \
		devel/p5-Log-Log4perl \
		security/p5-Crypt-OpenSSL-Bignum \
		security/p5-Crypt-OpenSSL-RSA \
		security/p5-IO-Socket-SSL \
		security/p5-Net-SSLeay

BUILD_DEPENDS =	${RUN_DEPENDS}

.include <bsd.port.mk>
