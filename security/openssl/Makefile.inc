COMMENT?=	TLS/SSL library and tools

DISTNAME?=	openssl-$V
PKGNAME?=	openssl-$V

CATEGORIES?=	security net

HOMEPAGE?=	https://www.openssl.org/

# OpenSSL
PERMIT_PACKAGE?=	Yes

MASTER_SITES?=	https://www.openssl.org/source/ \
		https://www.openssl.org/source/old/${V:C/.$//}/ \
		ftp://ftp.openssl.org/source/
