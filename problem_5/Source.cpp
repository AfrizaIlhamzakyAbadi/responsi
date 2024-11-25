#include <iostream>
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
	cout << "a: " << polindrome(a, 5) << '\n' << "b: " << polindrome(b, 3);
	return 0;
}
