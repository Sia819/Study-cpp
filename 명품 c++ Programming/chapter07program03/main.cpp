/* 7�� �ǽ�����3 ���ǵ�4
���� ������ ���� ��¥ å���� �Ǻ��ϵ��� ! �����ڸ� �ۼ��϶�.
-----------------------------------------
Book book("�������", 0, 50); // ������ 0
if (!book) cout << "��¥��" << endl;
-----------------------------------------
��¥��
-----------------------------------------
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

	bool operator!()
	{
		return (this->price == 0) ? true : false;
	}
};

int main()
{
	Book book("�������", 0, 50); // ������ 0
	if (!book) cout << "��¥��" << endl;
}