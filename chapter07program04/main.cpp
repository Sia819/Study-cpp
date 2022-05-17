/* 7장 실습문제4 난의도5
다음 연산을 통해 책의 제목을 사전 순으로 비교하고자 한다. < 연산자를 작성하라.
-----------------------------------------------------------------------
Book a("청춘", 20000, 300);
string b;
cout << "책 이름을 입력하세요 >>";
getline();
if (b < a)
	cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
-----------------------------------------------------------------------
책 이름을 입력하세요>>바람과 함께 사라지다
청춘이 바람과 함께 사라지다보다 뒤에 있구나!
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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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
	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하세요 >>";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "이 " << b << "보다 뒤에 있구나!" << endl;
}

/*
키포인트 : string클래스에 이미 < operator가 구현되어있다.
*/