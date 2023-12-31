#ifndef __LINA_DELAY_H__
#define __LINA_DELAY_H__

/**************************************************************************//**
 * @file     ldelay.h
 * @brief    Project L - Lena programming language ldelay
 * @version  V0.0.1
 * @date     8. Jan 2024
 ******************************************************************************/


#ifdef _WIN32

#include <windows.h>

typedef DWORD ldelay_ms_t;

inline 
void ldelay(ldelay_ms_t ms){ 
    Sleep((DWORD)(ms));
}

#else

#include <unistd.h>

typedef unsigned int ldelay_ms_t;

inline 
void ldelay(ldelay_ms_t ms){ 
    sleep((unsigned int)(ms));
}


#endif
#endif // __LINA_DELAY_H__