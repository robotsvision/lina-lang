#ifndef __LINA_STDCONSOLE_COLOR_H__
#define __LINA_STDCONSOLE_COLOR_H__

/**************************************************************************//**
 * @file     stdconsole_color.h
 * @brief    Project L - Lena programming language stdconsole_color
 * @version  V0.0.1
 * @date     6. Jan 2024
 ******************************************************************************/

/* stdconsole_color.h is required */
#ifndef __LINA_STDCONSOLE_H__
#error [stdconsole_color.h]: stdconsole.h was not included!
#else

#ifdef _WIN32
#include <windows.h>
#else
#endif 

/* lina_stdcolor_t */

typedef enum {
#ifdef _WIN32
    LINA_TEXT_COLOR     = 0x0F,
    LINA_ERROR_COLOR    = FOREGROUND_RED    | FOREGROUND_INTENSITY,
    LINA_WARNING_COLOR  = FOREGROUND_RED    | FOREGROUND_GREEN,
    LINA_INFO_COLOR     = FOREGROUND_BLUE   | FOREGROUND_INTENSITY,
    LINA_HELP_COLOR     = FOREGROUND_GREEN  | FOREGROUND_INTENSITY,
    LINA_LABEL_COLOR    = FOREGROUND_BLUE   | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
#else
    LINA_TEXT_COLOR     = 0,
    LINA_ERROR_COLOR    = 1,
    LINA_WARNING_COLOR  = 2,
    LINA_INFO_COLOR     = 3,
    LINA_HELP_COLOR     = 4,
    LINA_LABEL_COLOR    = 5,
#endif 
} lina_stdcolor_t;


#ifdef _WIN32

inline
void lstdout_set_color(lina_stdcolor_t color) {
     SetConsoleTextAttribute(hConsoleOut, (WORD)(color));
}

inline
void lstderr_set_color(lina_stdcolor_t color) {
     SetConsoleTextAttribute(hConsoleErr, (WORD)(color));
}

#else /* UNIX */

inline
void lstdout_set_color(lina_stdcolor_t color);

inline
void lstderr_set_color(lina_stdcolor_t color);

#endif 

#endif // __LINA_STDCONSOLE_H__
#endif // __LINA_STDCONSOLE_COLOR_H__