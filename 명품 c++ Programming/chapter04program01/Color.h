#pragma once
#include <iostream>

using namespace std;

class Color
{
private:
	int red;
	int green;
	int blue;
public:
	Color()
	{
		red = green = blue = 0;
	}

	Color(int r, int g, int b)
	{
		red = r; 
		green = g; 
		blue = b;
	}
	
	void setColor(int r, int g, int b)
	{
		red = r;
		green = g;
		blue = b;
	}

	void show()
	{
		cout << red << ' ' << green << ' ' << blue << endl;
	}
};