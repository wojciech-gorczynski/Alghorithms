//Wypisz wszystkie liczby ai podzielne przez x i niepodzielne przez y, gdzie 1 < ai < n < 100000.
//
//Wejœcie
//Najpierw w oddzielnej linii t liczba przypadków testowych
//nastêpnie w kolejnych t liniach liczby n x y.
//
//Wyjœcie
//W kolejnych t liniach oddzielone pojedynczym odstêpem liczby spe³niaj¹ce 
//warunki zadania wypisane od najmniejszej do najwiêkszej.

#include <iostream>
using namespace std;

int main()
{
	int t, n, x, y;
	cin >> t;
	for (int i = 0; i<t; i++)
	{
		cin >> n >> x >> y;
		for (int j = 0; j<n; j++)
		{
			if (j%x == 0 && j%y != 0)
			{
				cout << j << " ";
			}
		}
		cout << endl;
	}

	return 0;
}