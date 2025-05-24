/* 7�� �ǽ�����4 ���ǵ�5
���� ������ ���� å�� ������ ���� ������ ���ϰ��� �Ѵ�. < �����ڸ� �ۼ��϶�.
-----------------------------------------------------------------------
Book a("û��", 20000, 300);
string b;
cout << "å �̸��� �Է��ϼ��� >>";
getline();
if (b < a)
	cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
-----------------------------------------------------------------------
å �̸��� �Է��ϼ���>>�ٶ��� �Բ� �������
û���� �ٶ��� �Բ� ������ٺ��� �ڿ� �ֱ���!
-----------------------------------------------------------------------
*/

#include <iostream>
#include <string>

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

	friend bool operator<(string, Book);
};

bool operator<(string str, Book book)
{
	return (str < book.title) ? true : false;
}

int main()
{
	Book a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ��� >>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;
}

/*
Ű����Ʈ : stringŬ������ �̹� < operator�� �����Ǿ��ִ�.
*/