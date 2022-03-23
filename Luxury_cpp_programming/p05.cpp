#include <iostream>
#include <string>
#include "program.h"


namespace chapter02
{
	void main_05()
	{
		std::cout << "문자들을 입력하라(100개 미만)." << std::endl;

		char address[100];
		int count = 0;
		std::cin.getline(address, 100, '\n');

		for (char value : address)
		{
			if (value == 'x')
				count++;
		}

		std::cout << "x의 개수는 " << count << std::endl;
	}
}

/* 실행결과

문자들을 입력하라(100개 미만).
Hexadcimal x-axe y-axe
x의 개수는 4

*/

/* 참고 string class

길이제한이 없는 string을 받으려면 string 클래스를 사용하면 된다.

std::string str;
std::getline(std::cin, str);

//https://stackoverflow.com/questions/45973659/how-to-make-length-restriction-on-stringgetline
*/