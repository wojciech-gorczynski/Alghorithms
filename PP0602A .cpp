//Wczytaj ci�g liczb.Nast�pnie wypisz wczytane liczby w taki spos�b,
//aby najpierw pojawi�y si� te, kt�re wyst�pi�y na pozycjach parzystych,
//a nast�pnie te, kt�re wyst�pi�y na pozycjach nieparzystych; 
//z zachowaniem pierwotnej kolejno�ci w obr�bie obu grup.Numerujemy od 1.
//
//Wej�cie
//Najpierw t - liczba test�w.Nast�pnie dla ka�dego testu liczba n i n liczb, n <= 100.
//
//Wyj�cie
//Dla ka�dego testu n liczb w opisanym porz�dku.

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