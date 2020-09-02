#include "Header.h"
CBIRD::CBIRD(int x, int y) : CANIMAL(x, y) {
	Draw(x, y);
}

void CBIRD::Draw(int x, int y) {
	mX += 4 * Way; x = mX;
	if (x > ENDLANE + STARTLANE - 1 || x <= STARTLANE) return;
	GotoXY(x, y);
	cout << char(254);
	cout << char(223);
	GotoXY(x - 1, y);
	cout << char(223);
}