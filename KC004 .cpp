//Napisz program, który sprawdza, ile razy dana liczba ca³kowita wyst¹pi³a w danym ci¹gu.
//
//Wejœcie
//Na wejœcie programu podana zostanie pewna nieokreœlona liczba zestawów danych.
//Ka¿dy z zestawów sk³ada siê z trzech rozdzielonych spacjami czêœci :
//poszukiwanej liczby ca³kowitej, d³ugoœci przeszukiwanego ci¹gu oraz samego ci¹gu.
//Poszczególne liczby w ci¹gu zosta³y rozdzielone spacjami;
//zestawy odseparowano od siebie znakiem nowej linii.
//
//Wyjœcie
//Na wyjœciu ma siê pojawiæ ci¹g liczbowy, 
//którego i - ty wyraz jest równy iloœci wyst¹pieñ liczby podanej w pierwszej
//czêœci i - tego wczytanego z wejœcia zestawu w ci¹gu stanowi¹cym trzeci¹ czêœæ tego zestawu.
//Poszczególne elementy tego ci¹gu nale¿y rozdzieliæ znakiem nowej linii.

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