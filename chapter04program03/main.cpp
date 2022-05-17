/* 챕터4 실습문제3 난의도5
string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 입력 받고
글자 하나만 랜덤하게 수정하여 출력하는 프로그램을 작성하라.

아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)
>> Falling in love with you

>> hello world

*/

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;

	string str = "123";

	cout << ">> ";
	getline(cin, str);

	while (str != "exit")
	{
		// gen random number
		srand((unsigned)time(NULL));
		// 0 ~ 스트링 사이즈 의 랜덤 난수생성
		int ranLocation = rand() % str.size();
		// 'a' ~ 'z' 사이의 랜덤 캐릭터 생성
		char ranChar = (rand() % ('z' - 'a')) + 'a';
		// 랜덤한 위치에 랜덤한 캐릭터를 대입
		str[ranLocation] = ranChar;

		cout << str << endl;
		
		// loop
		cout << ">> ";
		getline(cin, str);
	}
}

