#include "CustomFunctions.h"

void gotoxy(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void color(int background, int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), background * 16 + color);
}