/*
Piotru� w klasie na lekcji matematyki bardzo si� nudzi� i pani postanowi�a da� mu dodatkowe zadanie do rozwi�zania. Piotru� otrzyma� kartk�, na kt�rej napisane by�y ma�e liczby. Piotru� ma za zadanie stwierdzi�, czy dana liczba jest palindromem (tzn. czy czyta si� j� tak samo od lewej do prawej strony, jak od prawej do lewej). Je�eli nie, Piotru� powinien doda� do siebie warto�� liczby czytanej od lewej do prawej oraz warto�� liczby czytanej od prawej do lewej, sprawdzi�, czy suma jest palindromem, i je�eli nie -- kontynuowa� proces, a� otrzyma palindrom.

Przyk�adowo, maj�c dan� liczb� 28, Piotru� stwierdzi, �e nie jest ona palindromem i wykona dodawanie 28 + 82 = 110. Liczba 110 wci�� nie jest palindromem, zatem Piotru� wykona jeszcze dodawanie 110 + 011 = 110 + 11 = 121. Wynik tego dodawania jest ju� palindromem, wi�c obliczenia zostan� zako�czone.

Twoim zadaniem jest napisa� program, kt�ry dla ka�dej liczby rozwa�anej przez Piotrusia wypisze palindrom (wynik oblicze� Piotrusia), oraz liczb� dodawa� prowadz�cych do wyniku.

Wej�cie
Pierwsza linia wej�cia zawiera liczb� t (t <= 80), okre�laj�c� ile liczb znajduje si� na kartce Piotrusia. Ka�da z nast�pnych t linii zawiera dok�adnie jedn� liczb� naturaln� n (1 <= n <= 80), dla kt�rej Piotru� musi wykona� obliczenia.

Wyj�cie
Dla kolejnych liczb podanych na kartce wypisz po jednej linijce zawieraj�cej dwie liczby ca�kowite oddzielone spacj�. Pierwsza oznacza palindrom otrzymany przez Piotrusia, druga -- liczb� dodawa� wykonanych, by go otrzyma�.
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