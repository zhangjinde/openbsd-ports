COMMENT =	DB-IP IP to Country Lite: IPv4/v6 address to country

DISTNAME =	dbip-country-lite-${V}.mmdb
PKGNAME =	dbip-country-lite-${V:S/-/./}

HOMEPAGE =	https://db-ip.com/db/download/ip-to-country-lite

post-extract:
	mv ${WRKSRC}/${DISTNAME} ${WRKSRC}/dbip-country-lite.mmdb

.include <bsd.port.mk>
