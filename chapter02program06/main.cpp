#include <iostream>
#include <string>

int main()
{
	std::string password;
	std::string passwordRepeat;
	std::cout << "새 암호를 입력하세요>>";
	std::cin >> password;
	std::cout << "새 암호를 다시 한 번 입력하세요>>";
	std::cin >> passwordRepeat;
	if (password == passwordRepeat)
		std::cout << "같습니다" << std::endl;
}


/* 실행결과

새 암호를 입력하세요>>파랑새
새 암호를 다시 한 번 입력하세요>>파랑새
같습니다

*/