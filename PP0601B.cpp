//Wypisz wszystkie liczby ai podzielne przez x i niepodzielne przez y, gdzie 1 < ai < n < 100000.
//
//Wej�cie
//Najpierw w oddzielnej linii t liczba przypadk�w testowych
//nast�pnie w kolejnych t liniach liczby n x y.
//
//Wyj�cie
//W kolejnych t liniach oddzielone pojedynczym odst�pem liczby spe�niaj�ce 
//warunki zadania wypisane od najmniejszej do najwi�kszej.

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