AC_PREREQ([2.69])
AC_INIT([libcpath], [0.1.0.0dev], [dimao8@yandex.ru])
AC_CONFIG_SRCDIR([src/cpath.cc])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([1.10 foreign subdir-objects silent-rules])
AM_SILENT_RULES([yes])
AC_CONFIG_MACRO_DIRS([m4])
AC_LANG([C++])

LT_INIT([dlopen win32-dll])
LT_LANG([C++])

CFLAGS=--std="gnu++17"
AC_PROG_CXX(clang++ llvm-g++ g++)

AC_ARG_ENABLE([debug],
    [AS_HELP_STRING([--enable-debug], [Set to enable debugging, default: no])],
    [
        case "${enableval}" in
        yes)
          CXXFLAGS+=" -O0 -ggdb3 -DDEBUG"
          ;;
        no)
          CXXFLAGS+=" -O2 -DNDEBUG"
          ;;
        *)
          AC_MSG_ERROR([Bad value ${enableval} for --enable-debug])
          ;;
        esac
    ],
    [CXXFLAGS+=" -O2 -DNDEBUG"])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
