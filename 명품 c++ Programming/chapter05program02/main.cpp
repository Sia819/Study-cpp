/*


bool bigger(int a, int b, int& big);
*/

#include <iostream>

using namespace std;

bool bigger(int a, int b, int& big);

int main()
{
	int num1 = 10;
	int num2 = 20;
	int big;
	bigger(num1, num2, big);

	cout << "big´Â " << big << endl << endl;
	cout << "num1Àº " << num1 << endl;
	cout << "num2Àº " << num2 << endl;
}

bool bigger(int a, int b, int& big)
{
	if (a > b)
	{
		big = a;
		return false;
	}
	else if (b > a)
	{
		big = b;
		return false;
	}
	else
	{
		big = a;
		return true;
	}
	return false;
}