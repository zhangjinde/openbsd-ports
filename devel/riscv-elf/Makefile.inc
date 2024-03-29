CONFIG=		riscv64-unknown-elf
PKGNAME?=	riscv-elf-${DISTNAME}
CATEGORIES?=	devel

MAINTAINER?=	Kevin Lo <kevlo@openbsd.org>

# GPLv3
# For newlib: multiple copyrights, but basically BSD.
#   See: ${PREFIX}/share/doc/newlib
PERMIT_PACKAGE=	Yes

CONFIGURE_STYLE=gnu
CONFIGURE_ARGS+=--target=${CONFIG}	\
		--disable-shared	\
		--disable-nls		\
		--disable-werror

EXTRACT_SUFX?=	.tar.xz
