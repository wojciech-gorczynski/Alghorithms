//Bajtockie Linie Lotnicze wzbogaci�y swoj� flot� o nowy model samolotu.W samolocie tym jest
//n1 rz�d�w miejsc siedz�cych w klasie biznesowej oraz n2 rz�d�w w klasie ekonomicznej.
//W klasie biznesowej ka�dy rz�d ma k1 miejsc siedz�cych, a w klasie ekonomicznej � k2 miejsc.
//
//Zadanie
//Napisz program, kt�ry:
//wczyta informacje na temat dost�pnych miejsc siedz�cych w samolocie,
//wyznaczy sumaryczn� liczb� wszystkich miejsc siedz�cych,
//wypisze wynik
//Wej�cie
//W pierwszym i jedynym wierszu wej�cia znajduj� si� cztery liczby naturalne 
//n1, k1, n2, i k2(1 <= n1, k1, n2, k2 <= 1000), pooddzielane pojedynczymi odst�pami.
//
//Wyj�cie
//Pierwszy i jedyny wiersz wyj�cia powinien zawiera� jedn� liczb� ca�kowit� - 
//liczb� miejsc siedz�cych w analizowanym samolocie.

#include <iostream>

using namespace std;

int main()
{
	unsigned short n1, n2, k1, k2;
	cin >> n1 >> n2 >> k1 >> k2;
	cout << (n1*n2) + (k1*k2) << endl;
	return 0;
}