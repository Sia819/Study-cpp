// 챕터4 실습문제1 난의도4 // 개정판 동일

#include <iostream>
#include "Color.h"

using namespace std;

int main()
{
	Color screenColor(255, 0, 0);	// 빨간색의 screenColor 객체 생성
	Color* p;						// Color타입의 포인터 변수 p 선언

	// (1) p가 screenColor의 주소를 가지도록 코드 작성
	p = &screenColor;

	// (2) p와 show()를 이용하여 screenColor 색 출력
	p->show();

	// (3) Color의 일차원 배열 colors 선언, 원소는 3개
	Color colors[3];

	// (4) p가 Colors 배열을 가리키도록 코드 작성
	p = colors;

	// (5) p와 setColor()를 이용하여 colors[0], colors[1], colors[2] 가
	//     각각 빨강, 초록, 파랑을 가지도록 작성
	(p + 0)->setColor(255, 0, 0);
	(p + 1)->setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 255);

	// (6) p와 show()를 이용하여 colors 배열의 모든 객체의 색 출려기. for 문 이용
	for (int i = 0; i < 3; i++)
	{
		(p + i)->show();
	}
}

/* 실행결과
255 0 0
255 0 0
0 255 0
0 0 255

*/