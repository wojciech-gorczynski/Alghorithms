//Napisz funkcj� :
//
//int nwd(int a, int b);
//kt�ra oblicza najwi�kszy wsp�lny dzielnik liczb a i b,
//
//0 <= a, b <= 1000000
//Input
//
//
//W pierwszej linii liczba test�w t, w kolejnych liniach po dwie liczby w ka�dym wierszu.
//
//Output
//W ka�dej linii jedna liczba - wynik dzia�ania funkcji nwd

#include <iostream>
using namespace std;

int nwd(int a, int b)
{
	int c;
	while (b)
	{
		c = b;
		b = a%b;
		a = c;
	}
	return a;
}
int main()
{
	int t;
	cin >> t;
	int a, b;
	for (int i = 0; i < t; ++i)
	{
		cin >> a;
		cin >> b;
		cout << nwd(a, b) << endl;
	}
	return 0;
}