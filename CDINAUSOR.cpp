#include "Header.h"

CDINAUSOR::CDINAUSOR(int x, int y) : CANIMAL(x, y) {
	Draw(x, y);
}
void CDINAUSOR::Draw(int x, int y) {
	mX += 3 * Way; x = mX;
	if (x > ENDLANE + STARTLANE - 1 || x <= STARTLANE) return;
	GotoXY(x, y + 1);
	cout << char(223); 

	cout << char(219);
	GotoXY(x - 1, y + 1);
	cout << char(219);
	GotoXY(x, y);
	cout << char(220);
	GotoXY(x, y);
}