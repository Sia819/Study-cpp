#pragma once
#include <string>

class Histogram
{
private:
	std::string str;
public:
	Histogram(std::string str);
	void put(std::string str);
	void putc(char c);
	void print();
};