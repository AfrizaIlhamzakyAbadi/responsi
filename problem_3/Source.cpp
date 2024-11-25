#include <iostream>
#include <cmath>
using namespace std;
int odd{ 0 }, even{0};
void OddEven(int x[], int N)
{;
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
	int a[] = { 1, 2, 3, 4, 5, 6, 7};
	OddEven(a, 7);
	cout << "odd: " << odd << '\n' << "even: " << even;
	return 0;
}