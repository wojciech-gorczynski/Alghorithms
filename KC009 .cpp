//Napisz program, kt�ry zapisuje wspak podane na wej�ciu wyrazy.
//
//Wej�cie
//Na wej�cie programu podana zostanie pewna nieokre�lona ilo�� wyraz�w,
//tj.ci�g�w znak�w zbudowanych z ma�ych liter.
//Poszczeg�lne wyrazy zostan� rozdzielone znakiem nowej linii.
//Przyjmujemy, �e d�ugo�� wyraz�w nie przekracza 1000 znak�w.
//
//Wyj�cie
//Na wyj�ciu maj� si� pojawi� te same wyrazy, kt�re pojawi�y si� na wej�ciu,
//ale zapisane wspak.Poszczeg�lne wyrazy nale�y rozdzieli� znakiem nowej linii.

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