/* 7�� ��������2 ���ǵ�5
Book ��ü�� Ȱ���ϴ� ����̴�.
------------------------------------------------------------------------------------
Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
if(a == 30000) cout << "���� 30000��" << endl; // price ��
if(a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
if(a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
------------------------------------------------------------------------------------
(1) �� ���� == ������ �Լ��� ���� �Լ��� Book Ŭ������ �ۼ��϶�.
(2) �� ���� == ������ �Լ��� ������ �Լ��� �ۼ��϶�.
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

	// (1) �� ���� == ������ �Լ��� ���� �Լ��� Book Ŭ������ �ۼ��϶�.
	/*
	bool operator==(int price)
	{
		return (this->price == price) ? true : false;
	}
	bool operator==(string title)
	{
		return (this->getTitle() == title) ? true : false;
	}
	bool operator==(Book book)
	{
		return (this->getTitle() == book.getTitle()) 
				? (this->price == book.price) 
					?(this->pages == book.pages) 
						? true 
						: false
					: false 
				: false;
	}
	*/

	// (2) �� ���� == ������ �Լ��� ������ �Լ��� �ۼ��϶�.
	friend bool operator==(Book, int);
	friend bool operator==(Book, string);
	friend bool operator==(Book, Book);
};

// (2) �� ���� == ������ �Լ��� ������ �Լ��� �ۼ��϶�.
bool operator==(Book book, int price)
{
	if (book.price == price)
		return true;
	else
		return false;
}
bool operator==(Book book, string title)
{
	if (book.title == title)
		return true;
	
	return false;
}
bool operator==(Book book, Book book2)
{
	if (book.title == book2.title
		&& book.price == book2.price
		&& book.pages == book2.pages)
		return true;

	return false;
}
    
int main()
{
    Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
    if (a == 30000) cout << "���� 30000��" << endl; // price ��
    if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
    if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
}