#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::to_string;

#include <chrono>
using std::chrono::nanoseconds;
using std::chrono::steady_clock;
using std::chrono::duration_cast;

void FuzzBuzz();

int main()
{
	auto start = steady_clock::now();

	FuzzBuzz();

	auto end = steady_clock::now();
	auto diff = end - start;
	cout << duration_cast<nanoseconds>(diff).count() << " ns" << endl;
	return 0;
}

void FuzzBuzz()
{
	int i = 1;

	for (int i = 1; i <= 100; i++)
	{
		int fuzz = (i % 3);
		int buzz = (i % 5);

		cout << (!fuzz ? "Fuzz" : "") << (!buzz ? "Buzz" : "") << ((fuzz && buzz) ? to_string(i) : "") << endl;;
	}
}