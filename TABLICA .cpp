//Napisz program, kt�ry wczytuje z wej�cia ci�g liczb i wypisuje go w odwr�conej kolejno�ci.
//
//Wej�cie
//Na wej�cie programu podana zostanie pewna nieokre�lona, ale niewielka ilo�� liczb
//ca�kowitych rozdzielonych spacjami.
//
//Wyj�cie
//Na wyj�ciu ma si� pojawi� ci�g liczbowy, kt�rego i - ta pozycja jest r�wna(n + 1 - i) 
//- tej liczbie wczytanej 
//z wej�cia, gdzie n to ilo�� wczytanych liczb.Poszczeg�lne liczby nale�y rozdzieli� spacjami.

#include <iostream>
using namespace std;

int main()
{
	int tab[100], a, n = 0;
	while (cin >> a)
	{
		tab[n++] = a;
	}
	for (int k = n - 1; k >= 0; k--)
	{
		cout << tab[k] << " ";
	}
	return 0;
}