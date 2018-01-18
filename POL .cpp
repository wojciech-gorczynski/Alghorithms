//Dla podanego ci�gu d�ugo�ci 2 * k, wypisz na standardowe 
//wyj�cie dok�adnie pierwsz� po�ow� ci�gu.
//
//Wej�cie
//W pierwszej linijce wej�cia znajduje si� jedna liczba ca�kowita t(1 <= t <= 100).
//Ka�dy wiersz o numerze od 2 do t + 1, zawiera ci�g d�ugo�ci 2 * k(1 <= k <= 1000).
//
//Wyj�cie
//Dla ka�dego przypadku testowego na wyj�ciu powinien pojawi� si� 
//ci�g b�d�cy pierwsz� po�ow� wczytanego ci�gu.


#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string wyraz[n];

	for (int i = 0; i<n; i++)
	{
		cin >> wyraz[i];
	}
	for (int i = 0; i<n; i++)
	{
		wyraz[i] = wyraz[i].substr(0, (wyraz[i].length() / 2));
	}
	for (int i = 0; i<n; i++)
	{
		cout << wyraz[i] << endl;
	}
	return 0;
}