#include "Header.h"

CANIMAL::CANIMAL(int x, int y) {
	mX = x;
	mY = y;
	if (x >= ENDLANE) Way = -1;
	else Way = 1;
}

void CANIMAL::Move(int x, int y) {
	if (mX <= ENDLANE + STARTLANE - 1 && mX >= STARTLANE + 1) {
		GotoXY(mX - 2, mY - 1); cout << "    ";
		GotoXY(mX - 2, mY); cout << "    ";
		GotoXY(mX - 1, mY + 1); cout << "___";
	}
	Draw(mX, mY);
	Sleep(10);
}

bool CANIMAL::IsDone() {
	if ((Way == -1 && mX <= STARTLANE + 3) || (Way == 1 && mX >= ENDLANE)) {
		GotoXY(mX - 2, mY - 1); cout << "    ";
		GotoXY(mX - 2, mY); cout << "    ";
		GotoXY(mX - 1, mY + 1); cout << "___";
		return true;
	}
	return false;
}