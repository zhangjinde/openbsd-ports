COMMENT =		enhanced interactive Python shell

MODPY_EGG_VERSION =	7.31.0
DISTNAME =		ipython-${MODPY_EGG_VERSION}
PKGNAME =		ipython${MODPY_MAJOR_VERSION}-${MODPY_EGG_VERSION}
REVISION =		0

CATEGORIES =		devel

HOMEPAGE =		https://ipython.org/

# BSD
PERMIT_PACKAGE =	Yes

MODULES =		lang/python
MODPY_PI =		Yes
MODPY_PYTEST =		Yes
MODPY_PYTEST_ARGS =	IPython

# Optional dependency which gets picked up if it happens to be installed, thus
# causing race conditions under dpb. Pull it in to avoid this possibility.
BUILD_DEPENDS =		www/py-mako${MODPY_FLAVOR}

RUN_DEPENDS =		databases/py-pickleshare${MODPY_FLAVOR} \
			devel/desktop-file-utils \
			devel/py-backcall${MODPY_FLAVOR} \
			devel/py-decorator${MODPY_FLAVOR} \
			devel/py-jedi${MODPY_FLAVOR}>=0.16 \
			devel/py-pexpect${MODPY_FLAVOR}>=4.3 \
			devel/py-prompt_toolkit${MODPY_FLAVOR}>=2.0.0v1,<3.1.0v1 \
			devel/py-traitlets${MODPY_FLAVOR}>=4.2 \
			graphics/py-matplotlib-inline${MODPY_FLAVOR} \
			textproc/py-pygments${MODPY_FLAVOR}

# Note that if you have pdb++ installed, tests will fail.
TEST_DEPENDS =		devel/py-ipykernel${MODPY_FLAVOR} \
			devel/py-nbformat${MODPY_FLAVOR} \
			devel/py-nose${MODPY_FLAVOR}>=0.10.1 \
			devel/py-testpath${MODPY_FLAVOR} \
			math/py-numpy${MODPY_FLAVOR}>=1.17 \
			textproc/py-pygments${MODPY_FLAVOR} \
			www/py-requests${MODPY_FLAVOR}

FLAVORS =		python3
FLAVOR =		python3

PORTHOME =		${WRKDIR}

# Despite the fact that setupbase.py defines paths for examples to
# be installed into, we still have to do it manually for some reason.
APPS_DIR = 	${PREFIX}/share/applications/

post-install:
	${INSTALL_DATA_DIR} ${APPS_DIR}

	chown -R ${SHAREOWN}:${SHAREGRP} \
		${WRKSRC}/examples/IPython\ Kernel/ipython.desktop
	mv ${WRKSRC}/examples/IPython\ Kernel/ipython.desktop \
		${APPS_DIR}/ipython.desktop

pre-build:
	${SUBST_CMD} ${WRKBUILD}/IPython/core/tests/test_interactiveshell.py
	${SUBST_CMD} ${WRKBUILD}/examples/IPython\ Kernel/ipython.desktop

.include <bsd.port.mk>
