#pragma once
#include <iostream>
#include <windows.h>
#define HW 10

void intro();

void showPlayerField(long long int Arr[][10]);

void checkShipPlace(long long int Arr[][10], int a, int a1, int b, int b1, int aCount, int bCount, bool aDir, bool bDir, bool& rulle, bool& human, bool& autoSet);

void showNPCField(long long int Arr[][10]);

void showPlayerField(long long int Arr[][10]);

void setShipAuto(long long int Arr[][10], bool& human);

void setShip(long long int Arr[][10], bool& human);

void shipSunken(long long int Arr[][10], int a, int b);

void checkWin(long long int Arr1[][10], long long int Arr2[][10], bool& win);

void shipSunkenDumbShoting(long long int Arr[][10], int a, int b);

void shipDamaged(long long int Arr[][10], int a, int b, bool& stupid, bool& human, bool& cheatPl);

void makeMove(long long int Arr1[][10], long long int Arr2[][10], bool& win, bool& stupid, bool& human, bool& cheatPl);

void makeAutoMove(long long int Arr1[][10], long long int Arr2[][10], bool& win, bool& stupid, bool& human, bool& cheatPC, bool& cheatPl);

void exitMenu(bool& pause);

void checkWin(long long int Arr1[][10], long long int Arr2[][10], bool& win);

void gamePlay(long long int Arr1[][10], long long int Arr2[][10], bool& win, bool& stupid, bool& human, bool& fieldAuto, bool& pause, bool& cheatPC, bool& cheatPl);

int credits();

void winEnd(long long int Arr1[][10], long long int Arr2[][10]);

void sunkAnimated();

void damagedAnimated();

void missAnimated();