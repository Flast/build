/*
 * Copyright 2014 Kohei Takahashi.
 *
 * This file is part of Jam - see jam.c for Copyright information.
 */

#ifndef CPLUSPLUS_H
#define CPLUSPLUS_H

#if defined(__cplusplus)
#define extern_c extern "C"
#else
#define extern_c
#endif

#endif
