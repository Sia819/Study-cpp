/* 4�� �ǽ�����6 ���ǵ�6
�ǽ� ���� 5�� ������ �����غ���. ����ڷκ��� ������ ���� ���� ������ �Է¹ް�,
���� ������ŭ �������� �Է¹޴� ������� �����϶�. ���� ������ ���� �������� �迭��
�Ҵ��Ͽ����Ѵ�.
*/

#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	int amount = 0;
	cout << "���� ���� >> ";
	cin >> amount;

	Circle* myCircle = new Circle[amount]();

	int count = 0;
	
	for (int i = 0; i < amount; i++)
	{
		int radius;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;

		myCircle[i].setRadius(radius);
		int area = myCircle[i].getArea();

		if (area > 100) count++;
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;

	delete[] myCircle;
}