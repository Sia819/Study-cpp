/*02
써커 클래스로 합치기
Circle클래스를 선언하고

객체 1에 더하는 프로그램으 ㄹ작성하라
주요 키워드 : 복사 생성자
*/

#include <iostream>

using namespace std;

class Circle
{
private: 
	int radius;
public:
	Circle() 
	{
		radius = 0;
	}
	void setRadius(int value) { this->radius = value; }
	int getRadius() { return this->radius; }
	void print() { cout << "원의 크기는 (" << radius << ")" << endl; }
};

void addCircle(Circle& cir1, Circle& cir2)
{
	cir1.setRadius(cir1.getRadius() + cir2.getRadius());
}

int main()
{
	Circle cir1 = Circle();
	cir1.setRadius(10);
	Circle cir2 = cir1;
	cir2.setRadius(5);

	addCircle(cir1, cir2);

	cir1.print();
}