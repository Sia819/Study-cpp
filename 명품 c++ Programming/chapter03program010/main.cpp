/* 챕터3 실습문제10 난의도7
컴퓨터의 주 기억장치를 모델링하는 Ram을 ...
*/

#include <iostream>
#include "Ram.h"

using namespace std;

int main()
{
	Ram ram;
	ram.write(100, 200); // 100번지에 20 저장
	ram.write(101, 30); // 101번지에 30 저장
	char res = ram.read(100) + ram.read(101); // 20 + 30 = 50
	ram.write(102, res);
	cout << "102번지의 값" << (int)ram.read(102) << endl;
}


