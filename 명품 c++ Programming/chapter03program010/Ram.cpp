#include <iostream>
#include "ram.h"

Ram::Ram()
{
	// �迭�� 0���� �ʱ�ȭ
	//std::memset(this->mem, 0, 400);
}

Ram::~Ram()
{
	std::cout << "�޸� ���ŵ�" << std::endl;
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

char ���� unsigned char�� �ؾ� ���װ� �ȳ�.

*/