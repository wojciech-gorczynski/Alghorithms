//Napisz program, który oblicza sumê trzech liczb ca³kowitych.
//
//Wejœcie
//Na wejœcie programu podane zostan¹ trzy liczby ca³kowite(nieprzekraczaj¹ce 100)
//rozdzielone znakiem nowej linii.
//
//Wyjœcie
//Na wyjœciu ma siê pojawiæ suma liczb, które pojawi³y siê na wejœciu.

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