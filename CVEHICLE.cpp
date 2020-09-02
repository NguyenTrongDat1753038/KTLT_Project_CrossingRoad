#include "Header.h"

bool CVEHICLE::IsDone()
{
	if ((Way == -1 && mX <= STARTLANE + 3) || (Way == 1 && mX >= ENDLANE)) {
		GotoXY(mX - 2, mY - 1); cout << "    ";
		GotoXY(mX - 2, mY); cout << "    ";
		GotoXY(mX - 1, mY + 1); cout << "___";
		return true;
	}
	return false;
}

CVEHICLE::CVEHICLE(int x, int y) {
	mX = x;
	mY = y;
	if (x >= ENDLANE) Way = -1;
	else Way = 1;
}

void CVEHICLE::Move(int x, int y) {
	if (mX <= ENDLANE + STARTLANE - 1 && mX >= STARTLANE + 1) {
		GotoXY(mX - 2, mY - 1); cout << "    ";
		GotoXY(mX - 2, mY); cout << "    ";
		GotoXY(mX - 1, mY + 1); cout << "___";
	}
}