//M�ody Harry zosta� poproszony o kupienie karmy dla kot�w przez swoj� s�siadk� - star�,
//dziwn� pani�, kt�ra by�a w�a�cicielk� wielu kot�w.Ale koty te� by�y dziwne i jada�y tylko p�czki.
//Tote� s�siadka chcia�a aby Harry przyni�s� jej dok�adnie po jednym p�czku dla ka�dego kota -
//a posiada�a ich c.Harry mia� ze sob� plecak, ale �e by� tylko ma�ym ch�opcem,
//potrafi� ud�wign�� jedynie k kilogram�w.
//Harry wiedzia�, �e ka�dy p�czek wa�y w kilogram�w(du�e koty, du�e p�czki).
//Pom� Harremu zdecydowa� czy powinien i�� do supermarketu i kupi� �arcie,
//czy si� po prostu podda� i pomarzy� o odrobinie magii...
//
//Wej�cie
//W pierwszej linii jedna dodatnia liczba ca�kowita t(t <= 100)
//oznaczaj�ca ilo�� test�w(Harry zosta� poproszony o kupno p�czk�w kilka razy).
//Nast�pnie t linii, ka�da zawieraj�ca 3 liczby: c, k oraz w(1 <= c, k, w <= 100)
//
//t[liczba test�w]
//c k w[liczba kot�w, ud�wig Harrego oraz waga p�czka]
//c k w[nast�pny test]
//...
//
//Wyj�cie
//t linii zawieraj�cych s�owo "yes" je�li Harry jest w stanie wykona� zadanie 
//lub "no" je�li p�czki z�ama�yby Harremu kr�gos�up.

#include <iostream>
using namespace std;
int main()
{
	unsigned short t, c, k, w;
	cin >> t;
	for (int i = 0; i<t; i++)
	{
		cin >> c;
		cin >> k;
		cin >> w;
		if (k >= c*w)
		{
			cout << "yes" << endl;
		}
		else
			cout << "no" << endl;


	}
	return 0;
}
