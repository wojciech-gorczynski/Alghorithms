//Wczytaj ci¹g liczb.Nastêpnie wypisz wczytane liczby w taki sposób,
//aby najpierw pojawi³y siê te, które wyst¹pi³y na pozycjach parzystych,
//a nastêpnie te, które wyst¹pi³y na pozycjach nieparzystych; 
//z zachowaniem pierwotnej kolejnoœci w obrêbie obu grup.Numerujemy od 1.
//
//Wejœcie
//Najpierw t - liczba testów.Nastêpnie dla ka¿dego testu liczba n i n liczb, n <= 100.
//
//Wyjœcie
//Dla ka¿dego testu n liczb w opisanym porz¹dku.

#include <iostream>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	int tab[101];
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 1; j <= n; j++)
		{
			cin >> tab[j];
		}
		for (int i = 2; i <= n; i += 2)
			cout << tab[i] << " ";
		for (int i = 1; i <= n; i += 2)
			cout << tab[i] << " ";
		cout << endl;
	}
	return 0;
}