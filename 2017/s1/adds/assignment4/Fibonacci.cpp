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
	if( ( n == 1 )||( n == 2 ) )
	{
		return 1;
	}
	else
	{
		return fib( n-2 )+fib( n-1 );
	}
}

// Fibonacci class destructor.
Fibonacci::~Fibonacci()
{

}