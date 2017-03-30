#include <iostream>
#include <string>

#include <sstream>
#include <algorithm>

#include "Reverse.h"

// Reverse class constructor.
Reverse::Reverse()
{

}

// Takes in a integer and reverses it's order.
int Reverse::reverseDigit( int value )
{
	// Setting the int value to a string variable.
	string fwdStr = static_cast<ostringstream*>( &(ostringstream() << value) )->str();
	string revStr;
	int i = fwdStr.length()-1;

	// Append the last character in fwdStr to revStr.
	cout << "fwdStr i: " << fwdStr[i] << endl;
	revStr += fwdStr[i];
	cout << "revStr string: " << revStr << endl;

	// Setting the revStr to an integer called rev.
	int rev;
	if ( ! (istringstream(revStr) >> rev) ) rev = 0;
	cout << "revStr int: " << rev << endl;
	
	fwdStr.erase ( fwdStr.end()-1 );
	cout << "fwdStr: " << fwdStr << endl;

	int thing;
	if ( ! (istringstream(fwdStr) >> thing) ) thing = 0;

	i--;

	if ( fwdStr.length() == 0 )
	{
		return rev;
	}
	else{
		reverseDigit( thing );
	}
}

// Takes in a string and reverses it's order.
string Reverse::reverseString( string value )
{
	

}

// Reverse class destructor.
Reverse::~Reverse()
{

}