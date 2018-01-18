/*
Piotruœ w klasie na lekcji matematyki bardzo siê nudzi³ i pani postanowi³a daæ mu dodatkowe zadanie do rozwi¹zania. Piotruœ otrzyma³ kartkê, na której napisane by³y ma³e liczby. Piotruœ ma za zadanie stwierdziæ, czy dana liczba jest palindromem (tzn. czy czyta siê j¹ tak samo od lewej do prawej strony, jak od prawej do lewej). Je¿eli nie, Piotruœ powinien dodaæ do siebie wartoœæ liczby czytanej od lewej do prawej oraz wartoœæ liczby czytanej od prawej do lewej, sprawdziæ, czy suma jest palindromem, i je¿eli nie -- kontynuowaæ proces, a¿ otrzyma palindrom.

Przyk³adowo, maj¹c dan¹ liczbê 28, Piotruœ stwierdzi, ¿e nie jest ona palindromem i wykona dodawanie 28 + 82 = 110. Liczba 110 wci¹¿ nie jest palindromem, zatem Piotruœ wykona jeszcze dodawanie 110 + 011 = 110 + 11 = 121. Wynik tego dodawania jest ju¿ palindromem, wiêc obliczenia zostan¹ zakoñczone.

Twoim zadaniem jest napisaæ program, który dla ka¿dej liczby rozwa¿anej przez Piotrusia wypisze palindrom (wynik obliczeñ Piotrusia), oraz liczbê dodawañ prowadz¹cych do wyniku.

Wejœcie
Pierwsza linia wejœcia zawiera liczbê t (t <= 80), okreœlaj¹c¹ ile liczb znajduje siê na kartce Piotrusia. Ka¿da z nastêpnych t linii zawiera dok³adnie jedn¹ liczbê naturaln¹ n (1 <= n <= 80), dla której Piotruœ musi wykonaæ obliczenia.

Wyjœcie
Dla kolejnych liczb podanych na kartce wypisz po jednej linijce zawieraj¹cej dwie liczby ca³kowite oddzielone spacj¹. Pierwsza oznacza palindrom otrzymany przez Piotrusia, druga -- liczbê dodawañ wykonanych, by go otrzymaæ.
*/

#include <iostream>
#include <string>
#include <algorithm>
int main()
{
	int n;
	int sTio;
	int sTit;
	int counter;
	int inLoop;
	std::cin >> n;
	std::string *real = new std::string[n];
	std::string *copy = new std::string[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> real[i];
	}

	for (int i = 0; i < n; i++)
	{
		counter = 0;
		sTio = std::stoi(real[i]);
		std::reverse(real[i].begin(), real[i].end());
		copy[i] = real[i];
		sTit = std::stoi(copy[i]);
		while (sTit != sTio)
		{
			inLoop = sTit + sTio;
			real[i] = std::to_string(inLoop);
			sTio = std::stoi(real[i]);
			std::reverse(real[i].begin(), real[i].end());
			copy[i] = real[i];
			sTit = std::stoi(copy[i]);
			counter++;
		}
		std::cout << sTit << " " << counter << std::endl;
	}
	delete[] real;
	delete[] copy;
	return 0;
}