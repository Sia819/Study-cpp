#include <iostream>
#include "Sample.h"

using namespace std;

int main()
{
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ����" << s.big() << endl;	// ���� ū �� ���
}


/*
1 3 5 7 9 11 13 15 17 19
*/