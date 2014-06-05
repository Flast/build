/*
 * Copyright 2014. Kohei Takahashi
 * Distributed under the Boost Software License, Version 1.0.
 * (See accompanying file LICENSE_1_0.txt or copy at
 * http://www.boost.org/LICENSE_1_0.txt)
 */

#include "mem.h"

#include <limits>

template <typename T>
struct bjam_allocator
{
    typedef T value_type;

    bjam_allocator() {}
    bjam_allocator( const bjam_allocator & ) {}
    template <typename U>
    bjam_allocator( const bjam_allocator<U> & ) {}

    T *allocate( std::size_t n )
    {
        return static_cast<T *>( BJAM_MALLOC_RAW( n * sizeof( T ) ) );
    }

    void deallocate( T *p, std::size_t )
    {
        BJAM_FREE_RAW( p );
    }
};

template <typename T1, typename T2>
inline bool operator==( const bjam_allocator<T1> &, const bjam_allocator<T2> & )
{
    return true;
}
template <typename T1, typename T2>
inline bool operator!=( const bjam_allocator<T1> &, const bjam_allocator<T2> & )
{
    return false;
}
