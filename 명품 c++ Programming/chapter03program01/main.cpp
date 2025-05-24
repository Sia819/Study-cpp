#include <iostream>
#include "main.h"

using namespace std;

Tower::Tower()
{
	this->height = 1;
}

Tower::Tower(int height)
{
	this->height = height;
}

int Tower::getHeight()
{
	return this->height;
}

int main()
{
	Tower myTower; // 1����
	Tower seoulTower(100); // 100����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}

/* ����
	main()�� ���� ����� ������ ������ Tower Ŭ������ �ۼ��϶�.
	#include <iostream>
	using namespace std;
	int main() {
		Tower myTower; // 1����
		Tower seoulTower(100); // 100����
		cout << "���̴� " << myTower.getHeight() << "����" << endl;
		cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
	}
*/

/* ��°��
���̴� 1����
���̴� 100����
*/