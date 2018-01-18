//Przesuń elementy tablicy cyklicznie w lewo.
//
//Wejście
//Najpierw liczba testów t(t ≤ 100).Następnie dla każdego testu liczba n(1 < n ≤ 100) i n liczb.
//
//Wyjście
//Dla każdego testu n liczb w zmienionym porządku.

#include <iostream>
using namespace std;

int main()
{
	int t, i;
	static int n;
	int tab[100];
	cin >> t;
	for (i = 0; i < t; ++i)
	{
		cin >> n;
		for (int j = 0; j < n; ++j)
		{
			cin >> tab[j];
		}
		tab[n] = tab[0];
		for (int k = 1; k <= n; ++k)
		{
			cout << tab[k] << " ";
		}
	}
	return 0;
}