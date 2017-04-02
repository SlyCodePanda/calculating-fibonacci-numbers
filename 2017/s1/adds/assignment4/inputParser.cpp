#include <iostream>
#include <string>

#include "inputParser.h"

using namespace std;

// inputParser class constructor.
inputParser::inputParser()
{

}

// gets and returns the parts of the inputted string into seperate strings.
void inputParser::getDatString ( string input )
{

	int length = input.length();
	// Stores the initial digits in the input string into the string "d".
	for ( int i = 0; i < length; i++ )
	{
		if( input[i] > 0 ){
			d += input[i];
		}
		if( input[i] == ' ' ){
			break;
		}
	}

	// Stores the letters from the input string in the string "letters".
	for ( int j = d.length(); j < length; j++ )
	{
		if( input[j] > 0 ){
			l += input[j];
		}
		if( input[j] == ' ' ){
			break;
		}
	}

	int count = d.length() + l.length();

	// Stores the numbers from the input string in the string "fn1".
	for ( int k = count; k < length; k++ )
	{
		if( input[k] > 0 ){
			f1 += input[k];
		}
		if( input[k] == ' ' ){
			break;
		}
	}

	int newCount = d.length() + l.length() + f1.length();

	// Stores the numbers from the input string in the string "fn2".
	for ( int m = newCount; m < length; m++ )
	{
		if( input[m] > 0 ){
			f2 += input[m];
		}
		if( input[m] == ' ' ){
			break;
		}
	}
}

// returns the string "digits".
string inputParser::getDigits()
{
	return d;
}

// returns the string "letters".
string inputParser::getLetters()
{
	return l;
}

// returns the string fn1.
string inputParser::getFn1()
{
	return f1;
}

// returns the string fn2.
string inputParser::getFn2()
{
	return f2;
}

// destructor for the inputParser class.
inputParser::~inputParser()
{

}