/* 7장 연습문제2 난의도5
Book 객체를 활용하는 사례이다.
------------------------------------------------------------------------------------
Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
if(a == 30000) cout << "정가 30000원" << endl; // price 비교
if(a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
if(a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
------------------------------------------------------------------------------------
(1) 세 개의 == 연산자 함수를 가진 함수를 Book 클래스를 작성하라.
(2) 세 개의 == 연산자 함수를 프랜드 함수로 작성하라.
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

	// (1) 세 개의 == 연산자 함수를 가진 함수를 Book 클래스를 작성하라.
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

	// (2) 세 개의 == 연산자 함수를 프랜드 함수로 작성하라.
	friend bool operator==(Book, int);
	friend bool operator==(Book, string);
	friend bool operator==(Book, Book);
};

// (2) 세 개의 == 연산자 함수를 프랜드 함수로 작성하라.
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
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    if (a == 30000) cout << "정가 30000원" << endl; // price 비교
    if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
    if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
}