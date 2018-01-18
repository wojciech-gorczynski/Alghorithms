/*
Tre��
W ostatnim czasie przedszkole opanowa�a nietypowa epidemia. Nie dotkn�a ona przedszkolak�w, tylko panie opiekuj�ce si� dzie�mi. Po�r�d nielicznych zdrowych pozosta�a, ulubiona przez wszystkie maluchy, pani Agnieszka. Postanowi�a os�odzi� podopiecznym nieobecno�� wychowawczy� i rozda� im troch� cukierk�w. Przedszkolanka wie, �e nast�pnego dnia b�dzie si� zajmowa�a jedn� z dw�ch grup. Zna te� liczb� dzieci w ka�dej z nich. Chce teraz dobra� tak� liczb� s�odyczy, by mo�na ni� by�o obdarowa� wszystkie dzieci, niezale�nie od grupy, kt�r� b�dzie prowadzi�a. Musi przy tym spe�ni� kilka warunk�w. Po pierwsze, ka�dy z przedszkolak�w powinien otrzyma� jednakow� (oczywi�cie niezerow�) liczb� cukierk�w. Po drugie, liczba s�odyczy powinna by� taka, by mo�na by�o rozda� je wszystkie. Po trzecie, poniewa� bud�et przedszkola jest ograniczony, pani Agnieszka musi kupi� minimaln� liczb� cukierk�w spe�niaj�c� dwa wcze�niejsze warunki. Pom� sympatycznej przedszkolance i napisz program, kt�ry obliczy, ile cukierk�w powinna kupi�.


Wej�cie
Dane podawane s� na standardowe wej�cie. W pierwszym wierszu podana jest liczba N (1<=N<=20) zestaw�w danych. Dalej podawane s� zestawy danych zgodnie z poni�szym opisem:

Jeden zestaw danych
W pierwszym i jedynym wierszu zestawu danych znajduj� si� dwie liczby ca�kowite a i b (10<=a,b<=30), oddzielone pojedyncz� spacj�, oznaczaj�ce odpowiednio liczb� przedszkolak�w w grupach, z kt�rych jedna zostanie przydzielona pani Agnieszce.

Wyj�cie
Wyniki programu powinny by� wypisywane na standardowe wyj�cie. W kolejnych wierszach nale�y poda� odpowiedzi obliczone dla kolejnych zestaw�w danych. Wynikiem dla jednego zestawu jest liczba cukierk�w, jak� powinna zakupi� przedszkolanka.
*/

#include <iostream>

int check(int number)
{
	int _number;
	if (number > 9 && number < 31)
		return number;
	else
	{
		do
		{
			std::cin >> _number;
		} while (!(_number > 9 && _number < 31));
		return _number;
	}
};

int checkNum(int _n)
{
	int num;
	if (_n < 21 && _n>0)
		return _n;
	else
	{
		do
		{
			std::cin >> num;
		} while (!(num>0 && num < 21));
		return num;
	}
}

int main()
{
	int n = 0;
	int col = 2;
	int tym = 0;
	int tym2 = 0;
	int NWD1 = 0;
	int NWD2 = 0;
	int NWDt = 0;
	int result = 0;
	std::cin >> tym2;
	n = checkNum(tym2);
	int *iloczyn = new int[n];
	int ** tab = new int*[n];
	for (int i = 0; i < n; i++)
	{
		tab[i] = new int[col];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cin >> tym;
			tab[i][j] = check(tym);
		}
	}
	for (int i = 0; i < n; i++)
	{
		NWD1 = tab[i][0];
		NWD2 = tab[i][1];
		result = NWD1*NWD2;
		while (NWD2)
		{

			NWDt = NWD2;
			NWD2 = NWD1%NWD2;
			NWD1 = NWDt;
		}
		iloczyn[i] = result / NWD1;
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << iloczyn[i] << std::endl;
	}
	for (int i(0); i < n; i++)
	{
		delete[] tab[i];
	}
	delete[] tab;
	delete[] iloczyn;
	tab = NULL;
	iloczyn = NULL;
	return 0;
}

