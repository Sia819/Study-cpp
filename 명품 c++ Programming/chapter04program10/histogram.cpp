#include <iostream>
#include "histogram.h"

using namespace std;

Histogram::Histogram(std::string str)
{
	this->str.append(str + "\n");
}

void Histogram::put(std::string str)
{
	this->str.append(str);
}

void Histogram::putc(char c)
{
	this->str.append(1, c);
}

void Histogram::print()
{
	cout << str << endl << endl;

	int count = 0;
	int alpaCount[26] = { 0 };
	for (int i = 0; i < str.size(); i++)
	{

		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = (str[i] - 'A') + 'a';
		}
		
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			alpaCount[str[i] - 'a']++;
			count++;
		}
	}

	

	cout << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl << endl;
	
	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " (" << alpaCount[i] << ")    : ";
		for (int j = 0; j < alpaCount[i]; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
}