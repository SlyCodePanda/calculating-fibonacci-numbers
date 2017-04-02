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
	
	// End condition for the recurssion loop.
	if ( value == 0 )
	{
		return -1;
	}

	// Setting the int value to a string variable.
	string fwdStr = static_cast<ostringstream*>( &(ostringstream() << value) )->str();

	// Creates the string with the last character of fwdStr.
	string last(1,fwdStr[fwdStr.length()-1]);

	// Erases the last element of the fwdStr.
	fwdStr.erase ( fwdStr.end()-1 );

	int otherThing;
	if( ! (istringstream(fwdStr) >> otherThing ) ) otherThing = 0;

	int reverse = reverseDigit( otherThing );

	// Creating a string version of reverse integer.
	string sRev = static_cast<ostringstream*>( &(ostringstream() << reverse) )->str();

	// Makes the last character first.
	string thing = last+sRev;

	// Creates an integer version of thing.
	int newReverse;
	if( ! (istringstream(thing) >> newReverse ) ) newReverse = 0;

	return newReverse;
}

// Takes in a string and reverses it's order.
string Reverse::reverseString( string value )
{
	if ( value.length() == 0 )
	{
		return "";
	}

	string last(1,value[value.length()-2]);
	string rev = reverseString( value.substr(0,value.length()-1 ) );

	return last+rev;
}

// Reverse class destructor.
Reverse::~Reverse()
{

}