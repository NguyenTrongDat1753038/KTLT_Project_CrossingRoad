#include "Header.h"

CCAR::CCAR(int x, int y) : CVEHICLE(x, y) {
	Draw(x, y);
}

void CCAR::Draw(int x, int y) {
	mX += 2 * Way; x = mX;
	if (x > ENDLANE + STARTLANE - 1 || x <= STARTLANE) return;
	GotoXY(x - 1, y + 1);
	cout << char(219);
	cout << char(219);
	cout << char(219);
	GotoXY(x - 1, y);
	cout << char(220);
	cout << char(219);
	cout << char(220);

}