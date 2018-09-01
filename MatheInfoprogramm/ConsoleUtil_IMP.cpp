#pragma once
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <chrono>
#include <thread>
#include "ConsoleUtil_PROT.hpp"

namespace ConUtil {
	
	//Stops the programm for a certain amount of time.
	void sleepFor() {
		std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
	}

	//Sets the console's text color.
	void setTxtColor(std::string color) {
		int colorNum;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		if (color == "black") {
			colorNum = 0;
		}
		if (color == "blue") {
			colorNum = 1;
		}
		if (color == "green") {
			colorNum = 2;
		}
		if (color == "cyan") {
			colorNum = 3;
		}
		if (color == "red") {
			colorNum = 4;
		}
		if (color == "magenta") {
			colorNum = 5;
		}
		if (color == "brown") {
			colorNum = 6;
		}
		if (color == "lightgray") {
			colorNum = 7;
		}
		if (color == "darkgray") {
			colorNum = 8;
		}
		if (color == "lightblue") {
			colorNum = 9;
		}
		if (color == "lightgreen") {
			colorNum = 10;
		}
		if (color == "lightcyan") {
			colorNum = 11;
		}
		if (color == "lightred") {
			colorNum = 12;
		}
		if (color == "lightmagenta") {
			colorNum = 13;
		}
		if (color == "yellow") {
			colorNum = 14;
		}
		if (color == "white") {
			colorNum = 15;
		}

		SetConsoleTextAttribute(hConsole, colorNum);
	}

	//Sets the console's cursor position by x- and y- Coordinate.
	void setCursorXY(int x, int y) {
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}

