//Sprawd�, kt�re spo�r�d danych liczb s� liczbami pierwszymi
//
//Input
//n - liczba test�w n<100000, w kolejnych liniach n liczb z przedzia�u[1..10000]
//
//Output
//Dla ka�dej liczby s�owo TAK, je�li liczba ta jest pierwsza, s�owo: NIE, w przeciwnym wypadku.


#include<iostream>
using namespace std;

bool czy_pierwsza(int a)
{
	if (a<2)
		return false;

	for (int i = 2; i*i <= a; i++)
	if (a%i == 0)
		return false;
	return true;
}

int main()
{
	int a, n;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a;
		if (czy_pierwsza(a))
			cout << "TAK" << endl;
		else
			cout << "NIE" << endl;
	}
	return 0;
}