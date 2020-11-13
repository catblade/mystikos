// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#ifndef _LIBOS_ATOMIC_H
#define _LIBOS_ATOMIC_H

#include <libos/defs.h>
#include <libos/types.h>

LIBOS_INLINE int libos_atomic_exchange(volatile int* ptr, int value)
{
    __asm__ __volatile__("xchg %0, %1"
                         : "=r"(value), "=m"(*ptr)
                         : "0"(value)
                         : "memory");

    return value;
}

#endif /* _LIBOS_ATOMIC_H */
