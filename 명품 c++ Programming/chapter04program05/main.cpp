/* 챕터4 실습문제5 난의도 5

다음과 같이 원을 추상화 한 Circle 클래스가 있다. Circle클래스와 main() 함수를
작성하고 3개의 Circle 객체를 가진 배열을 선언하고, 반지름 값을 입력받고 면적이
100보다 큰 원의 개수를 출력하는 프로그램을 완성하라. Circle 클래스도 완성하라.

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
};

원 1의 반지름 >> 5
원 2의 반지름 >> 6
원 3의 반지름 >> 7
면적이 100보다 큰 원은 2개 입니다.
*/

#include <iostream>
#include "circle.h"

using namespace std;


int main()
{
	Circle myCircle[3];
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		int radius;
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;

		myCircle[i] = Circle();
		myCircle[i].setRadius(radius);
		int area = myCircle[i].getArea();
		
		if (area > 100) count++;
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}