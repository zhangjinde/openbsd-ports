COMMENT =	security checker for Go projects

MODGO_MODNAME =	github.com/securego/gosec/v2
REVISION =	0
MODGO_VERSION =	v2.9.6

DISTNAME =	gosec-${MODGO_VERSION}

HOMEPAGE =	https://securego.io/

CATEGORIES =	security devel

# Apache 2.0
PERMIT_PACKAGE =	Yes

WANTLIB += c pthread

MODULES =		lang/go

MODGO_LDFLAGS =		-X main.Version=${MODGO_VERSION}

.include "modules.inc"

.include <bsd.port.mk>
