/*
Twoim zadaniem jest napisaæ program, który wypisze na standardowe wyjœcie: Mundial 2014

Zadanie wydaje siê bardzo ³atwe, i takie jest. Jedyna niedogodnoœæ, to zakaz u¿ywania cyfr [0-9] w kodzie Ÿród³owym.

*/

#include <iostream>

int main()
{
	char a = '""';
	char b = '=';
	char c = '<';
	std::cout << "Mundial " << ((int)a*(int)b) - (int)c << std::endl;
}