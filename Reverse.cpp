#include <iostream>
#include <string>

#include <sstream>

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

//	for ( int i = fwdStr.length()-1; i > 0 ;i-- )

	cout << "fwdStr in loop: " << fwdStr << endl;
	revStr += fwdStr[i];
	cout << "revStr in loop: " << revStr << endl;

	// Setting the string revStr to a integer variable.
	int rev;
	if ( ! (istringstream(revStr) >> rev) ) rev = 0;
	cout << "revStr: " << revStr << endl;
	i--;

	if ( revStr.length() == fwdStr.length() )
	{
		return rev;
	}
	else{
		reverseDigit( value );
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