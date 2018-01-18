//Napisz program, który zapisuje wspak podane na wejœciu wyrazy.
//
//Wejœcie
//Na wejœcie programu podana zostanie pewna nieokreœlona iloœæ wyrazów,
//tj.ci¹gów znaków zbudowanych z ma³ych liter.
//Poszczególne wyrazy zostan¹ rozdzielone znakiem nowej linii.
//Przyjmujemy, ¿e d³ugoœæ wyrazów nie przekracza 1000 znaków.
//
//Wyjœcie
//Na wyjœciu maj¹ siê pojawiæ te same wyrazy, które pojawi³y siê na wejœciu,
//ale zapisane wspak.Poszczególne wyrazy nale¿y rozdzieliæ znakiem nowej linii.

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string wyraz;
	while (getline(cin, wyraz))
	{
		for (int i = wyraz.length() - 1; i >= 0; --i)
		{
			cout << wyraz[i];
		}
		cout << endl;
	}
	return 0;
}