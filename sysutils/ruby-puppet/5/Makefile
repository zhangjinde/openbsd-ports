PORTROACH=		limit:^5

VERSION=		5.5.22
REVISION=		8

RUN_DEPENDS+=		databases/ruby-hiera3,${MODRUBY_FLAVOR} \
			devel/ruby-gettext-setup,${MODRUBY_FLAVOR}>=0.28,<1 \
			devel/ruby-locale,${MODRUBY_FLAVOR}>=2.1,<3 \
			devel/ruby-rgen,${MODRUBY_FLAVOR} \
			devel/ruby-sync,${MODRUBY_FLAVOR} \
			converters/ruby-multi_json,${MODRUBY_FLAVOR} \
			sysutils/facter

SUBST_VARS +=	MODPY_DEFAULT_VERSION_2 MODPY_DEFAULT_VERSION_3

pre-install:
	${SUBST_CMD} ${WRKDIST}/lib/puppet/provider/package/gem.rb \
		${WRKDIST}/lib/puppet/provider/package/pip.rb \
		${WRKDIST}/lib/puppet/provider/package/pip3.rb \
		${WRKSRC}/lib/puppet/reference/configuration.rb \
		${WRKSRC}/lib/puppet/util/run_mode.rb \
		${WRKSRC}/lib/puppet/defaults.rb \
		${WRKSRC}/ext/rack/config.ru

do-install:
	@cd ${WRKSRC} && ${FAKE_FLAGS} ${RUBY} install.rb \
		--vardir=${LOCALSTATEDIR}/db/puppet/cache/ \
		--rundir=${LOCALSTATEDIR}/run/puppetlabs/ \
                --localedir=${TRUEPREFIX}/${MODRUBY_SITEDIR}/puppet/locales/
	mv ${WRKINST}${SYSCONFDIR}/puppetlabs ${PREFIX}/${MODRUBY_RELEXAMPLEDIR}-puppet
	${INSTALL_DATA} ${WRKSRC}/conf/*.conf ${PREFIX}/${MODRUBY_RELEXAMPLEDIR}-puppet/puppet/
	${INSTALL_DATA} ${WRKSRC}/ext/rack/config.ru ${PREFIX}/${MODRUBY_RELEXAMPLEDIR}-puppet/puppet/
	# Suppress a huge number of Ruby deprecation/obsolete warnings
	sed -i -e "s/ruby${MODRUBY_BINREV}/ruby${MODRUBY_BINREV} -W0/" ${PREFIX}/bin/puppet

.include <bsd.port.mk>
