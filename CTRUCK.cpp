#include "Header.h"

CTRUCK::CTRUCK(int x, int y) : CVEHICLE(x, y) {
	Draw(x, y);
}

void CTRUCK::Draw(int x, int y) {
	mX += Way; x = mX;
	if (x > ENDLANE + STARTLANE - 1 || x <= STARTLANE) return;
	GotoXY(x - 1, y + 1);
	cout << char(219); 
	cout << char(219);
	cout << char(219);
	GotoXY(x - 1, y);
	cout << char(219);
	cout << char(219);
}