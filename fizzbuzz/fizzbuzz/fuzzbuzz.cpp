#include <iostream>
using std::cout;
using std::endl;

#include <ctime>

void FuzzBuzz();

int main()
{
	FuzzBuzz();

	return 0;
}

void FuzzBuzz()
{
	int i = 1;

	while (i <= 100)
	{
		int fuzz = (i % 3);
		int buzz = (i % 5);
		
		
		if ((fuzz == 0) || (buzz == 0))
		{
			if (fuzz == 0)
			{
				cout << "Fuzz";
			}
			if (buzz == 0)
			{
				cout << "Buzz";
			}
		}
		else
		{
			cout << i;
		}

		cout << endl;
		i++;
	}
}