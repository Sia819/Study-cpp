/*
å �̸���, ������
������ �� �ִ� Book Ŭ����


*/

#include<iostream>

using namespace std;

class Book
{
private:
	char* name;
	int price;
public:
	Book(const char* name, int price)
	{
		//this->name = (char*)name;
		strcpy_s(this->name, sizeof(name),  name);
		this->price = price;
	}
	void print() { cout << "å �̸� : " << name << ", ���� : " << price << endl; }

};

int main()
{
	Book cpp = Book("��ǰ C++", 15000);
	Book java = Book("��ǰ �ڹ�", 20000);

	cpp.print();
	java.print();
}