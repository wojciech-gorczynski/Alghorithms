//Napisz program, kt�ry dzia�a jak prosty kalkulator obs�uguj�cy pi�� operacji :
//dodawanie, odejmowanie, mno�enie, dzielenie i obliczanie reszty z dzielenia liczb ca�kowitych.
//
//Wej�cie
//Na wej�cie programu podana zostanie pewna nieokre�lona liczba zestaw�w danych.
//Zestawy sk�adaj� si� z jednoznakowego symbolu operacji do wykonania
//(+dodawanie, -odejmowanie, *mno�enie, / dzielenie ca�kowitoliczbowe, % reszta z dzielenia) 
//oraz nast�puj�cych po nim dw�ch liczb ca�kowitych.Poszczeg�lne sk�adowe zestawu zostan� rozdzielone spacjami,
//a same zestawy znakiem nowej linii.Liczba test�w nie przekracza 100, wynik zawiera si� w typie int32.
//
//Wyj�cie
//Na wyj�ciu programu ma si� pojawi� ci�g liczb b�d�cych rezultatem wykonania
//pojawiaj�cych si� na wej�ciu polece�.
//Poszczeg�lne liczby nale�y rozdzieli� znakami nowej linii.
//Uwaga!Mo�na za�o�y�, �e dane wej�ciowe nie zawieraj� polecenia dzielenia przez 0.

#include <iostream>
using namespace std;
int main()
{
	char t;
	static int licz = 0;
	int a, b;//liczby
	while (cin >> t >> a >> b)
	{
		if (t == '+')
			cout << a + b << endl;
		else if (t == '-')
			cout << a - b << endl;
		else if (t == '*')
			cout << a*b << endl;
		else if (t == '/')
			cout << a / b << endl;
		else if (t == '%')
			cout << a%b << endl;
	}
	return 0;
}