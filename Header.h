#pragma once
#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <math.h>
#include <thread>
#include <fstream>
#include <string>
#include <map>
#include <Mmsystem.h>
#pragma comment(lib, "Winmm.lib")

using namespace std;
const int MAX_LEVEL = 10;
const float HEIGHT = 29;
const float WIDTH = 80;
const int STARTLANE = 3;
const int ENDLANE = WIDTH - 6;
const int intWIDTH = 118 - WIDTH;
const int STOPTIME = 10;


void clrscr();
void FixConsoleWindow();
void GotoXY(int x, int y);
void hidecursor();
void LoadingBar();
void SetColor(int x);
int getww_(void);
int getwh_(void);
struct CVEHICLE
{
	int mX, mY, Way;
	CVEHICLE(int x, int y);
	void Move(int x, int y);
	void virtual Draw(int x, int y) = 0;
	bool IsDone();
	int getX() { return mX; }
	int getY() { return mY; }
};

struct CTRUCK : CVEHICLE {
	CTRUCK(int x, int y);
	void Draw(int x, int y);
};

struct CCAR : CVEHICLE {
	CCAR(int x, int y);
	void Draw(int x, int y);
};

struct CANIMAL {
	int mX, mY, Way;
	CANIMAL(int x, int y);
	void virtual Draw(int x, int y) = 0;
	void Move(int, int);
	bool IsDone();
	int getX() { return mX; }
	int getY() { return mY; }
};

struct CDINAUSOR : CANIMAL {
	CDINAUSOR(int x, int y);
	void Draw(int x, int y);
};

struct CBIRD : CANIMAL {
	CBIRD(int x, int y);
	void Draw(int x, int y);
};


struct CPEOPLE {
	int mX, mY;
	char map[3][3];
	bool mState; 
	int type;
	CPEOPLE(int x, int y);
	void ReDraw(int x, int y);
	void Up(int x);
	void Left(int x);
	void Right(int x);
	void Down(int x);
	bool isImpact(CVEHICLE* a[], int n);
	bool isImpact(CANIMAL* b[], int n);

	bool isFinish(int Finish);
	bool isDead();
	int getX();
	int getY();
};

struct Level {
	int lane; 
	int distance;
	int speed; 
	int car, truck, dina, bird;
	Level(int, int, int, int, int, int, int);
	int getLane();
	int getDistance();
	int getSpeed();
	int AmountOfCar();
	int AmountOfTruck();
	int AmountOfDinasour();
	int AmounrOfBird();
};


struct FileSave {
	string name;
	int level;
	FileSave(int, string);
	int getLevel();
	string getName();
};

struct Light {
	void DrawRed(int x, int y);
	void DrawGreen(int x, int y);
};

struct CGAME {
	CVEHICLE* axt[10];
	CVEHICLE* axh[10];
	CANIMAL* akl[10];
	CANIMAL* ac[10];
	CPEOPLE* cn;
	Level* lv[10]; int presentLevel;
	int Finish;
	FileSave* File[10];
	int numberOfSave;
public:
	CGAME(); 
	void drawGame(); 
	~CGAME(); 
	CPEOPLE* getPeople();
	CVEHICLE* getVehicle();
	CANIMAL* getAnimal(); 
	bool IsImpact();
	void resetGame(); 
	void exitGame(HANDLE);
	void startGame(); 
	void loadGame(); 
	void saveGame(); 
	void pauseGame(HANDLE); 
	void resumeGame(HANDLE); 
	void updatePosPeople(char, int&);
	void updatePosVehicle();
	void updatePosAnimal();
	void UpdateLevel();
	void LoadLevel(int);
	void ScoreBoard(bool); 
	void Clean();
	bool IsFinish();
	void Update();
	void DrawLight(bool);
	int getSpeed() { return lv[presentLevel - 1]->getSpeed(); }
};