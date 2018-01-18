//Napisz program, kt�ry sprawdza, ile razy dana liczba ca�kowita wyst�pi�a w danym ci�gu.
//
//Wej�cie
//Na wej�cie programu podana zostanie pewna nieokre�lona liczba zestaw�w danych.
//Ka�dy z zestaw�w sk�ada si� z trzech rozdzielonych spacjami cz�ci :
//poszukiwanej liczby ca�kowitej, d�ugo�ci przeszukiwanego ci�gu oraz samego ci�gu.
//Poszczeg�lne liczby w ci�gu zosta�y rozdzielone spacjami;
//zestawy odseparowano od siebie znakiem nowej linii.
//
//Wyj�cie
//Na wyj�ciu ma si� pojawi� ci�g liczbowy, 
//kt�rego i - ty wyraz jest r�wny ilo�ci wyst�pie� liczby podanej w pierwszej
//cz�ci i - tego wczytanego z wej�cia zestawu w ci�gu stanowi�cym trzeci� cz�� tego zestawu.
//Poszczeg�lne elementy tego ci�gu nale�y rozdzieli� znakiem nowej linii.

#include <iostream>
using namespace std;

int main()
{

	int n, a, b;
	while (cin >> n)
	{
		int c = 0;
		cin >> a;
		int * tab = new int[a];
		for (int i = 0; i<a; i++)
		{
			cin >> tab[i];
		}
		for (int i = 0; i<a; i++)
		{

			if (tab[i] == n)
				c++;
		}
		cout << endl;
		cout << c;
		cout << endl;

		delete[] tab;
		tab = NULL;

	}
	return 0;
}