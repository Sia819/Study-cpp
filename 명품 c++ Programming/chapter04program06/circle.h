#include <iostream>

#pragma once


class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
	//~Circle() { std::cout << "delete radious " << radius << std::endl; } // 포인터 배열시 잘 지워지는지 확인
};