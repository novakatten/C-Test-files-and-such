// CPPTESTS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string dothing (string a)
{
	string b;
	b = b + a;
	std::cout << b;
	return b;
}
int main()
{
	std::cout << "ENTER: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << v1 + v2 << std::endl;
	int v3 = v1 * v2;
	std::cout << v3 << std::endl;
	while (v3 <= 10)
	{
		v3++;
		std::cout << v3 << std::endl;
		string c = dothing("bees");
		std::cout << c;
	}
	system("pause");
}

