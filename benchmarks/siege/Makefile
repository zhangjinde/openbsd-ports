COMMENT =		multi-threaded HTTP benchmark and regression tester

DISTNAME =		siege-4.1.2

CATEGORIES =		benchmarks www

HOMEPAGE =		https://www.joedog.org/index/siege-home

# GPLv2+
PERMIT_PACKAGE =	Yes

WANTLIB += c crypto pthread ssl z

MASTER_SITES =		http://download.joedog.org/siege/

MAKE_FLAGS =		localstatedir=${LOCALSTATEDIR}

LOCALSTATEDIR =		${BASELOCALSTATEDIR}/log/siege

CONFIGURE_STYLE =	gnu

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/siege
	${INSTALL_DATA} ${WRKSRC}/doc/urls.txt ${WRKSRC}/doc/siegerc \
	    ${PREFIX}/share/examples/siege

.include <bsd.port.mk>
