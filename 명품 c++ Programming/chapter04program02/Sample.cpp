#include <iostream>
#include "Sample.h"

using namespace std;

// ���� �Ҵ���� ���� �迭 p�� ����ڷκ��� ������ �Է� ����
void Sample::read()
{
	for (int i = 0; i < this->size; i++)
		cin >> this->p[i];
}

// ���� �迭�� ȭ�鿡 ���
void Sample::write()
{
	cout << "{ ";
	for (int i = 0; i < this->size-1; i++)
		cout << this->p[i] << ", ";
	cout << this->p[size-1] << " }" << endl;
}

// ���� �迭���� ���� ū �� ����
int Sample::big()
{
	int biggist = -1;
	for (int i = 0; i < this->size; i++)
	{
		if (biggist < this->p[i])
			biggist = this->p[i];
	}
	return biggist;
}

// �Ҹ���
Sample::~Sample()
{
	delete[] p;
}

