/*
책 이름과, 가격을
저장할 수 있는 Book 클래스


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
	void print() { cout << "책 이름 : " << name << ", 가격 : " << price << endl; }

};

int main()
{
	Book cpp = Book("명품 C++", 15000);
	Book java = Book("명품 자바", 20000);

	cpp.print();
	java.print();
}