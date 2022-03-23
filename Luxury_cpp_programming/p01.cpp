#include <iostream>
#include "program.h"

namespace chapter02
{
	void main_01()
	{
		for (int i = 0; i < 100; i++)
		{
			if (i % 10 == 0)
				std::cout << '\n';
			std::cout << i+1 << "\t";
		}
	}
}
