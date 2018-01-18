//Twoim zadaniem jest dodaæ wszystkie liczby ca³kowite podane na wejœciu.
//
//Wejœcie
//W pierwszym wierszu znajduje siê liczba t testów(0 < t < 100) 
//Ka¿dy test opisany jest w nastêpuj¹cy sposób.
//W pierwszym wierszu dana jest liczba n - licza liczb do zsumowania.
//Nastêpnie podanych jest n liczb pooddzielanych spacj¹.


#include <iostream>
using namespace std;
int main()
{
	int t;
	int n;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int a = 0;
		cin >> n;
		int * tab = new int[n];
		for (int j = 0; j < n; ++j)
		{
			cin >> tab[j];
		}
		for (int k = 0; k<n; ++k)
		{
			a = tab[k] + a;
		}
		cout << a << endl;
		delete tab;
	}
	return 0;
}