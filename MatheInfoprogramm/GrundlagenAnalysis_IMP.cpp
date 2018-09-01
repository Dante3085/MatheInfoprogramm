#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "GrundlagenAnalysis_PROT.hpp"
#include "ConsoleUtil_PROT.hpp"

std::string loeschString = "                                                                                                                                                              ";

void GrundlagenAnalysis::strahlensätze() {

	std::ifstream file;
	std::string memory;

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/2_Projekte/MatheInfoprogramm/Texte/Strahlensaetze.txt");

	if (file.is_open()) {
		while (std::getline(file, memory)) {
			std::cout << memory << std::endl;
		}
		file.close();
	}

	else {
		std::cerr << "Fehler beim Oeffnen der Datei! Überpruefen sie den Pfad der Datei und ob diese ueberhaupt existiert.";
	}
}

void GrundlagenAnalysis::substitution() {

	std::ifstream file;
	std::string memory;

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/2_Projekte/MatheInfoprogramm/Texte/Substitution.txt");

	if (file.is_open()) {
		while (std::getline(file, memory)) {
			std::cout << memory << std::endl;
		}
		file.close();
	}

	else {
		std::cerr << "Fehler beim Oeffnen der Datei! Überpruefen sie den Pfad der Datei und ob diese ueberhaupt existiert.";
	}
}

void GrundlagenAnalysis::binomischeFormeln() {

	std::ifstream file;
	std::string memory;

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/2_Projekte/MatheInfoprogramm/Texte/BinomischeFormeln.txt");

	if (file.is_open()) {
		while (std::getline(file, memory)) {
			std::cout << memory << std::endl;
		}
		file.close();
	}

	else {
		std::cerr << "Fehler beim Oeffnen der Datei! Überpruefen sie den Pfad der Datei und ob diese ueberhaupt existiert.";
	}
}

void GrundlagenAnalysis::getInfo() {

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	std::cout << info << std::endl;
}

void GrundlagenAnalysis::distributivgesetz() {

	std::ifstream file;
	std::string memory;

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/2_Projekte/MatheInfoprogramm/Texte/Distributivgesetz.txt");

	if (file.is_open()) {
		while (std::getline(file, memory)) {
			std::cout << memory << std::endl;
		}
		file.close();
	}

	else {
		std::cerr << "Fehler beim Oeffnen der Datei! Überpruefen sie den Pfad der Datei und ob diese ueberhaupt existiert.";
	}
}

void GrundlagenAnalysis::sonderfaellePotWutLog() {

	std::ifstream file;
	std::string memory;

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/2_Projekte/MatheInfoprogramm/Texte/SonferfaellePotenzenWurzelnLogarithmen.txt");

	if (file.is_open()) {
		while (std::getline(file, memory)) {
			std::cout << memory << std::endl;
		}
		file.close();
	}

	else {
		std::cerr << "Fehler beim Oeffnen der Datei! Überpruefen sie den Pfad der Datei und ob diese ueberhaupt existiert.";
	}
}

void GrundlagenAnalysis::logarithmen() {

	std::ifstream file;
	std::string memory;

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/2_Projekte/MatheInfoprogramm/Texte/Logarithmen.txt");

	if (file.is_open()) {
		while (std::getline(file, memory)) {
			std::cout << memory << std::endl;
		}
		file.close();
	}

	else {
		std::cerr << "Fehler beim Oeffnen der Datei! Überpruefen sie den Pfad der Datei und ob diese ueberhaupt existiert.";
	}

}

void GrundlagenAnalysis::potenzen() {

	std::ifstream file;
	std::string memory;

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

		file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/2_Projekte/MatheInfoprogramm/Texte/Potenzen.txt");

		if (file.is_open()) {
			while (std::getline(file, memory)) {
				std::cout << memory << std::endl;
			}
			file.close();
		}

		else {
			std::cerr << "Fehler beim Oeffnen der Datei! Überpruefen sie den Pfad der Datei und ob diese ueberhaupt existiert.";
		}
	
}

void GrundlagenAnalysis::wurzeln() {

	std::ifstream file;
	std::string memory;

	for (int i = 0; i < 40; i++) {
		ConUtil::writeTextlinePos(loeschString, 0, 0, i);
	}

	ConUtil::setCursorXY(0, 0);

	file.open("Y:/2_IT_Informatik/2_Programmierung/3_Microsoft Visual Studio 2017 Community Entwicklung/2_Projekte/MatheInfoprogramm/Texte/Wurzeln.txt");

	if (file.is_open()) {
		while (std::getline(file, memory)) {
			std::cout << memory << std::endl;
		}
		file.close();
	}

	else {
		std::cerr << "Fehler beim Oeffnen der Datei! Überpruefen sie den Pfad der Datei und ob diese ueberhaupt existiert.";
	}
}