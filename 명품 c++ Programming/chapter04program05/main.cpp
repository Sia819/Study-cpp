/* é��4 �ǽ�����5 ���ǵ� 5

������ ���� ���� �߻�ȭ �� Circle Ŭ������ �ִ�. CircleŬ������ main() �Լ���
�ۼ��ϰ� 3���� Circle ��ü�� ���� �迭�� �����ϰ�, ������ ���� �Է¹ް� ������
100���� ū ���� ������ ����ϴ� ���α׷��� �ϼ��϶�. Circle Ŭ������ �ϼ��϶�.

class Circle {
	int radius; // ���� ������ ��
public:
	void setRadius(int radius); // �������� �����Ѵ�.
	double getArea(); // ������ �����Ѵ�.
};

�� 1�� ������ >> 5
�� 2�� ������ >> 6
�� 3�� ������ >> 7
������ 100���� ū ���� 2�� �Դϴ�.
*/

#include <iostream>
#include "circle.h"

using namespace std;


int main()
{
	Circle myCircle[3];
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		int radius;
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius;

		myCircle[i] = Circle();
		myCircle[i].setRadius(radius);
		int area = myCircle[i].getArea();
		
		if (area > 100) count++;
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl;
}