/* 6장 실습문제2 난의도6
Person 클래스의 객체를 생성하는 main() 함수는 다음과 같다.
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
(1) 생성자 중복 작성하고 프로그램을 완성하라.
(2) 디폴트 매개 변수를 가진 하나의 생성자를 작성하고 프로그램을 완성하라.
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
		//this->name = "";	// 클래스는 선언할 시 기본생성자로 자동 생성되기에 필요없음
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