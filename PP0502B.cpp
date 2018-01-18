//Odwróć kolejność elementów w tablicy.
//
//Wejście
//Najpierw liczba testów t(t ≤ 100).Następnie dla każdego testu liczba n(n ≤ 100) i n liczb oddzielonych spacjami.
//
//Wyjście
//Dla każdego testu n liczb w porządku odwrotnym niż na wejściu.

#include <iostream>
using namespace std;

int main()
{

	int t, n;
	cin >> t;

	for (int i = 0; i<t; i++)
	{
		cin >> n;
		int *tab = new int[n];
		for (int j = 0; j<n; j++)
		{
			cin >> tab[j];
		}
		for (int k = n - 1; k>-1; k--)
		{
			cout << tab[k] << " ";
		}

		delete[] tab;
		tab = NULL;

	}

	return 0;
}