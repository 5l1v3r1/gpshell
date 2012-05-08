dnl Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT(gpshell, 1.0, bugs@nullpointer.com.au, gpshell, http://products.nullpointer.com.au/gpshell)

AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE(1.10 -Wall no-define)

AC_PROG_CXX(clang++ gcc++ g++)

# PKG_CHECK_MODULES([DEPS], [example-1.0 >= 0.4])
AC_CHECK_LIB(
	[readline], 
	[readline],
	[echo "Using readline"],
	[
		echo "readline 6 is required for this program"
		exit -1
	]
)

AC_CONFIG_FILES(Makefile)
AC_OUTPUT

