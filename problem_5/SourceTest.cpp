#include <iostream>
#include <cassert>
#include <string>
using namespace std;
bool polindrome(string x, int N)
{
	int L{ 0 }, R{ N - 1 };
	while (L < R)
	{
		if (x[L] == x[R])
		{
			L++;
			R--;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	string a = "qwewq";
	string b = "qwe";
	assert(polindrome(a, 5) == 1);
	assert(polindrome(b, 3) == 0);
	cout << "All test succeded.";
	return 0;
}