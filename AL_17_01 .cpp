/*
Twoim zadaniem jest napisa� program, kt�ry wypisze na standardowe wyj�cie: Mundial 2014

Zadanie wydaje si� bardzo �atwe, i takie jest. Jedyna niedogodno��, to zakaz u�ywania cyfr [0-9] w kodzie �r�d�owym.

*/

#include <iostream>

int main()
{
	char a = '""';
	char b = '=';
	char c = '<';
	std::cout << "Mundial " << ((int)a*(int)b) - (int)c << std::endl;
}