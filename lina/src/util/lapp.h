#ifndef __LINA_LAPP_H__
#define __LINA_LAPP_H__

/**************************************************************************//**
 * @file     lapp.h
 * @brief    Project L - Lena programming language util/lapp library
 * @version  V0.0.1
 * @date     6. Jan 2024
 ******************************************************************************/

/* Standard libraries */
#include <stdlib.h>

/* Exit codes */
enum lexit_codes {
    LINA_EXIT_SUCCESS = 0x00,
    LINA_EXIT_FAILURE = 0x01,
};

#define lexit(exit_status) exit(exit_status)

#define LINA_ARGC argc
#define LINA_ARGV argv

#ifdef _WIN32 /* WINDOWS */
#include <windows.h>
#define LMAIN(argc, argv) int wmain()
#ifdef __LINA_MESSAGES__
#pragma message("[lapp.h]: Using Windows OS...")
#endif
#else /* UNIX */
#define LMAIN(argc, argv) int main(int argc, lchar_t* argv[])
#ifdef __LINA_MESSAGES__
#pragma message("[lapp.h]: Using Windows OS...")
#endif
#endif

#endif // __LINA_LAPP_H__
