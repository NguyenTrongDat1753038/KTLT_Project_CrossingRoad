#include "Header.h"

CPEOPLE::CPEOPLE(int x, int y) {
	mX = x;
	mY = y;
	GotoXY(x, y);
	map[1][1] = char(219);
	GotoXY(x - 1, y + 1);
	map[0][2] = '/';
	GotoXY(x + 1, y - 1);
	map[2][0] = '/';
	GotoXY(x - 1, y - 1);
	map[0][0] = char(92);
	GotoXY(x + 1, y + 1);
	map[2][2] = char(92);
	GotoXY(x, y - 1);
	map[1][0] = char(254);
	ReDraw(x, y);
}

void CPEOPLE::ReDraw(int x, int y) {
	GotoXY(x, y);
	cout << map[1][1];
	GotoXY(x - 1, y + 1);
	cout << map[0][2];
	GotoXY(x + 1, y - 1);
	cout << map[2][0];
	GotoXY(x - 1, y - 1);
	cout << map[0][0];
	GotoXY(x + 1, y + 1);
	cout << map[2][2];
	GotoXY(x, y - 1);
	cout << map[1][0];
}
void CPEOPLE::Up(int x) {
	GotoXY(mX, mY);
	cout << ' ';
	GotoXY(mX - 1, mY + 1);
	cout << '_';
	GotoXY(mX + 1, mY - 1);
	cout << ' ';
	GotoXY(mX - 1, mY - 1);
	cout << ' ';
	GotoXY(mX + 1, mY + 1);
	cout << '_';
	GotoXY(mX, mY - 1);
	cout << ' ';
	GotoXY(mX, mY + 1);
	cout << '_';
	mY -= x;
	ReDraw(mX, mY);
}
void CPEOPLE::Left(int x) {
	GotoXY(mX, mY);// ve nguoi
	cout << ' ';
	GotoXY(mX - 1, mY + 1);
	cout << '_';
	GotoXY(mX + 1, mY - 1);
	cout << ' ';
	GotoXY(mX - 1, mY - 1);
	cout << ' ';
	GotoXY(mX + 1, mY + 1);
	cout << '_';
	GotoXY(mX, mY - 1);
	cout << ' ';
	GotoXY(mX, mY + 1);
	cout << '_';
	mX -= 4;
	ReDraw(mX, mY);
}

void CPEOPLE::Right(int x) {
	GotoXY(mX, mY);
	cout << ' ';
	GotoXY(mX - 1, mY + 1);
	cout << '_';
	GotoXY(mX + 1, mY - 1);
	cout << ' ';
	GotoXY(mX - 1, mY - 1);
	cout << ' ';
	GotoXY(mX + 1, mY + 1);
	cout << '_';
	GotoXY(mX, mY - 1);
	cout << ' ';
	GotoXY(mX, mY + 1);
	cout << '_';
	mX += 4;
	ReDraw(mX, mY);
}

void CPEOPLE::Down(int x) {
	GotoXY(mX, mY);
	cout << ' ';
	GotoXY(mX - 1, mY + 1);
	cout << '_';
	GotoXY(mX + 1, mY - 1);
	cout << ' ';
	GotoXY(mX - 1, mY - 1);
	cout << ' ';
	GotoXY(mX + 1, mY + 1);
	cout << '_';
	GotoXY(mX, mY - 1);
	cout << ' ';
	GotoXY(mX, mY + 1);
	cout << '_';
	mY += x;
	ReDraw(mX, mY);
}

bool CPEOPLE::isImpact(CVEHICLE* a[], int n) {
	for (int i = 0; i < n; ++i) {
		if (a[i] == NULL) continue;
		int dX = abs(a[i]->getX() - mX);
		int dY = abs(a[i]->getY() - mY);
		if (dX < 3 && dY < 3) {
			return true;
		}
	}
	return false;
}

bool CPEOPLE::isImpact(CANIMAL* b[], int n) {
	for (int i = 0; i < n; ++i) {
		if (b[i] == NULL) continue;
		int dX = abs(b[i]->getX() - mX);
		int dY = abs(b[i]->getY() - mY);
		if (dX < 3 && dY < 2) {
			return true;
		}
	}
	return false;
}

bool CPEOPLE::isFinish(int Finish) {
	if (mY == Finish - 1)
		return true;
	return false;
}
bool CPEOPLE::isDead() {
	return false;
}

int CPEOPLE::getX() { 
	return mX; 
}

int CPEOPLE::getY() { 
	return mY; 
}