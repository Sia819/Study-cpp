#include <iostream>
#include "Sample.h"

using namespace std;

// 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력 받음
void Sample::read()
{
	for (int i = 0; i < this->size; i++)
		cin >> this->p[i];
}

// 정수 배열을 화면에 출력
void Sample::write()
{
	cout << "{ ";
	for (int i = 0; i < this->size-1; i++)
		cout << this->p[i] << ", ";
	cout << this->p[size-1] << " }" << endl;
}

// 정수 배열에서 가장 큰 수 리턴
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

// 소멸자
Sample::~Sample()
{
	delete[] p;
}

