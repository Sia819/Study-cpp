#include <iostream>

int main()
{
	float arr1[5];
	float bigist = 0.0;
	std::cout << "5 개의 실수를 입력하라>>";
	for (int i = 0; i < 5; i++)
	{
		// 실수를 키보드로부터 입력받습니다.
		std::cin >> arr1[i];
		// 입력받은 실수를 저장된 가장 큰 값으로 비교 후 대입합니다.
		if (bigist < arr1[i])
			bigist = arr1[i];
	}
	std::cout << "제일 큰 수 = " << bigist << std::endl;
}

/* 실행결과

5 개의 실수를 입력하라>>5.2 -2.5 3.4 9.9 7.7
제일 큰 수 = 9.9

*/