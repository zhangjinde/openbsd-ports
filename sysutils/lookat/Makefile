V =		2.0.1
COMMENT =	user-friendly text pager
DISTNAME =	lookat_bekijk-${V}
PKGNAME =	lookat-${V}
CATEGORIES =	sysutils textproc

HOMEPAGE =	http://www.wagemakers.be/english/programs/lookat
MAINTAINER =	Brian Callahan <bcallah@openbsd.org>

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c curses

MASTER_SITES =	${MASTER_SITE_SAVANNAH:=lookat/}

CONFIGURE_STYLE =	gnu

FAKE_FLAGS =	sysconfdir="${PREFIX}/share/examples/lookat"

.include <bsd.port.mk>
