COMMENT=	library for network communications and cryptography

DISTNAME=	libsodium-1.0.18
REVISION=	1

SHARED_LIBS +=  sodium               10.0     # 26.0

CATEGORIES=	security net

HOMEPAGE=	https://github.com/jedisct1/libsodium

# ISC
PERMIT_PACKAGE=	Yes

WANTLIB += pthread

MASTER_SITES=	https://download.libsodium.org/libsodium/releases/ \
		https://download.libsodium.org/libsodium/releases/old/

SEPARATE_BUILD=	Yes

CONFIGURE_STYLE=	gnu

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/libsodium
	${INSTALL_DATA} ${WRKSRC}/README.markdown ${PREFIX}/share/doc/libsodium/

.include <bsd.port.mk>
