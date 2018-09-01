#include <iostream>
#include <string>
#include "GrundlagenAnalysis_PROT.hpp"
#include "Allgemein_PROT.hpp"

/*
General Remarks
----------------

*/

std::string controller;

int main() {

	GrundlagenAnalysis a;
	Allgemein b;

	b.startMenue();

	while (controller != "exit") {

		std::cin >> controller;

		if (controller == "Potenzen" || controller == "potenzen" || controller == "pot") {
			a.potenzen();
		}

		else if (controller == "Start" || controller == "start" || controller == "Startmenue" || controller == "startmenue") {
			b.startMenue();
		}

		else if (controller == "Wurzeln" || controller == "wurzeln" || controller == "wut") {
			a.wurzeln();
		}

		else if (controller == "Logarithmen" || controller == "logarithmen" || controller == "log") {
			a.logarithmen();
		}

		else if (controller == "Sonderfaelle1" || controller == "sonderfaelle1" || controller == "son1") {
			a.sonderfaellePotWutLog();
		}

		else if (controller == "Distributivgesetz" || controller == "distributivgesetz" || controller == "dis") {
			a.distributivgesetz();
		}

		else if (controller == "Info" || controller == "info") {
			a.getInfo();
		}

		else if (controller == "BinomischeFormeln" || controller == "binomischeformeln" || controller == "bin") {
			a.binomischeFormeln();
		}

		else if (controller == "Substitution" || controller == "substitution" || controller == "sub") {
			a.substitution();
		}

		else if (controller == "Strahlensaetze" || controller == "strahlensaetze" || controller == "str") {
			a.strahlensätze();
		}
	}
	

	system("pause");
	return 0;
}