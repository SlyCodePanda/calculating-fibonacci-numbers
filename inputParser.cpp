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
	int count;

	// Stores the initial digits in the input string into the string "digits".
	for ( int i = 0; i < input.length(); i++ )
	{
		if( input[i] > 0 ){
			d += input[i];
			count++;
		}
		if( input[i] == ' ' ){
			break;
		}
	}

	// Stores the letters from the input string in the string "letters".
	for ( int j = count; j < input.length(); j++ )
	{
		if( input[j] > 0 ){
			l += input[j];
		}
		if( input[j] == ' ' ){
			break;
		}
	}

	//cout << "khgikh " << count << endl;

	// Stores the numbers from the input string in the string "fn1".
	for ( int k = count; k < input.length(); k++ )
	{
		//if( input[k] > 0 ){
		//	fn1 += input[k];
		//	count++;
		//	cout << "New count total: " << count << endl;
		//}
		//if( input[k] == ' ' ){
		//	break;
		//}
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