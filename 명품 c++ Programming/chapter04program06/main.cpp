/* 4장 실습문제6 난의도6
실습 문제 5의 문제를 수정해보자. 사용자로부터 다음과 같이 원의 개수를 입력받고,
원의 개수만큼 반지름을 입력받는 방식으로 수정하라. 원의 개수에 따라 동적으로 배열을
할당하여야한다.
*/

#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	int amount = 0;
	cout << "원의 개수 >> ";
	cin >> amount;

	Circle* myCircle = new Circle[amount]();

	int count = 0;
	
	for (int i = 0; i < amount; i++)
	{
		int radius;
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius;

		myCircle[i].setRadius(radius);
		int area = myCircle[i].getArea();

		if (area > 100) count++;
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;

	delete[] myCircle;
}