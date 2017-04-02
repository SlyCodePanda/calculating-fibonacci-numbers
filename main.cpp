#include <iostream>
#include <string>

#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "inputParser.h"
#include "Reverse.h"
#include "Fibonacci.h"
#include "EfficientFibonacci.h"

using namespace std;

int main()
{

	string input;
	string letters;
	int digits;
	int fn1;
	int fn2;

	inputParser ip;
	inputParser *ptrIp = &ip;

	Reverse rev;
	Reverse *ptrRev = &rev;

	Fibonacci fib;
	Fibonacci *ptrFib = &fib;

	EfficientFibonacci effFib;
	EfficientFibonacci *ptrEffFib = &effFib;

	getline ( cin, input );

	// Takes the digi string and converts it to an integer and stores it in "digits".
	ptrIp->getDatString( input );

	string digi = ptrIp->getDigits();
	std::istringstream buf( digi.substr(0,9) );
	buf >> digits;

	// Sets the letters in the input string to the string "letters".
	letters = ptrIp->getLetters();

	 //Converts the second to last number in the input string to an integer and stores it in "fn1". 
	string n1 = ptrIp->getFn1();
	std::istringstream buf2( n1.substr(0,9) );
	buf2 >> fn1;

	// Converts the last number in the input string to an integer and stores it in "fn2".
	string n2 = ptrIp->getFn2();
	std::istringstream buf3( n2.substr(0,9) );
	buf3 >> fn2;

	// prints out the values in the input string.
	//cout << digits << endl;
	//cout << letters << endl;
	//cout << fn1 << endl;
	//cout << fn2 << endl;

	// Returns the digits integer reversed.
	int revDigits = ptrRev->reverseDigit( digits );

	if ( digits < 0 )
	{
		cout << "ERROR" << " ";
	}
	else if ( digits == 0 )
	{
		cout << 0 << " ";
	}
	else if ( digits > 0 )
	{
		//cout << "Reversed Digits: " << endl;
		cout << revDigits << " ";
	}
	else
	{
		cout << "ERROR" << " ";
	}


	string revString = ptrRev->reverseString( letters );
	cout << revString << " ";

	// Returns the fn1 integer as it's Fibonacci number.
	if ( fn1 >= 0 )
	{
		int fibDig = ptrFib->fib( fn1 );
		cout << fibDig << " ";
	}
	else
	{
		cout << "ERROR" << " ";
	}

	// Returns the fn2 integer as it's Fibonacci number.
	if ( fn2 >= 0 )
	{
		int fibDig2 = ptrEffFib->effFib( fn2 );
		cout << fibDig2 << endl;
	}
	else
	{
		cout << "ERROR" << endl;

	}
	

	return 0;

};