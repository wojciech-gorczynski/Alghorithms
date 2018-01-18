//Dla podanego ci¹gu d³ugoœci 2 * k, wypisz na standardowe 
//wyjœcie dok³adnie pierwsz¹ po³owê ci¹gu.
//
//Wejœcie
//W pierwszej linijce wejœcia znajduje siê jedna liczba ca³kowita t(1 <= t <= 100).
//Ka¿dy wiersz o numerze od 2 do t + 1, zawiera ci¹g d³ugoœci 2 * k(1 <= k <= 1000).
//
//Wyjœcie
//Dla ka¿dego przypadku testowego na wyjœciu powinien pojawiæ siê 
//ci¹g bêd¹cy pierwsz¹ po³ow¹ wczytanego ci¹gu.


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