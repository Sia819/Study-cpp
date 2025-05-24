/*02
��Ŀ Ŭ������ ��ġ��
CircleŬ������ �����ϰ�

��ü 1�� ���ϴ� ���α׷��� ���ۼ��϶�
�ֿ� Ű���� : ���� ������
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
	void print() { cout << "���� ũ��� (" << radius << ")" << endl; }
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