//Jeszcze kilkana�cie lat temu wykr�canie numeru telefonicznego by�o czynno�ci�, 
//kt�ra niejedn� sekretark� mog�a przyprawi� o b�l palc�w.Niewygodne tarcze na aparatach 
//i impulsowy wyb�r numer�w powodowa�y, �e nawi�zanie po��czenia trwa�o przesadnie d�ugo,
//zw�aszcza gdy linia by�a zaj�ta i przy ka�dej pr�bie trzeba by�o wykr�ca� ten sam numer.
//
//Dzi� sytuacja jest o niebo lepsza.Wyb�r numeru odbywa si� tonowo,
//a do dyspozycji mamy wygodne klawiatury.Jedn� z ich charakterystycznych 
//cech jest przyporz�dkowanie ka�dej cyfrze trzech lub czterech liter, tak jak w tabeli poni�ej.
//Dzi�ki takiemu przyporz�dkowaniu pewne numery �atwiej jest zapami�ta� jako tekst.
//Dla przyk�adu numer 252625682 mo�e by� reprezentowany przez tekst ALAMAKOTA.
//Takie udogodnienie ma jednak pewn� wad�.Wszelkiego rodzaju formularze i inne dokumenty
//wymagaj� podania numeru w postaci cyfrowej, a to wymaga�oby doskona�ej pami�ci
//lub u�ycia klawiatury telefonu.Napisz program, kt�ry b�dzie pomocny w takich sytuacjach,
//tzn.zamieni numer telefoniczny z postaci tekstowej na posta� numeryczn�.
//
//Wej�cie
//Dane podawane s� na standardowe wej�cie.W pierwszym wierszu podana jest 
//liczba N(1 <= N <= 20) zestaw�w danych.Dalej podawane s� zestawy danych zgodnie z poni�szym opisem :
//
//Jeden zestaw danych
//W pierwszym i jedynym wierszu zestawu danych podany jest ci�g wielkich liter alfabetu 
//�aci�skiego � tekstowa posta� numeru telefonicznego.D�ugo�� ci�gu jest nie mniejsza
//ni� 4 i nie przekracza 20 znak�w.
//
//Wyj�cie
//Wyniki programu powinny by� wypisywane na standardowe wyj�cie.W kolejnych wierszach
//nale�y poda� odpowiedzi obliczone dla kolejnych zestaw�w danych.Wynikiem dla jednego 
//zestawu jest cyfrowa posta� numeru telefonicznego podanego na wej�ciu.


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string wyraz;
	int n;
	cin >> n;
	if (n >= 1 && n <= 20)
	{
		while (n--)
		{
			cin >> wyraz;
			{
				for (int i = 0; i<wyraz.length(); i++)
				{
					if (wyraz.length() >= 4 && wyraz.length() <= 20)
					{
						if ((wyraz[i] == 'A') || (wyraz[i] == 'B') || (wyraz[i] == 'C'))
							cout << '2';
						else if ((wyraz[i] == 'D') || (wyraz[i] == 'E') || (wyraz[i] == 'F'))
							cout << '3';
						else if ((wyraz[i] == 'G') || (wyraz[i] == 'H') || (wyraz[i] == 'I'))
							cout << '4';
						else if ((wyraz[i] == 'J') || (wyraz[i] == 'K') || (wyraz[i] == 'L'))
							cout << '5';
						else if ((wyraz[i] == 'M') || (wyraz[i] == 'N') || (wyraz[i] == 'O'))
							cout << '6';
						else if ((wyraz[i] == 'P') || (wyraz[i] == 'Q') || (wyraz[i] == 'R') || (wyraz[i] == 'S'))
							cout << '7';
						else if ((wyraz[i] == 'T') || (wyraz[i] == 'U') || (wyraz[i] == 'V'))
							cout << '8';
						else if ((wyraz[i] == 'W') || (wyraz[i] == 'X') || (wyraz[i] == 'Y') || (wyraz[i] == 'Z'))
							cout << '9';
						else
							break;
					}
					else break;
				}
				cout << endl;
			}
		}
	}
	return 0;
}