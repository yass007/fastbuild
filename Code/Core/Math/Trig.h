// Trig.h
//------------------------------------------------------------------------------
#pragma once
#ifndef CORE_MATH_TRIG_H
#define CORE_MATH_TRIG_H

// Includes
//------------------------------------------------------------------------------
#include <math.h>

// Functions
//------------------------------------------------------------------------------
inline float Sqrt( float num )
{
	return (float)sqrtf( num );
}

inline float Cos( float num )
{
	return (float)cosf( num );
}

inline float Sin( float num )
{
	return (float)sinf( num );
}

inline float Tan( float num )
{
	return (float)tanf( num );
}

inline float Pow( float a, float b )
{
    return powf( a, b );
}

//------------------------------------------------------------------------------
#endif // CORE_MATH_TRIG_H
