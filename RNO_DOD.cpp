//Twoim zadaniem jest doda� wszystkie liczby ca�kowite podane na wej�ciu.
//
//Wej�cie
//W pierwszym wierszu znajduje si� liczba t test�w(0 < t < 100) 
//Ka�dy test opisany jest w nast�puj�cy spos�b.
//W pierwszym wierszu dana jest liczba n - licza liczb do zsumowania.
//Nast�pnie podanych jest n liczb pooddzielanych spacj�.


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