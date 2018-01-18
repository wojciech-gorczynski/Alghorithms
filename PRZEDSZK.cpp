/*
Treœæ
W ostatnim czasie przedszkole opanowa³a nietypowa epidemia. Nie dotknê³a ona przedszkolaków, tylko panie opiekuj¹ce siê dzieæmi. Poœród nielicznych zdrowych pozosta³a, ulubiona przez wszystkie maluchy, pani Agnieszka. Postanowi³a os³odziæ podopiecznym nieobecnoœæ wychowawczyñ i rozdaæ im trochê cukierków. Przedszkolanka wie, ¿e nastêpnego dnia bêdzie siê zajmowa³a jedn¹ z dwóch grup. Zna te¿ liczbê dzieci w ka¿dej z nich. Chce teraz dobraæ tak¹ liczbê s³odyczy, by mo¿na ni¹ by³o obdarowaæ wszystkie dzieci, niezale¿nie od grupy, któr¹ bêdzie prowadzi³a. Musi przy tym spe³niæ kilka warunków. Po pierwsze, ka¿dy z przedszkolaków powinien otrzymaæ jednakow¹ (oczywiœcie niezerow¹) liczbê cukierków. Po drugie, liczba s³odyczy powinna byæ taka, by mo¿na by³o rozdaæ je wszystkie. Po trzecie, poniewa¿ bud¿et przedszkola jest ograniczony, pani Agnieszka musi kupiæ minimaln¹ liczbê cukierków spe³niaj¹c¹ dwa wczeœniejsze warunki. Pomó¿ sympatycznej przedszkolance i napisz program, który obliczy, ile cukierków powinna kupiæ.


Wejœcie
Dane podawane s¹ na standardowe wejœcie. W pierwszym wierszu podana jest liczba N (1<=N<=20) zestawów danych. Dalej podawane s¹ zestawy danych zgodnie z poni¿szym opisem:

Jeden zestaw danych
W pierwszym i jedynym wierszu zestawu danych znajduj¹ siê dwie liczby ca³kowite a i b (10<=a,b<=30), oddzielone pojedyncz¹ spacj¹, oznaczaj¹ce odpowiednio liczbê przedszkolaków w grupach, z których jedna zostanie przydzielona pani Agnieszce.

Wyjœcie
Wyniki programu powinny byæ wypisywane na standardowe wyjœcie. W kolejnych wierszach nale¿y podaæ odpowiedzi obliczone dla kolejnych zestawów danych. Wynikiem dla jednego zestawu jest liczba cukierków, jak¹ powinna zakupiæ przedszkolanka.
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

