#ifndef IGL_TRIANGLE_TRIANGLE_HEADER_H
#define IGL_TRIANGLE_TRIANGLE_HEADER_H

#ifdef ANSI_DECLARATORS
#  define IGL_PREVIOUSLY_DEFINED_ANSI_DECLARATORS ANSI_DECLARATORS
#  undef ANSI_DECLARATORS
#endif
#ifdef REAL
#  define IGL_PREVIOUSLY_DEFINED_REAL REAL
#  undef REAL
#endif
#ifdef VOID
#  define IGL_PREVIOUSLY_DEFINED_VOID VOID
#  undef VOID
#endif
#define ANSI_DECLARATORS
#define REAL double
#define VOID int

#include <triangle.h>

#undef ANSI_DECLARATORS
#ifdef IGL_PREVIOUSLY_DEFINED_ANSI_DECLARATORS
#  define ANSI_DECLARATORS IGL_PREVIOUSLY_DEFINED_ANSI_DECLARATORS
#endif

#undef REAL
#ifdef IGL_PREVIOUSLY_DEFINED_REAL
#  define REAL IGL_PREVIOUSLY_DEFINED_REAL
#endif

#undef VOID
#ifdef IGL_PREVIOUSLY_DEFINED_VOID
#  define VOID IGL_PREVIOUSLY_DEFINED_VOID
#endif

#endif