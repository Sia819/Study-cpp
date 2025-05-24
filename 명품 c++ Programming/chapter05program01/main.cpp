/* é��5 �ǽ�����1 ���ǵ�3
�ΰ��� Circle ��ü�� ��ȯ�ϴ� swap() �Լ��� '������ ���� ȣ��'�� �ǵ��� �ۼ��ϰ�
ȣ���ϴ� ���α׷��� �ۼ��϶�
*/

#include <iostream>
#include "circle.h"

using namespace std;

/// <summary>
/// ���� :
/// param1��ü�� param2��ü�� ���� ��ȯ�մϴ�.
/// ���� : 
/// param1�� ����Ű�� �����Ϳ� param2�� ����Ű�� �����͸� ���� ��ȯ
/// </summary>
void swap(Circle& circle1, Circle& circle2);

int main()
{
	Circle myCircle1 = Circle();
	myCircle1.setRadious(2);

	Circle myCircle2 = Circle();
	myCircle2.setRadious(5);

	cout << myCircle1.getRadious() << ", " << myCircle2.getRadious() << endl;
	swap(myCircle1, myCircle2);
	cout << myCircle1.getRadious() << ", " << myCircle2.getRadious() << endl;
}

void swap(Circle& circle1, Circle& circle2)
{
	Circle temp;
	temp = circle1;
	circle1 = circle2;
	circle2 = temp;
}