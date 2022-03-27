#include <iostream>

int main()
{
	int num1, num2;
	std::cout << "두 수를 입력하라>>";
	std::cin >> num1 >> num2;
	std::cout << "큰 수 = ";
	if (num1 > num2)
		std::cout << num1 << std::endl;
	else
		std::cout << num2 << std::endl;
}

