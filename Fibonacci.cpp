#include <iostream>
#include <string>

#include "Fibonacci.h"

// Fibonacci class constructor.
Fibonacci::Fibonacci()
{

}

// Takes in an integer and returns it's Fibonacci number.
int Fibonacci::fib( int n )
{
	if ( n == 0 )
	{
		return 0;
	}
	if ( n == 1 )
	{
		return 1;
	}

	return fib( n-1 )+fib( n-2 );
}

// Fibonacci class destructor.
Fibonacci::~Fibonacci()
{

}