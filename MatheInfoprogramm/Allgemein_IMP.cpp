#pragma once
#include <iostream>
#include "Allgemein_PROT.hpp"
#include "ConsoleUtil_PROT.hpp"

void Allgemein::startMenue() {

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos("                                                                                                                                              ", 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	std::cout << "Befehle: Gross-und Kleinschreibung erlaubt\n\n";
	std::cout << "0.1 Startmenue(Abk.: 'start')\n";
	std::cout << "0.2 exit\n";
	std::cout << "0.3 info\n";
	std::cout << "1.Potenzen(Abk.: 'pot')\n";
	std::cout << "2.Wurzeln(Abk.: 'wut')\n";
	std::cout << "3.Logarithmen(Abk.: 'log')\n";
	std::cout << "4.Sonderfaelle1(Abk.: 'son1')\n";
	std::cout << "5.Distributivgesetz(Abk.: 'dis')\n";
	std::cout << "6.BinomischeFormeln(Abk.: 'bin')\n";
	std::cout << "7.Strahlensaetze(Abk.: 'str')\n";
}