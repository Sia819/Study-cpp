#include <iostream>

int main()
{
	std::cout << "���ڵ��� �Է��϶�(100�� �̸�)." << std::endl;

	char address[100];
	int count = 0;
	std::cin.getline(address, 100, '\n');

	for (char value : address)
	{
		if (value == 'x')
			count++;
	}

	std::cout << "x�� ������ " << count << std::endl;
}

/* ������

���ڵ��� �Է��϶�(100�� �̸�).
Hexadcimal x-axe y-axe
x�� ������ 4

*/

/* ���� string class

���������� ���� string�� �������� string Ŭ������ ����ϸ� �ȴ�.

std::string str;
std::getline(std::cin, str);

//https://stackoverflow.com/questions/45973659/how-to-make-length-restriction-on-stringgetline
*/