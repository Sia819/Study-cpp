#include <iostream>

#pragma once


class Circle {
	int radius; // ���� ������ ��
public:
	void setRadius(int radius); // �������� �����Ѵ�.
	double getArea(); // ������ �����Ѵ�.
	//~Circle() { std::cout << "delete radious " << radius << std::endl; } // ������ �迭�� �� ���������� Ȯ��
};