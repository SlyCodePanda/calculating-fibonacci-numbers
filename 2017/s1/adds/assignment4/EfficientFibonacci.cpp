#include <iostream>
#include <string>

#include "EfficientFibonacci.h"

// Efficient Fibonacci class constructor.
EfficientFibonacci::EfficientFibonacci()
{

}

// Takes in an integer and returns it's Fibonacci number.
int EfficientFibonacci::effFib( int n )
{
	if ( n == 0 )
	{
		return 0;
	}
	else if( ( n == 1 )||( n == 2 ) )
	{
		return 1;
	}
	else
	{
		return effFib( n-2 )+effFib( n-1 );
	}
}

// Effiecient Fibonacci class destructor.
EfficientFibonacci::~EfficientFibonacci()
{

}