EXTRA_DIST = COPYING.Apache-2.0 findstatic.pl

AM_CFLAGS = -g -Wall -W -Wformat-security -D_FORTIFY_SOURCE=2 -fno-common

bin_PROGRAMS = \
	java

java_SOURCES = 	\
	src/main.c		\
	src/filedesc.c

distclean-local:
	rm -rf aclocal.m4 ar-lib autom4te.cache config.guess config.h.in config.h.in~ config.sub configure depcomp install-sh ltmain.sh m4 Makefile.in missing compile


install-exec-hook:
	perl ${top_srcdir}/findstatic.pl  ${top_builddir}/src/*.o | grep -v Checking ||:

