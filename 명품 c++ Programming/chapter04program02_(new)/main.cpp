/*
é��4 ������_�ǽ�����2 ���ǵ�3

���� ���� 5���� �迭�� ���� �Ҵ�ް�, ����5�� �Է¹޾� ����� ���ϰ� ����� ��
�迭�� �Ҹ��Ű���� main �Լ��� �ۼ��϶�.

���� 5�� �Է�>> 1 2 4 5 10
��� 4.4
*/

#include <iostream>

using namespace std;

int main()
{
	// ���̰�5�� ���� �迭 ����
	int* myarray = new int[5];

	// ����ڷκ��� ����5�� �Է�
	cout << "���� 5�� �Է�>> ";
	cin >> myarray[0] >> myarray[1] >> myarray[2] >> myarray[3] >> myarray[4];

	// ����� ����
	double add = 0;
	for (int i = 0; i < 5; i++)
	{
		add += myarray[i];
	}
	double average = add / 5;

	// ����� ���
	cout << average << endl;

	// ���� �迭�� ����
	delete[] myarray;
}


/* ��°��

���� 5�� �Է�>> 1 2 4 5 10
4.4
*/