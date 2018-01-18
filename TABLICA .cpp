//Napisz program, który wczytuje z wejœcia ci¹g liczb i wypisuje go w odwróconej kolejnoœci.
//
//Wejœcie
//Na wejœcie programu podana zostanie pewna nieokreœlona, ale niewielka iloœæ liczb
//ca³kowitych rozdzielonych spacjami.
//
//Wyjœcie
//Na wyjœciu ma siê pojawiæ ci¹g liczbowy, którego i - ta pozycja jest równa(n + 1 - i) 
//- tej liczbie wczytanej 
//z wejœcia, gdzie n to iloœæ wczytanych liczb.Poszczególne liczby nale¿y rozdzieliæ spacjami.

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