#ifndef __LINA_MAIN_H__
#define __LINA_MAIN_H__

/**************************************************************************//**
 * @file     lina.h
 * @brief    Project L - lina programming language main library
 * @version  V0.0.2
 * @date     5. Jan 2024
 ******************************************************************************/

/* Check C standard */
#if __STDC_VERSION__ >= 201112L

/* Util libraires */
#include "util/lchar.h"
#include "util/lapp.h"
#include "util/lconverter.h"

/* Libraries */
#include "stdconsole/stdconsole.h"
#include "stdconsole/stdconsole_color.h"

#include "lfiles/lfiles.h"
#include "lthreads/lthreads.h"
#include "ldelay/ldelay.h"

#else /* ERROR (__STDC_VERSION__ >= 201112L) */
#error [lina.h]: Requires at least version C 2011 (__STDC_VERSION__ >= 201112L)
#endif
#endif // __LINA_MAIN_H__