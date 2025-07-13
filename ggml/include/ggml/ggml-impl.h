#pragma once

#include "ggml.h"

#if defined(_MSC_VER) || defined(__MINGW32__)
#include <malloc.h> // using malloc.h with MSC/MINGW
#elif !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
#include <alloca.h>
#endif

#include <assert.h>
#include <errno.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <stdarg.h>
#include <signal.h>

#if defined(__gnu_linux__)
#include <syscall.h>
#endif

#ifdef GGML_USE_OPENMP
#include <omp.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _DISABLE_CONSTEXPR_MUTEX_CONSTRUCTOR
static inline void ggml_mutex_init(ggml_mutex_t * m) {
    pthread_mutex_init(m, NULL);
}
#endif

#ifdef __cplusplus
}
#endif
