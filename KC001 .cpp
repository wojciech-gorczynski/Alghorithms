//Napisz program, kt�ry oblicza sum� trzech liczb ca�kowitych.
//
//Wej�cie
//Na wej�cie programu podane zostan� trzy liczby ca�kowite(nieprzekraczaj�ce 100)
//rozdzielone znakiem nowej linii.
//
//Wyj�cie
//Na wyj�ciu ma si� pojawi� suma liczb, kt�re pojawi�y si� na wej�ciu.

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	// cout<<"podaj a,b,c"<<endl;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	cin >> c;
	cout << endl;

	if (a <= 100 && b <= 100 && c <= 100)
		cout << a + b + c << endl;
	return 0;
}