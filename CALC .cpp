//Napisz program, który dzia³a jak prosty kalkulator obs³uguj¹cy piêæ operacji :
//dodawanie, odejmowanie, mno¿enie, dzielenie i obliczanie reszty z dzielenia liczb ca³kowitych.
//
//Wejœcie
//Na wejœcie programu podana zostanie pewna nieokreœlona liczba zestawów danych.
//Zestawy sk³adaj¹ siê z jednoznakowego symbolu operacji do wykonania
//(+dodawanie, -odejmowanie, *mno¿enie, / dzielenie ca³kowitoliczbowe, % reszta z dzielenia) 
//oraz nastêpuj¹cych po nim dwóch liczb ca³kowitych.Poszczególne sk³adowe zestawu zostan¹ rozdzielone spacjami,
//a same zestawy znakiem nowej linii.Liczba testów nie przekracza 100, wynik zawiera siê w typie int32.
//
//Wyjœcie
//Na wyjœciu programu ma siê pojawiæ ci¹g liczb bêd¹cych rezultatem wykonania
//pojawiaj¹cych siê na wejœciu poleceñ.
//Poszczególne liczby nale¿y rozdzieliæ znakami nowej linii.
//Uwaga!Mo¿na za³o¿yæ, ¿e dane wejœciowe nie zawieraj¹ polecenia dzielenia przez 0.

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