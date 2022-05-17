/* 챕터4 실습문제4 난의도5
string 클래스를 이용하여 사용자가 입력한 영문 한 줄을 문자열로 입력받고 거꾸로
출력하는 프로그램을 작성하시오.

아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)
>>> Delicious C++
~~
>>> I love programming
~~
>> exit
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = string();

	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.)" << endl;

	cout << ">> ";
	getline(cin, str);

	while (str != "exit")
	{
		// reverse 방법1
		//std::reverse(str.begin(), str.end());

		// reverse 방법 2
		char temp;
		int i = 0;
		int j = str.size() - 1;
		while (i < (str.size() / 2))
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
			i++;
			j--;
		}

		cout << str << endl;

		//loop
		cout << ">> ";
		getline(cin, str);
	}
}