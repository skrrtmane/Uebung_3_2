#include <iostream>

int main() {

	//Primzahlenrechner
	// Alle Zahlen müssel bei % 2 oder % 3 einen rest ergeben, damit von einer Primzahl zu reden ist.
	// Ausnahmen sind Die Zahlen 1, 2, 3, welche automatisch Primzahlen sind.

	//Erstmal die Eingabe:

	std::cout << "Wie lautet Die Zahl, welche du ueberpruefen moechtest?\n";
	
	//Festlegung der Primzahl

	int primenr;

	//Prüfzahl festlegen :)
	int pruef = 0;

	//Eingabe der Primzahl

	std::cin >> primenr;


	//Jetzt überprüfen wir ob wir als Eingabe 1, 2, oder 3 haben.

	if (primenr <= 3) {
		std::cout << "Deine Zahl ist eine Primzahl!\n";
			return 0;
	}

	//Jetzt überprüfen wir die Eingabe auf den modulo bei 2 oder 3.

	if (0 != primenr % 2) {
		pruef  += 1;
	}

	if (0 != primenr % 3) {
		pruef += 1;
}

	//Jetzt schauen wir ob unsere zwei Vorraussetzungen erfüllt werden:

	if (pruef == 2) {
		std::cout << "Bei deiner Zahl handelt es sich um eine Primzahl!";
	}

	if (pruef != 2) {
		std::cout << "Bei deiner Zahl handelt es sich nicht um eine Primzahl";
	}
	return 0;
}

