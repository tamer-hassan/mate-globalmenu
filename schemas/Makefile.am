NULL =

EXTRA_DIST = \
	mate-globalmenu.schemas.in \
	$(NULL)

DISTCLEANFILES =
	mate-globalmenu.schemas \
	$(NULL)

BUILT_SOURCES = mate-globalmenu.schemas

schemadir   = $(MATECONF_SCHEMA_FILE_DIR)
schema_in_files = mate-globalmenu.schemas.in
schema_DATA = $(schema_in_files:.in=)
@INTLTOOL_SCHEMAS_RULE@

if MATECONF_SCHEMAS_INSTALL

install-data-local:
	MATECONF_CONFIG_SOURCE=$(MATECONF_SCHEMA_CONFIG_SOURCE) $(MATECONFTOOL) --makefile-install-rule $(schema_DATA)
else
install-data-local:
endif
