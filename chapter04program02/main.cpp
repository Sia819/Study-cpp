#include <iostream>
#include "Sample.h"

using namespace std;

int main()
{
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는" << s.big() << endl;	// 가장 큰 수 출력
}


/*
1 3 5 7 9 11 13 15 17 19
*/