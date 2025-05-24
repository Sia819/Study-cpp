/* 6�� �ǽ�����2 ���ǵ�6
Person Ŭ������ ��ü�� �����ϴ� main() �Լ��� ������ ����.
------------------------------------------------------------------------
class Person {
	int id;
	double weight;
	string name;
public:
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
	Person grace, ashly(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashly.show();
	helen.show();
}
------------------------------------------------------------------------
1 20.5 Grace
2 20.5 Ashley
3 32.5 Helen
------------------------------------------------------------------------
(1) ������ �ߺ� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
(2) ����Ʈ �Ű� ������ ���� �ϳ��� �����ڸ� �ۼ��ϰ� ���α׷��� �ϼ��϶�.
*/
#include <iostream>

using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person() 
	{
		this->id = 0;
		this->weight = 0.0;
		//this->name = "";	// Ŭ������ ������ �� �⺻�����ڷ� �ڵ� �����Ǳ⿡ �ʿ����
	}
	Person(int id, string name)
	{
		this->id = id;
		this->weight = 0.0;
		this->name = name;
	}
	Person(int id, string name, int weight) 
	{ 
		this->id = id;
		this->name = name; 
		this->weight = weight; 
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() 
{
	Person grace, ashly(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashly.show();
	helen.show();
}