	//Writes each letter of the text with a variable delay, making it appear animated. In addition, while the text is being written, any ".wav" file can be played.
	void writeTextlineSound(char wav[], std::string text, double tempo) {
		PlaySound(TEXT(wav), NULL, SND_ASYNC);
		for (int i = 0; i < text.length(); i++) {
			std::cout << text[i];
			if (tempo == 0) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(0));
			}
			else if (tempo == 0.000625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(625000));
			}
			else if (tempo == 0.001) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000));
			}
			else if (tempo == 0.00125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1250000));
			}
			else if (tempo == 0.0025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(2500000));
			}
			else if (tempo == 0.005) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(5000000));
			}
			else if (tempo == 0.010) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(10000000));
			}
			else if (tempo == 0.025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(25000000));
			}
			else if (tempo == 0.040) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(40000000));
			}
			else if (tempo == 0.045) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(45000000));
			}
			else if (tempo == 0.050) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(50000000));
			}
			else if (tempo == 0.085) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(85000000));
			}
			else if (tempo == 0.17) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(170000000));
			}
			else if (tempo == 0.34) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(340000000));
			}
			else if (tempo == 1) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000000));
			}
		}
		PlaySound(NULL, 0, 0);
		std::cout << std::endl;
	}

	//Writes each letter of the text with a variable delay, making it appear animated. In addition, while the text is being written, any ".wav" file can be played. Further the text's position in the console can be determined by x- and y- Coordinate.
	void writeTextlineSoundPos(char wav[], std::string text, double tempo, int x, int y) {
		setCursorXY(x, y);
		PlaySound(TEXT(wav), NULL, SND_ASYNC);
		for (int i = 0; i < text.length(); i++) {
			std::cout << text[i];
			if (tempo == 0) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(0));
			}
			else if (tempo == 0.000625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(625000));
			}
			else if (tempo == 0.001) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000));
			}
			else if (tempo == 0.00125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1250000));
			}
			else if (tempo == 0.0025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(2500000));
			}
			else if (tempo == 0.005) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(5000000));
			}
			else if (tempo == 0.010) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(10000000));
			}
			else if (tempo == 0.025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(25000000));
			}
			else if (tempo == 0.040) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(40000000));
			}
			else if (tempo == 0.045) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(45000000));
			}
			else if (tempo == 0.050) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(50000000));
			}
			else if (tempo == 0.085) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(85000000));
			}
			else if (tempo == 0.17) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(170000000));
			}
			else if (tempo == 0.34) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(340000000));
			}
			else if (tempo == 1) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000000));
			}
		}
		PlaySound(NULL, 0, 0);
		std::cout << std::endl;
	}

	//Writes each letter of the text with a variable delay, making it appear animated.
	void writeTextline(std::string text, double tempo) {
		for (int i = 0; i < text.length(); i++) {
			std::cout << text[i];
			if (tempo == 0) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(0));
			}
			else if (tempo == 0.0000390625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(39062));
			}
			else if (tempo == 0.000078125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(78125));
			}
			else if (tempo == 0.00015625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(156250));
			}
			else if (tempo == 0.0003125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(312500));
			}
			else if (tempo == 0.000625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(625000));
			}
			else if (tempo == 0.001) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000));
			}
			else if (tempo == 0.00125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1250000));
			}
			else if (tempo == 0.0025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(2500000));
			}
			else if (tempo == 0.005) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(5000000));
			}
			else if (tempo == 0.010) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(10000000));
			}
			else if (tempo == 0.025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(25000000));
			}
			else if (tempo == 0.040) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(40000000));
			}
			else if (tempo == 0.045) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(45000000));
			}
			else if (tempo == 0.050) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(50000000));
			}
			else if (tempo == 0.085) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(85000000));
			}
			else if (tempo == 0.17) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(170000000));
			}
			else if (tempo == 0.34) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(340000000));
			}
			else if (tempo == 1) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000000));
			}
		}
		std::cout << std::endl;
	}

	//Writes each letter of the text with a variable delay, making it appear animated. Further the text's position in the console can be determined by x- and y- Coordinate.
	void writeTextlinePos(std::string text, double tempo, int x, int y) {
		setCursorXY(x, y);
		for (int i = 0; i < text.length(); i++) {
			std::cout << text[i];
			if (tempo == 0) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(0));
			}
			else if (tempo == 0.000625) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(625000));
			}
			else if (tempo == 0.001) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000));
			}
			else if (tempo == 0.00125) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1250000));
			}
			else if (tempo == 0.0025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(2500000));
			}
			else if (tempo == 0.005) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(5000000));
			}
			else if (tempo == 0.010) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(10000000));
			}
			else if (tempo == 0.025) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(25000000));
			}
			else if (tempo == 0.040) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(40000000));
			}
			else if (tempo == 0.045) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(45000000));
			}
			else if (tempo == 0.050) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(50000000));
			}
			else if (tempo == 0.085) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(85000000));
			}
			else if (tempo == 0.17) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(170000000));
			}
			else if (tempo == 0.34) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(340000000));
			}
			else if (tempo == 1) {
				std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::nanoseconds(1000000000));
			}
		}
		std::cout << std::endl;
	}

	//Makes "..." randomly appear on the console in a space between x/y = 0 and x/y = variable. In addition, while "..." is being written, any ".wav" file can be played.
	void loadAnimRandSound(int anzahl, int xMax, int yMax, double tempo) {
		std::string load = ". . .";
		std::string loadLoesch = "      ";
		int x, y;
		for (int i = 0; i <= anzahl; i++) {
			x = rand() % xMax;
			y = rand() % yMax;
			writeTextlineSoundPos("Typewriter_Sound_Effect.wav", load, tempo, x, y);
			writeTextlineSoundPos("Typewriter_Sound_Effect.wav", loadLoesch, tempo, x, y);
			std::cout << x << " " << y;
		}
	}

	//Lässt in einem bestimmten Koordinatenbereich "Ladepunkte" zufällig auftauchen und verschwinden.
	void loadAnimRand(int anzahl, int xRange, int yRange, double tempo) {
		std::string load = ". . .";
		std::string loadLoesch = "      ";
		int x, y;
		for (int i = 1; i <= anzahl; i++) {
			x = rand() % xRange;
			y = rand() % yRange;
			writeTextlinePos(load, tempo, x, y);
			writeTextlinePos(loadLoesch, tempo, x, y);
		}
	}
}