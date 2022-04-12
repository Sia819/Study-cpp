/*
챕터4 개정판_실습문제2 난의도3

정수 공간 5개를 배열로 동적 할당받고, 정수5개 입력받아 평균을 구하고 출력한 뒤
배열을 소멸시키도록 main 함수를 작성하라.

정수 5개 입력>> 1 2 4 5 10
평균 4.4
*/

#include <iostream>

using namespace std;

int main()
{
	// 길이가5인 동적 배열 선언
	int* myarray = new int[5];

	// 사용자로부터 정수5개 입력
	cout << "정수 5개 입력>> ";
	cin >> myarray[0] >> myarray[1] >> myarray[2] >> myarray[3] >> myarray[4];

	// 평균을 연산
	double add = 0;
	for (int i = 0; i < 5; i++)
	{
		add += myarray[i];
	}
	double average = add / 5;

	// 평균을 출력
	cout << average << endl;

	// 동적 배열을 제거
	delete[] myarray;
}


/* 출력결과

정수 5개 입력>> 1 2 4 5 10
4.4
*/