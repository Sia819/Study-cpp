/* 챕터5 실습문제1 난의도3
두개의 Circle 객체를 교환하는 swap() 함수를 '참조에 의한 호출'이 되도록 작성하고
호출하는 프로그램을 작성하라
*/

#include <iostream>
#include "circle.h"

using namespace std;

/// <summary>
/// 설명 :
/// param1객체와 param2객체를 서로 교환합니다.
/// 동작 : 
/// param1이 가르키는 포인터와 param2가 가르키는 포인터를 서로 교환
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