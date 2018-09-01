#pragma once

namespace ConUtil {
	void setTxtColor(std::string);
	void setCursorXY(int, int);
	void writeTextlineSound(char[], std::string, double);
	void writeTextlineSoundPos(char[], std::string, double, int, int);
	void writeTextline(std::string, double);
	void writeTextlinePos(std::string, double, int, int);
	void loadAnimRandSound(int, int, int, double);
	void loadAnimRand(int, int, int, double);
}