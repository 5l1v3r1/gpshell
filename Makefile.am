AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}
AM_CPPFLAGS = $(DEPS_CFLAGS)
AM_LDFLAGS = -L/usr/local/lib -lreadline

bin_PROGRAMS = bin/gpshell
bin_gpshell_SOURCES = src/main.cc
##bin_gpshell_LDADD = $(DEPS_LIBS)

## Define an independent executable script for inclusion in the distribution
## archive. It will not be installed on an end user's system, however.
dist_noinst_SCRIPTS = autogen.sh