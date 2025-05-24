/* ���� 1~4���� ���� Book Ŭ������ ������ ����.
------------------------------------------------------------------------------
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
};
------------------------------------------------------------------------------
*/
/* 7�� �ǽ�����1�� ���ǵ�5
Book ��ü�� ���� ������ �ϰ��� �Ѵ�.
---------------------------------------------------
Book a("û��", 20000, 300), b("�̷�", 30000, 500);
a += 500; // å a�� ���� 500�� ����
b -= 500; // å b�� ���� 500�� ����
a.show();
b.show();
---------------------------------------------------
û�� 20500�� 300������
�̷� 29500�� 500������
---------------------------------------------------
(1) +=, -= ������ �Լ��� Book Ŭ������ ��� �Լ��� �����϶�.
(2) +=, -= ������ �Լ��� Book Ŭ���� �ܺ� �Լ��� �����϶�.
*/
#include <iostream>

using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }

	// (1) +=, -= ������ �Լ��� Book Ŭ������ ��� �Լ��� �����϶�.
	/*
	Book operator+=(int increasePrice)
	{
		this->price += increasePrice;
		return *this;
	}
	Book operator-=(int increasePrice)
	{
		this->price -= increasePrice;
		return *this;
	}
	*/

	// (2) +=, -= ������ �Լ��� Book Ŭ���� �ܺ� �Լ��� �����϶�.
	friend Book operator+=(Book&, int);
	friend Book operator-=(Book&, int);
};

// (2) +=, -= ������ �Լ��� Book Ŭ���� �ܺ� �Լ��� �����϶�.
Book operator+=(Book& book, int price)
{
	book.price += price;
	return book;
}
Book operator-=(Book &book, int price)
{
	book.price -= price;
	return book;
}


int main()
{
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500; // å a�� ���� 500�� ����
	b -= 500; // å b�� ���� 500�� ����
	a.show();
	b.show();
}