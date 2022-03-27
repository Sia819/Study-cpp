#include <iostream>

int main()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cout << j + 1 << "x" << i + 1 << "=" << (i + 1) * (j + 1) << '\t';
		}
		std::cout << "\n";
	}
}