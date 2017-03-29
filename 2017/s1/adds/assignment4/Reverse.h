#include <iostream>
#include <string>

using namespace std;

class Reverse
{
	int revDigi;
	string revString;
	
	public:

		Reverse();

		int reverseDigit( int value );
		string reverseString( string letters );

		~Reverse();

};