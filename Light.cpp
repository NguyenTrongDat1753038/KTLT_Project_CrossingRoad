#include "Header.h"

void Light::DrawRed(int x, int y) {
	GotoXY(x, y - 1);
	SetColor(12); 
	cout << char(220);
	GotoXY(x, y);
	SetColor(8);
	cout << char(223);
	SetColor(15);
}
void Light::DrawGreen(int x, int y) {
	GotoXY(x, y - 1);
	SetColor(8);
	cout << char(220);
	GotoXY(x, y);
	SetColor(10);
	cout << char(223);
	SetColor(15);
}