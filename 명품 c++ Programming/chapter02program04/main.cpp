#include <iostream>

int main()
{
	float arr1[5];
	float bigist = 0.0;
	std::cout << "5 ���� �Ǽ��� �Է��϶�>>";
	for (int i = 0; i < 5; i++)
	{
		// �Ǽ��� Ű����κ��� �Է¹޽��ϴ�.
		std::cin >> arr1[i];
		// �Է¹��� �Ǽ��� ����� ���� ū ������ �� �� �����մϴ�.
		if (bigist < arr1[i])
			bigist = arr1[i];
	}
	std::cout << "���� ū �� = " << bigist << std::endl;
}

/* ������

5 ���� �Ǽ��� �Է��϶�>>5.2 -2.5 3.4 9.9 7.7
���� ū �� = 9.9

*/