//Jeszcze kilkanaœcie lat temu wykrêcanie numeru telefonicznego by³o czynnoœci¹, 
//która niejedn¹ sekretarkê mog³a przyprawiæ o ból palców.Niewygodne tarcze na aparatach 
//i impulsowy wybór numerów powodowa³y, ¿e nawi¹zanie po³¹czenia trwa³o przesadnie d³ugo,
//zw³aszcza gdy linia by³a zajêta i przy ka¿dej próbie trzeba by³o wykrêcaæ ten sam numer.
//
//Dziœ sytuacja jest o niebo lepsza.Wybór numeru odbywa siê tonowo,
//a do dyspozycji mamy wygodne klawiatury.Jedn¹ z ich charakterystycznych 
//cech jest przyporz¹dkowanie ka¿dej cyfrze trzech lub czterech liter, tak jak w tabeli poni¿ej.
//Dziêki takiemu przyporz¹dkowaniu pewne numery ³atwiej jest zapamiêtaæ jako tekst.
//Dla przyk³adu numer 252625682 mo¿e byæ reprezentowany przez tekst ALAMAKOTA.
//Takie udogodnienie ma jednak pewn¹ wadê.Wszelkiego rodzaju formularze i inne dokumenty
//wymagaj¹ podania numeru w postaci cyfrowej, a to wymaga³oby doskona³ej pamiêci
//lub u¿ycia klawiatury telefonu.Napisz program, który bêdzie pomocny w takich sytuacjach,
//tzn.zamieni numer telefoniczny z postaci tekstowej na postaæ numeryczn¹.
//
//Wejœcie
//Dane podawane s¹ na standardowe wejœcie.W pierwszym wierszu podana jest 
//liczba N(1 <= N <= 20) zestawów danych.Dalej podawane s¹ zestawy danych zgodnie z poni¿szym opisem :
//
//Jeden zestaw danych
//W pierwszym i jedynym wierszu zestawu danych podany jest ci¹g wielkich liter alfabetu 
//³aciñskiego – tekstowa postaæ numeru telefonicznego.D³ugoœæ ci¹gu jest nie mniejsza
//ni¿ 4 i nie przekracza 20 znaków.
//
//Wyjœcie
//Wyniki programu powinny byæ wypisywane na standardowe wyjœcie.W kolejnych wierszach
//nale¿y podaæ odpowiedzi obliczone dla kolejnych zestawów danych.Wynikiem dla jednego 
//zestawu jest cyfrowa postaæ numeru telefonicznego podanego na wejœciu.


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