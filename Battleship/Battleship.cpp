#include <iostream>
#include "Header.h"

using namespace std;

int main() {
    intro();
    srand(time(0));
    bool win{ 0 };
    bool* pWin = &win;
    bool stupid{ 0 };
    bool* pStupid = &stupid;
    bool human{ 0 };
    bool* pHuman = &human;
    bool fieldAuto{ 0 };
    bool* pFieldAuto = &fieldAuto;
    bool pause{ 0 };
    bool* pPause = &pause;
    bool cheatPC{ 0 };
    bool* pCheatPC = &cheatPC;
    bool cheatPl{ 0 };
    bool* pCheatPl = &cheatPl;
    int v{ 0 };
    bool yes{ 0 };
    while (!pause) {
        long long int Arr1[10][10];
        long long int Arr2[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                Arr1[i][j] = 32;
            }
        }
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                Arr2[i][j] = 32;
            }
        }
        while (!yes) {            
            v = 0;
            win = false;
            while (v < 1 || v > 2) {
                cout << "Player is a human?\n" <<
                    "1. Yes\n" <<
                    "2. No\n";
                cout << "Choose:\n";
                cin >> v;
                system("cls");
            }
            switch (v) {
            case 1:
                human = true;
                break;
            case 2:
                human = false;
                break;
            }
            v = 0;
            while (v < 1 || v>2) {
                cout << "Choose difficulty:\n" <<
                    "1. Medium\n" <<
                    "2. Easy\n";
                cout << "Choose:\n";
                cin >> v;
                system("cls");
            }
            switch (v) {
            case 1:
                stupid = false;
                break;
            case 2:
                stupid = true;
                break;
            }
            v = 0;
            while (v < 1 || v>2) {
                cout << "Do you want replace all ship by yourself?\n" <<
                    "1. Yes\n" <<
                    "2. No\n";
                cout << "Choose:\n";
                cin >> v;
                system("cls");
            }
            switch (v) {
            case 1:
                fieldAuto = false;
                break;
            case 2:
                fieldAuto = true;
                break;
            }            
            v = 0;
            while (v < 1 || v>2) {
                cout << "Do you want enable cheats?\n" <<
                    "1. Yes\n" <<
                    "2. No\n";
                cout << "Choose:\n";
                cin >> v;
                system("cls");
            }
            switch (v) {
            case 1:
                v = 0;
                while (v < 1 || v>2) {
                    cout << "Which one?\n" <<
                        "1. Wanna see enemy field!\n" <<
                        "2. Make enemy unbeatable!\n";
                    cout << "Choose:\n";
                    cin >> v;
                    system("cls");
                }
                switch (v) {
                case 1:
                    cheatPl = true;
                    break;
                case 2:
                    cheatPC = true;
                    break;
                }
                break;
            case 2:
                cheatPl = false;
                cheatPC = false;
                break;
            }
            v = 0;
            while (v < 1 || v>2) {
                human ? cout << "Player is human\n\n" : cout << "No player\n\n";
                stupid ? cout << "Dificulty is Easy\n\n" : cout << "Dificulty is Medium\n\n";
                fieldAuto ? cout << "Auto place ships\n\n" : cout << "Place ships by yourself\n\n";
                cheatPC ? cout << "Enemy unbeeatable\n\n" : cout << "No cheat for NPC\n\n";
                cheatPl ? cout << "Clear sky above enemy\n\n" : cout << "Fog of war ON\n\n";
                cout << "Is that what Do you want ? \n\n" <<
                    "1. Yes\n" <<
                    "2. No\n\n";
                cout << "Choose:\n";
                cin >> v;
                system("cls");
            }
            switch (v) {
            case 1:
                yes = true;
                break;
            case 2:
                yes = false;
                break;
            }
        }
        gamePlay(Arr1, Arr2, *pWin, *pStupid, *pHuman, *pFieldAuto, *pPause, *pCheatPC, *pCheatPl);
        pause = true;
        v = 0;
        yes = 0;
        if (pause) {
            int v{ 0 };
            while (v < 1 || v > 2) {
                cout << endl << "Do Do you want Exit?\n" <<
                    "1. Yes\n" <<
                    "2. No\n";
                cout << "Choose:\n";
                cin >> v;
                system("cls");
                auto buffer = make_unique<int[]>(10);
                switch (v) {
                case 1:
                    yes = true;
                    break;
                case 2:
                    pause = false;
                    win = false;
                    break;
                }
            }
        }
    }
    if (yes) {
        credits();
    }
}