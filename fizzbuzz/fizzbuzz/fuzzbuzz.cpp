#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::to_string;

const int FUZZ_MULTI = 3;
const int BUZZ_MULTI = 5;
const int START_NUM = 1;
const int END_NUM = 100;

void FuzzBuzz();

int main()
{
	FuzzBuzz();

	return 0;
}

void FuzzBuzz()
{
	// calculate if number is a multiple of the specified number and print results
	for (int i = START_NUM; i <= END_NUM; i++)
	{
		// Store modulus operations for the current value of i
		int fuzz = (i % FUZZ_MULTI);
		int buzz = (i % BUZZ_MULTI);

		cout << (!fuzz ? "Fuzz" : "") // is i a multiple of FUZZ_MULTI
			 << (!buzz ? "Buzz" : "") // is i a multiple of BUZZ_MULTI
			 << ((fuzz && buzz) ? to_string(i) : "") // is i not a mutliple of either
			 << endl;
	}
}