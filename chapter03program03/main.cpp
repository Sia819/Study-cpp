#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Random::Random()
{
    srand((unsigned)time(0)); // rand() 함수에 seed를 부여합니다.
}

int Random::next()
{
    return rand();
}

int Random::nextInRange(int from, int to)
{
    return rand() % (to - from + 1) + from;
}


int main()
{
    Random r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
    for (int i = 0; i < 10; i++)
    {
        int n = r.next();
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개--" << endl;
    for (int i = 0; i < 10; i++)
    {
        int n = r.nextInRange(2, 4);
        cout << n << ' ';
    }
}

/* 
[문제]
랜덤 수를 발생시키는 Random 클래스를 만들자. Random 클래스를 이용하여 랜덤
한 정수를 10개 출력사는 사례는 다음과 같다. Random 클래스가 생성자, next(),
nextInRange()의 3개의 멤버 함수를 가지도록 작성하고 main() 함수와 합쳐 하나
의 cpp 파일에 구현하여라.

[힌트]
랜덤 정수를 발생시키기 위해 다음 두 라인의 코드가 필요하고, <cstdlib>와 <ctime> 헤더
파일을 include 해야한다.
srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
in n = rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생
*/

/*
[실행결과]
-- 0에서 32767까지의 랜덤 정수 10 개--
13246 2885 28445 22780 7449 17864 15898 18869 9758 15465

-- 2에서 4 까지의 랜덤 정수 10 개--
3 2 3 3 2 2 3 4 2 2
*/