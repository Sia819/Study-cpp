/* 6�� �ǽ�����1 ���ǵ�5
add() �Լ��� ȣ���ϴ� main() �Լ��� ������ ����.
-----------------------------------------------------
int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {6,7,8,9,10};
	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
	cout << c << endl; // 15���
	cout << d << endl; // 55���
}
-----------------------------------------------------
(1) add�Լ��� �ߺ� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
(2) ����Ʈ �Ű� ������ ���� �ϳ��� add() �Լ��� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
*/

#include <iostream>

using namespace std;

int add(int pArray[], int pRange)
{
	int count = 0;
	for (int i = 0; i < pRange; i++)
	{
		count += pArray[i];
	}
	return count;
}

int add(int pArray[], int pRange, int pArray2[])
{
	int count = 0;
	for (int i = 0; i < pRange; i++)
	{
		count += pArray[i];
	}
	for (int i = 0; i < pRange; i++)
	{
		count += pArray2[i];
	}
	return count;
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
	cout << c << endl; // 15���
	cout << d << endl; // 55���
}