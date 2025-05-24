#pragma once

class Ram
{
	char mem[400] = {0}; // 100KB 메모리. 한 번지는 1byte이므로 char타입 사용.
	int size;
public:
	Ram(); // mem 배열을 0으로 초기화하고 size를 100*1024로 초기화
	~Ram(); // "메모리 제거됨" 문자열 출력
	char read(int address); // address 주소의 메모리 바이트 리턴
	void write(int address, unsigned char value);
};

/*

char 값을 unsigned char로 해야 버그가 안남.

*/