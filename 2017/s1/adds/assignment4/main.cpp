#include <iostream>
#include <string>
#include <sstream>

#include "inputParser.h"
#include "Reverse.h"
#include "Fibonacci.h"
//#include "EfficientFibonacci.h"

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
	cout << revDigits << endl;
	
	string revString = ptrRev->reverseString( letters );
	cout << revString << endl;

	// Returns the fn1 integer as it's Fibonacci number.
	int fibDig = ptrFib->fib( fn1 );
	cout << fibDig << endl;

	return 0;

};