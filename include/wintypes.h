#pragma once
#if _MSC_VER
#define USE_WINNT
#include <windows.h>
#endif
#ifndef USE_WINNT

#ifndef __WIN_TYPES
#define __WIN_TYPES__

/*
#if _MSC_VER
    #ifndef snprintf
        #define snprintf _snprintf
    #endif
    #ifndef snscanf
        #define snscanf _snscanf
    #endif
#endif
*/

#ifdef _MSC_VER
    #include <stdint.h>
#else
    #include <inttypes.h>
#endif

#ifndef BYTE
typedef unsigned char BYTE;
#endif

#ifndef BOOLEAN
   typedef BYTE BOOLEAN;
#endif

#ifndef BOOL
   typedef BYTE BOOL; 
#endif

#ifndef WORD
   typedef uint16_t WORD; 
#endif

#ifndef USHORT
   typedef uint16_t USHORT; 
#endif

#ifndef DWORD
   typedef uint32_t DWORD; 
#endif

#ifndef ULONG
  typedef uint32_t ULONG;
#endif

#ifndef ULONGLONG
   typedef uint64_t ULONGLONG;
#endif

#ifndef CHAR
    typedef char CHAR;
#endif

// wchar_t is 32-bits on Linux
#ifndef WCHAR
    typedef uint16_t WCHAR;
#endif

// this might be a problem..
#ifndef ULONG_PTR
    typedef ULONG *ULONG_PTR;
#endif

#ifndef VOID
    #define VOID void
    typedef char CHAR;
    typedef uint16_t SHORT;
    typedef uint32_t LONG;

    #if !defined(MIDL_PASS)
	typedef int INT;
    #endif
#endif //VOID

#endif // __WIN_TYPES__
#endif // #ifndef USE_WINNT
