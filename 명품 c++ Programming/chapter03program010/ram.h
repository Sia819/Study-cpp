#pragma once

class Ram
{
	char mem[400] = {0}; // 100KB �޸�. �� ������ 1byte�̹Ƿ� charŸ�� ���.
	int size;
public:
	Ram(); // mem �迭�� 0���� �ʱ�ȭ�ϰ� size�� 100*1024�� �ʱ�ȭ
	~Ram(); // "�޸� ���ŵ�" ���ڿ� ���
	char read(int address); // address �ּ��� �޸� ����Ʈ ����
	void write(int address, unsigned char value);
};

/*

char ���� unsigned char�� �ؾ� ���װ� �ȳ�.

*/