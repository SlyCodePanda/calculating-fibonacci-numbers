#include <iostream>
#include <string>
#include <sstream>

#include "inputParser.h"
#include "Reverse.h"
//#include "Fibonacci.h"
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

	cout << digits << endl;
	cout << letters << endl;
	cout << fn1 << endl;

	return 0;

};