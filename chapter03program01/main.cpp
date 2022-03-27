#include <iostream>
#include "main.h"

using namespace std;

Tower::Tower()
{
	this->height = 1;
}

Tower::Tower(int height)
{
	this->height = height;
}

int Tower::getHeight()
{
	return this->height;
}

int main()
{
	Tower myTower; // 1미터
	Tower seoulTower(100); // 100미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}

/* 문제
	main()의 실행 결과가 다음과 같도록 Tower 클래스를 작성하라.
	#include <iostream>
	using namespace std;
	int main() {
		Tower myTower; // 1미터
		Tower seoulTower(100); // 100미터
		cout << "높이는 " << myTower.getHeight() << "미터" << endl;
		cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
	}
*/

/* 출력결과
높이는 1미터
높이는 100미터
*/