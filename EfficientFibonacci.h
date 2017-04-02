#include <iostream>
#include <string>

#include <vector>

using namespace std;

class EfficientFibonacci
{
	private:
		std::vector<int> preValue;

	public:
		
		EfficientFibonacci();

		int effFib( int n );

		~EfficientFibonacci();
};