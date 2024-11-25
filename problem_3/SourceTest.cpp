#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;
int a[] = { 1, 2, 3, 4, 5, 6, 7 };
int odd{ 0 }, even{ 0 };
void OddEven(int x[], int N)
{
	;
	for (int i{ 0 }; i < N; i++)
	{
		if (x[i] % 2 == 1)
		{
			odd++;
		}
		else
		{
			even++;
		}
	}
}

int main()
{
	OddEven(a, 7);
	assert(odd == 1);
	assert(even == 3);
	cout << "All test succeded.";
	return 0;
}