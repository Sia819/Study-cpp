#include <iostream>

int main()
{
	for (int i = 0; i < 100; i++)
	{
		if (i % 10 == 0)
			std::cout << '\n';
		std::cout << i + 1 << "\t";
	}
}
