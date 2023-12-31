#ifndef __LINA_LCHAR_H__
#define __LINA_LCHAR_H__

/**************************************************************************//**
 * @file     lchar_t.h
 * @brief    Project L - Lena programming language util/lchar_t library
 * @version  V0.0.1
 * @date     6. Jan 2024
 ******************************************************************************/


#ifdef _WIN32 /* WINDOWS */

#ifndef UNICODE
#define UNICODE
#endif

#include <windows.h>
#include <wchar.h>

typedef wchar_t lchar_t;
#define llen(str) wcslen(str)
#define l(data) L##data

#else /* UNIX */

#include <string.h>

typedef char lchar_t;
#define llen(str) strlen(str)
#define l(data) data

#endif

#endif // __LINA_LCHAR_H__