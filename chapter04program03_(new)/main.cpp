/* 챕터4 개정판_실습문제3 난의도4

string 클래스를 이용하여 빈칸을 포함하는 문자열을 입력받고 문자열에서 'a'가 몇개
있는지 출력하는 프로그램을 작성해보자.

문자열 입력>> Are you happy? I am so happy.
문자 a는 3개 있습니다.

(1) 문자열 'a'를 찾기 위해 string 클래스의 멤버 at()나 []를 이용하여 작성하라.
(2) 문자열 'a'를 찾기 위해 string 클래스의 find() 멤버 함수를 이용하여 작성하라.
    text.find('a', index); 는 text 문자열의 index 위치부터 'a'를 찾아 문자열 내 인덱스를 리턴한다.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string 클래스 생성
    string str;

    // 사용자로부터 문자열 입력
    cout << "문자열 입력>> ";
    cin >> str;

    // 문자의 개수를 찾는다.
    int count = 0;
    for (int i = 0; i < str.max_size(); i++)
    {
        if (str.at(i) == 'a')
            count++;
    }
    
    // 문자의 개수를 출력한다.
    cout << "문자 a는 3ㄱ" << count << endl;

}