#include <iostream>

using namespace std;

class MyClass
{
private:
	string name;
	int value;
public:
	MyClass(string name, int value)
	{
		this->name = name;
		this->value = value;
		cout << "MyClass ������!" << "(" << name << ", " << value << ")" << endl;
	}
	MyClass(MyClass& myClass)
	{
		this->name = myClass.name;
		this->value = myClass.value;
		cout << "MyClass �����!" << endl;
	}
	~MyClass()
	{
		cout << "MyClass ������!" << endl;
	}
	void print()
	{
		cout << "(" << name << ", " << value << ")" << endl;
	}
};

int main()
{
	MyClass a("a", 10);
	MyClass b("b", 20);
	a.print();
	b.print();
	b = a;
	a.print();
	b.print();
}