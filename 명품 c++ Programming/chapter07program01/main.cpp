/* 문제 1~4까지 사용될 Book 클래스는 다음과 같다.
------------------------------------------------------------------------------
class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
};
------------------------------------------------------------------------------
*/
/* 7장 실습문제1번 난의도5
Book 객체에 대해 연산을 하고자 한다.
---------------------------------------------------
Book a("청춘", 20000, 300), b("미래", 30000, 500);
a += 500; // 책 a의 가격 500원 증가
b -= 500; // 책 b의 가격 500원 감소
a.show();
b.show();
---------------------------------------------------
청춘 20500원 300페이지
미래 29500원 500페이지
---------------------------------------------------
(1) +=, -= 연산자 함수를 Book 클래스의 멤버 함수로 구현하라.
(2) +=, -= 연산자 함수를 Book 클래스 외부 함수로 구현하라.
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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }

	// (1) +=, -= 연산자 함수를 Book 클래스의 멤버 함수로 구현하라.
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

	// (2) +=, -= 연산자 함수를 Book 클래스 외부 함수로 구현하라.
	friend Book operator+=(Book&, int);
	friend Book operator-=(Book&, int);
};

// (2) +=, -= 연산자 함수를 Book 클래스 외부 함수로 구현하라.
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
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500; // 책 a의 가격 500원 증가
	b -= 500; // 책 b의 가격 500원 감소
	a.show();
	b.show();
}