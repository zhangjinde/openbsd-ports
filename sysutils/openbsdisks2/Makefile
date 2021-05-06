# $OpenBSD: Makefile,v 1.1.1.1 2021/05/04 17:46:51 rsadowski Exp $

COMMENT =	UDisks2 service implementation for OpenBSD

V =		0.2.1
DISTNAME =	openbsdisks2-${V}beta

CATEGORIES =	sysutils

HOMEPAGE =	https://github.com/sizeofvoid/openbsdisks2

MAINTAINER =	Rafael Sadowski <rsadowski@openbsd.org>

# BSD
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} Qt5Core Qt5DBus c m util

MASTER_SITES =	https://github.com/sizeofvoid/openbsdisks2/releases/download/v${V}b/

MODULES =	devel/cmake \
		x11/qt5
# /usr/local/share/dbus-1/system-services
RUN_DEPENDS +=	x11/dbus,-suid

.include <bsd.port.mk>