#include <iostream>
#include <string>

using namespace std;

class inputParser
{

	string d;
	string f1;
	string f2;

	string l;

	public:

		inputParser();

		void getDatString( string input );
		string getDigits();
		string getFn1();
		string getFn2();
		string getLetters();

		~inputParser();

};