#include <iostream>
#include "ram.h"

Ram::Ram()
{
	// 배열을 0으로 초기화
	//std::memset(this->mem, 0, 400);
}

Ram::~Ram()
{
	std::cout << "메모리 제거됨" << std::endl;
}

char Ram::read(int address)
{
	return this->mem[address];
}

void Ram::write(int address, unsigned char value)
{
	this->mem[address] = value;
}

/*

char 값을 unsigned char로 해야 버그가 안남.

*/