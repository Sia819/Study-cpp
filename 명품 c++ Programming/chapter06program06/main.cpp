/* 6장 실습문제6 난의도8
동일한 크기의 패널을 반환하는 다음 2개의 static 멤버 함수를 가진
ArrayUtility2 클래스를 만들고, 이 클래스를 이용하여 아래 결과와 같이 출력되도록
프로그램을 완성하라.
---------------------------------------------------------------------
//s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
static int* concat(int s1[], int s2[], int size);

//s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴.
//리턴하는 배열의 크기는 retSize에 전달. retSize가 0인 경우 NULL을 리턴
static int* remove(int s1[], int s2[], int size, int& retSize);
---------------------------------------------------------------------
정수 5 개를 입력하라. 배열 x에 삽입한다>> 5 4 3 2 1
정수 5 개를 입력하라. 배열 y에 삽입한다>> 3 2 1 0 -1
합친 정수 배열을 출력한다
5 4 3 2 1 3 2 1 0 -1
배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 2
5 4
---------------------------------------------------------------------
*/
#include <iostream>

using namespace std;

class ArrayUtility2
{
private:

public:

	//s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* concat(int s1[], int s2[], int size)
	{
		int* arr = new int[size * 2];
		for (int i = 0; i < size; i++)
		{
			
		}

	}
	//s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴.
	//리턴하는 배열의 크기는 retSize에 전달. retSize가 0인 경우 NULL을 리턴
	static int* remove(int s1[], int s2[], int size, int& retSize)
	{

	}
};


int main()
{
	int x[5];
	int y[5];
	cout << "정수 5 개를 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) { cin >> x[i]; }
	cout << "정수 5 개를 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) { cin >> y[i]; }

	ArrayUtility2::concat(x, y, 5);	

	cout << "합친 정수 배열을 출력한다" << endl;

	ArrayUtility2::remove(x, y, 5);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 2" << endl;
}

