#include <iostream>
#include "Header.h"

using namespace std;

void intro() {
    unsigned char st[]{ 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 10,
                176, 176, 219, 219, 219, 219, 219, 219, 187, 176, 176, 219, 219, 219, 219, 219, 187, 176, 219, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 187, 176, 176, 176, 176, 176, 219, 219, 219, 219, 219, 219, 219, 187, 176, 219, 219, 219, 219, 219, 219, 187, 219, 219, 187, 176, 176, 219, 219, 187, 219, 219, 187, 219, 219, 219, 219, 219, 219, 187, 176, 176, 176, 10,
                176, 176, 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 219, 219, 187, 200, 205, 205, 219, 219, 201, 205, 205, 188, 200, 205, 205, 219, 219, 201, 205, 205, 188, 219, 219, 186, 176, 176, 176, 176, 176, 219, 219, 201, 205, 205, 205, 205, 188, 219, 219, 201, 205, 205, 205, 205, 188, 219, 219, 186, 176, 176, 219, 219, 186, 219, 219, 186, 219, 219, 201, 205, 205, 219, 219, 187, 176, 176, 10,
                176, 176, 219, 219, 219, 219, 219, 219, 203, 188, 219, 219, 219, 219, 219, 219, 219, 186, 176, 176, 176, 219, 219, 186, 176, 176, 176, 176, 176, 176, 219, 219, 186, 176, 176, 176, 219, 219, 186, 176, 176, 176, 176, 176, 219, 219, 219, 219, 219, 187, 176, 176, 200, 219, 219, 219, 219, 219, 187, 176, 219, 219, 219, 219, 219, 219, 219, 186, 219, 219, 186, 219, 219, 219, 219, 219, 219, 201, 188, 176, 176, 10,
                176, 176, 219, 219, 201, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 219, 219, 186, 176, 176, 176, 219, 219, 186, 176, 176, 176, 176, 176, 176, 219, 219, 186, 176, 176, 176, 219, 219, 186, 176, 176, 176, 176, 176, 219, 219, 201, 205, 205, 188, 176, 176, 176, 200, 205, 205, 205, 219, 219, 187, 219, 219, 201, 205, 205, 219, 219, 186, 219, 219, 186, 219, 219, 201, 205, 205, 205, 188, 176, 176, 176, 10,
                176, 176, 219, 219, 219, 219, 219, 219, 203, 188, 219, 219, 186, 176, 176, 219, 219, 186, 176, 176, 176, 219, 219, 186, 176, 176, 176, 176, 176, 176, 219, 219, 186, 176, 176, 176, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 219, 187, 219, 219, 219, 219, 219, 219, 201, 188, 219, 219, 186, 176, 176, 219, 219, 186, 219, 219, 186, 219, 219, 186, 176, 176, 176, 176, 176, 176, 176, 10,
                176, 176, 200, 205, 205, 205, 205, 205, 188, 176, 200, 205, 188, 176, 176, 200, 205, 188, 176, 176, 176, 200, 205, 188, 176, 176, 176, 176, 176, 176, 200, 205, 188, 176, 176, 176, 200, 205, 205, 205, 205, 205, 205, 188, 200, 205, 205, 205, 205, 205, 205, 188, 200, 205, 205, 205, 205, 205, 188, 176, 200, 205, 188, 176, 176, 200, 205, 188, 200, 205, 188, 200, 205, 188, 176, 176, 176, 176, 176, 176, 176, 10,
                176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 10, 0 };
    int i{ 0 };
    while (st[i] != 0) {
        cout << st[i];
        i++;
    }
    cout << endl;
    Sleep(5000);
    system("cls");
}

void checkShipPlace(long long int Arr[][10], int a, int a1, int b, int b1, int aCount, int bCount, bool aDir, bool bDir, bool& rulle, bool& human, bool& autoSet) {
    bool aRem{ 0 }; bool bRem{ 0 }; //возникла проблема, что при Count 99 не проходила проверка на положение коробля к границе, а при 0 не работал while
    if (aCount == 99) {
        aCount = 0;
        aRem = 1;
    }
    if (bCount == 99) {
        bCount = 0;
        bRem = 1;
    }
    a1 = 0; b1 = 0;
    if ((a == 0 || (a + aCount) == 0) && b != 0 && b != 9) {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1 + 1][b + b1] == 32 && Arr[a + a1][b + b1 + 1] == 32 && Arr[a + a1][b + b1 - 1] == 32 && Arr[a + a1 + 1][b + b1 + 1] == 32 && Arr[a + a1 + 1][b + b1 - 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) { //добивка проверки
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1 + 1][b + b1] != 32 || Arr[a + a1][b + b1 + 1] != 32 || Arr[a + a1][b + b1 - 1] != 32 || Arr[a + a1 + 1][b + b1 + 1] != 32 || Arr[a + a1 + 1][b + b1 - 1] != 32) {
                rulle = false;
            }
        }
    }
    else if ((a == 9 || (a + aCount) == 9) && b != 0 && b != 9) {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1][b + b1 + 1] == 32 && Arr[a + a1 - 1][b + b1] == 32 && Arr[a + a1][b + b1 - 1] == 32 && Arr[a + a1 - 1][b + b1 - 1] == 32 && Arr[a + a1 - 1][b + b1 + 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) {
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1][b + b1 + 1] != 32 || Arr[a + a1 - 1][b + b1] != 32 || Arr[a + a1][b + b1 - 1] != 32 || Arr[a + a1 - 1][b + b1 - 1] != 32 || Arr[a + a1 - 1][b + b1 + 1] != 32) {
                rulle = false;
            }
        }
    }
    else if ((b == 0 || (b + bCount) == 0) && a != 0 && a != 9) {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1 + 1][b + b1] == 32 && Arr[a + a1][b + b1 + 1] == 32 && Arr[a + a1 - 1][b + b1] == 32 && Arr[a + a1 + 1][b + b1 + 1] == 32 && Arr[a + a1 - 1][b + b1 + 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) {
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1 + 1][b + b1] != 32 || Arr[a + a1][b + b1 + 1] != 32 || Arr[a + a1 - 1][b + b1] != 32 || Arr[a + a1 + 1][b + b1 + 1] != 32 || Arr[a + a1 - 1][b + b1 + 1] != 32) {
                rulle = false;
            }
        }
    }
    else if ((b == 9 || (b + bCount) == 9) && a != 0 && a != 9) {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1 + 1][b + b1] == 32 && Arr[a + a1 - 1][b + b1] == 32 && Arr[a + a1][b + b1 - 1] == 32 && Arr[a + a1 - 1][b + b1 - 1] == 32 && Arr[a + a1 + 1][b + b1 - 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) {
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1 + 1][b + b1] != 32 || Arr[a + a1 - 1][b + b1] != 32 || Arr[a + a1][b + b1 - 1] != 32 || Arr[a + a1 - 1][b + b1 - 1] != 32 || Arr[a + a1 + 1][b + b1 - 1] != 32) {
                rulle = false;
            }
        }
    }
    else if (a == 0 && b == 0) {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1 + 1][b + b1] == 32 && Arr[a + a1][b + b1 + 1] == 32 && Arr[a + a1 + 1][b + b1 + 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) {
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1 + 1][b + b1] != 32 || Arr[a + a1][b + b1 + 1] != 32 || Arr[a + a1 + 1][b + b1 + 1] != 32) {
                rulle = false;
            }
        }
    }
    else if (a == 9 && b == 9) {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1 - 1][b + b1] == 32 && Arr[a + a1][b + b1 - 1] == 32 && Arr[a + a1 - 1][b + b1 - 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount == 0 && bCount == 0) {
                        a1 = 0; b1 = 0;
                    }
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) {
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1 - 1][b + b1] != 32 || Arr[a + a1][b + b1 - 1] != 32 || Arr[a + a1 - 1][b + b1 - 1] != 32) {
                rulle = false;
            }
        }
    }
    else if (a == 0 && b == 9) {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1 + 1][b + b1] == 32 && Arr[a + a1][b + b1 - 1] == 32 && Arr[a + a1 + 1][b + b1 - 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) {
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1 + 1][b + b1] != 32 || Arr[a + a1][b + b1 - 1] != 32 || Arr[a + a1 + 1][b + b1 - 1] != 32) {
                rulle = false;
            }
        }
    }
    else if (a == 9 && b == 0) {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1][b + b1 + 1] == 32 && Arr[a + a1 - 1][b + b1] == 32 && Arr[a + a1 - 1][b + b1 + 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) {
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1][b + b1 + 1] != 32 || Arr[a + a1 - 1][b + b1] != 32 || Arr[a + a1 - 1][b + b1 + 1] != 32) {
                rulle = false;
            }
        }
    }
    else {
        int j = 0;
        if (aRem) {
            aCount = 99;
        }
        if (bRem) {
            bCount = 99;
        }
        do {
            if (Arr[a + a1][b + b1] == 32 && Arr[a + a1 + 1][b + b1] == 32 && Arr[a + a1][b + b1 + 1] == 32 && Arr[a + a1 - 1][b + b1] == 32 && Arr[a + a1][b + b1 - 1] == 32 && Arr[a + a1 - 1][b + b1 - 1] == 32 && Arr[a + a1 + 1][b + b1 + 1] == 32 && Arr[a + a1 - 1][b + b1 + 1] == 32 && Arr[a + a1 + 1][b + b1 - 1] == 32) {
                rulle = true;
                if (aCount < 0 || bCount < 0) {
                    b1--, a1--;
                    if (aCount != j && bCount != j) {
                        j--;
                    }
                }
                else {
                    b1++, a1++;
                    if (aCount != j && bCount != j) {
                        j++;
                    }
                }
                if (aDir) {
                    b1 = 0;
                }
                else {
                    a1 = 0;
                }
            }
            else {
                rulle = false;
                system("cls");
                if (human && !autoSet) {
                    cout << "You can not set ship that close to each other!" << endl;
                    Sleep(1000);
                }
                break;
            }
        } while ((j != bCount) && (j != aCount));
        if (rulle) {
            if (Arr[a + a1][b + b1] != 32 || Arr[a + a1 + 1][b + b1] != 32 || Arr[a + a1][b + b1 + 1] != 32 || Arr[a + a1 - 1][b + b1] != 32 || Arr[a + a1][b + b1 - 1] != 32 || Arr[a + a1 - 1][b + b1 - 1] != 32 || Arr[a + a1 + 1][b + b1 + 1] != 32 || Arr[a + a1 - 1][b + b1 + 1] != 32 || Arr[a + a1 + 1][b + b1 - 1] != 32) {
                rulle = false;
            }
        }
    }
}

void showNPCField(long long int Arr[][10]) {
    cout << "   a b c d e f g h i j " << endl <<
        "  " << (unsigned char)218 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)191 << endl <<
        "1 " << (unsigned char)179; (unsigned char)Arr[0][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][0]; cout << (unsigned char)179; (unsigned char)Arr[0][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][1]; cout << (unsigned char)179; (unsigned char)Arr[0][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][2]; cout << (unsigned char)179; (unsigned char)Arr[0][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][3]; cout << (unsigned char)179; (unsigned char)Arr[0][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][4]; cout << (unsigned char)179; (unsigned char)Arr[0][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][5]; cout << (unsigned char)179; (unsigned char)Arr[0][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][6]; cout << (unsigned char)179; (unsigned char)Arr[0][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][7]; cout << (unsigned char)179; (unsigned char)Arr[0][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][8]; cout << (unsigned char)179; (unsigned char)Arr[0][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[0][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "2 " << (unsigned char)179; (unsigned char)Arr[1][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][0]; cout << (unsigned char)179; (unsigned char)Arr[1][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][1]; cout << (unsigned char)179; (unsigned char)Arr[1][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][2]; cout << (unsigned char)179; (unsigned char)Arr[1][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][3]; cout << (unsigned char)179; (unsigned char)Arr[1][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][4]; cout << (unsigned char)179; (unsigned char)Arr[1][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][5]; cout << (unsigned char)179; (unsigned char)Arr[1][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][6]; cout << (unsigned char)179; (unsigned char)Arr[1][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][7]; cout << (unsigned char)179; (unsigned char)Arr[1][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][8]; cout << (unsigned char)179; (unsigned char)Arr[1][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[1][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "3 " << (unsigned char)179; (unsigned char)Arr[2][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][0]; cout << (unsigned char)179; (unsigned char)Arr[2][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][1]; cout << (unsigned char)179; (unsigned char)Arr[2][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][2]; cout << (unsigned char)179; (unsigned char)Arr[2][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][3]; cout << (unsigned char)179; (unsigned char)Arr[2][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][4]; cout << (unsigned char)179; (unsigned char)Arr[2][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][5]; cout << (unsigned char)179; (unsigned char)Arr[2][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][6]; cout << (unsigned char)179; (unsigned char)Arr[2][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][7]; cout << (unsigned char)179; (unsigned char)Arr[2][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][8]; cout << (unsigned char)179; (unsigned char)Arr[2][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[2][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "4 " << (unsigned char)179; (unsigned char)Arr[3][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][0]; cout << (unsigned char)179; (unsigned char)Arr[3][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][1]; cout << (unsigned char)179; (unsigned char)Arr[3][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][2]; cout << (unsigned char)179; (unsigned char)Arr[3][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][3]; cout << (unsigned char)179; (unsigned char)Arr[3][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][4]; cout << (unsigned char)179; (unsigned char)Arr[3][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][5]; cout << (unsigned char)179; (unsigned char)Arr[3][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][6]; cout << (unsigned char)179; (unsigned char)Arr[3][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][7]; cout << (unsigned char)179; (unsigned char)Arr[3][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][8]; cout << (unsigned char)179; (unsigned char)Arr[3][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[3][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "5 " << (unsigned char)179; (unsigned char)Arr[4][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][0]; cout << (unsigned char)179; (unsigned char)Arr[4][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][1]; cout << (unsigned char)179; (unsigned char)Arr[4][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][2]; cout << (unsigned char)179; (unsigned char)Arr[4][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][3]; cout << (unsigned char)179; (unsigned char)Arr[4][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][4]; cout << (unsigned char)179; (unsigned char)Arr[4][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][5]; cout << (unsigned char)179; (unsigned char)Arr[4][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][6]; cout << (unsigned char)179; (unsigned char)Arr[4][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][7]; cout << (unsigned char)179; (unsigned char)Arr[4][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][8]; cout << (unsigned char)179; (unsigned char)Arr[4][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[4][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "6 " << (unsigned char)179; (unsigned char)Arr[5][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][0]; cout << (unsigned char)179; (unsigned char)Arr[5][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][1]; cout << (unsigned char)179; (unsigned char)Arr[5][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][2]; cout << (unsigned char)179; (unsigned char)Arr[5][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][3]; cout << (unsigned char)179; (unsigned char)Arr[5][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][4]; cout << (unsigned char)179; (unsigned char)Arr[5][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][5]; cout << (unsigned char)179; (unsigned char)Arr[5][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][6]; cout << (unsigned char)179; (unsigned char)Arr[5][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][7]; cout << (unsigned char)179; (unsigned char)Arr[5][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][8]; cout << (unsigned char)179; (unsigned char)Arr[5][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[5][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "7 " << (unsigned char)179; (unsigned char)Arr[6][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][0]; cout << (unsigned char)179; (unsigned char)Arr[6][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][1]; cout << (unsigned char)179; (unsigned char)Arr[6][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][2]; cout << (unsigned char)179; (unsigned char)Arr[6][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][3]; cout << (unsigned char)179; (unsigned char)Arr[6][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][4]; cout << (unsigned char)179; (unsigned char)Arr[6][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][5]; cout << (unsigned char)179; (unsigned char)Arr[6][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][6]; cout << (unsigned char)179; (unsigned char)Arr[6][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][7]; cout << (unsigned char)179; (unsigned char)Arr[6][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][8]; cout << (unsigned char)179; (unsigned char)Arr[6][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[6][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "8 " << (unsigned char)179; (unsigned char)Arr[7][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][0]; cout << (unsigned char)179; (unsigned char)Arr[7][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][1]; cout << (unsigned char)179; (unsigned char)Arr[7][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][2]; cout << (unsigned char)179; (unsigned char)Arr[7][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][3]; cout << (unsigned char)179; (unsigned char)Arr[7][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][4]; cout << (unsigned char)179; (unsigned char)Arr[7][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][5]; cout << (unsigned char)179; (unsigned char)Arr[7][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][6]; cout << (unsigned char)179; (unsigned char)Arr[7][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][7]; cout << (unsigned char)179; (unsigned char)Arr[7][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][8]; cout << (unsigned char)179; (unsigned char)Arr[7][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[7][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "9 " << (unsigned char)179; (unsigned char)Arr[8][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][0]; cout << (unsigned char)179; (unsigned char)Arr[8][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][1]; cout << (unsigned char)179; (unsigned char)Arr[8][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][2]; cout << (unsigned char)179; (unsigned char)Arr[8][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][3]; cout << (unsigned char)179; (unsigned char)Arr[8][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][4]; cout << (unsigned char)179; (unsigned char)Arr[8][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][5]; cout << (unsigned char)179; (unsigned char)Arr[8][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][6]; cout << (unsigned char)179; (unsigned char)Arr[8][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][7]; cout << (unsigned char)179; (unsigned char)Arr[8][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][8]; cout << (unsigned char)179; (unsigned char)Arr[8][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[8][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "10" << (unsigned char)179; (unsigned char)Arr[9][0] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][0]; cout << (unsigned char)179; (unsigned char)Arr[9][1] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][1]; cout << (unsigned char)179; (unsigned char)Arr[9][2] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][2]; cout << (unsigned char)179; (unsigned char)Arr[9][3] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][3]; cout << (unsigned char)179; (unsigned char)Arr[9][4] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][4]; cout << (unsigned char)179; (unsigned char)Arr[9][5] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][5]; cout << (unsigned char)179; (unsigned char)Arr[9][6] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][6]; cout << (unsigned char)179; (unsigned char)Arr[9][7] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][7]; cout << (unsigned char)179; (unsigned char)Arr[9][8] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][8]; cout << (unsigned char)179; (unsigned char)Arr[9][9] == 219 ? cout << (unsigned char)(32) : cout << (unsigned char)Arr[9][9]; cout << (unsigned char)179 << endl <<
        "  " << (unsigned char)192 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)217 << endl;
}

void showPlayerField(long long int Arr[][10]) {
    cout << "   a b c d e f g h i j " << endl <<
        "  " << (unsigned char)218 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)194 << (unsigned char)196 << (unsigned char)191 << endl <<
        "1 " << (unsigned char)179 << (unsigned char)Arr[0][0] << (unsigned char)179 << (unsigned char)Arr[0][1] << (unsigned char)179 << (unsigned char)Arr[0][2] << (unsigned char)179 << (unsigned char)Arr[0][3] << (unsigned char)179 << (unsigned char)Arr[0][4] << (unsigned char)179 << (unsigned char)Arr[0][5] << (unsigned char)179 << (unsigned char)Arr[0][6] << (unsigned char)179 << (unsigned char)Arr[0][7] << (unsigned char)179 << (unsigned char)Arr[0][8] << (unsigned char)179 << (unsigned char)Arr[0][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "2 " << (unsigned char)179 << (unsigned char)Arr[1][0] << (unsigned char)179 << (unsigned char)Arr[1][1] << (unsigned char)179 << (unsigned char)Arr[1][2] << (unsigned char)179 << (unsigned char)Arr[1][3] << (unsigned char)179 << (unsigned char)Arr[1][4] << (unsigned char)179 << (unsigned char)Arr[1][5] << (unsigned char)179 << (unsigned char)Arr[1][6] << (unsigned char)179 << (unsigned char)Arr[1][7] << (unsigned char)179 << (unsigned char)Arr[1][8] << (unsigned char)179 << (unsigned char)Arr[1][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "3 " << (unsigned char)179 << (unsigned char)Arr[2][0] << (unsigned char)179 << (unsigned char)Arr[2][1] << (unsigned char)179 << (unsigned char)Arr[2][2] << (unsigned char)179 << (unsigned char)Arr[2][3] << (unsigned char)179 << (unsigned char)Arr[2][4] << (unsigned char)179 << (unsigned char)Arr[2][5] << (unsigned char)179 << (unsigned char)Arr[2][6] << (unsigned char)179 << (unsigned char)Arr[2][7] << (unsigned char)179 << (unsigned char)Arr[2][8] << (unsigned char)179 << (unsigned char)Arr[2][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "4 " << (unsigned char)179 << (unsigned char)Arr[3][0] << (unsigned char)179 << (unsigned char)Arr[3][1] << (unsigned char)179 << (unsigned char)Arr[3][2] << (unsigned char)179 << (unsigned char)Arr[3][3] << (unsigned char)179 << (unsigned char)Arr[3][4] << (unsigned char)179 << (unsigned char)Arr[3][5] << (unsigned char)179 << (unsigned char)Arr[3][6] << (unsigned char)179 << (unsigned char)Arr[3][7] << (unsigned char)179 << (unsigned char)Arr[3][8] << (unsigned char)179 << (unsigned char)Arr[3][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "5 " << (unsigned char)179 << (unsigned char)Arr[4][0] << (unsigned char)179 << (unsigned char)Arr[4][1] << (unsigned char)179 << (unsigned char)Arr[4][2] << (unsigned char)179 << (unsigned char)Arr[4][3] << (unsigned char)179 << (unsigned char)Arr[4][4] << (unsigned char)179 << (unsigned char)Arr[4][5] << (unsigned char)179 << (unsigned char)Arr[4][6] << (unsigned char)179 << (unsigned char)Arr[4][7] << (unsigned char)179 << (unsigned char)Arr[4][8] << (unsigned char)179 << (unsigned char)Arr[4][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "6 " << (unsigned char)179 << (unsigned char)Arr[5][0] << (unsigned char)179 << (unsigned char)Arr[5][1] << (unsigned char)179 << (unsigned char)Arr[5][2] << (unsigned char)179 << (unsigned char)Arr[5][3] << (unsigned char)179 << (unsigned char)Arr[5][4] << (unsigned char)179 << (unsigned char)Arr[5][5] << (unsigned char)179 << (unsigned char)Arr[5][6] << (unsigned char)179 << (unsigned char)Arr[5][7] << (unsigned char)179 << (unsigned char)Arr[5][8] << (unsigned char)179 << (unsigned char)Arr[5][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "7 " << (unsigned char)179 << (unsigned char)Arr[6][0] << (unsigned char)179 << (unsigned char)Arr[6][1] << (unsigned char)179 << (unsigned char)Arr[6][2] << (unsigned char)179 << (unsigned char)Arr[6][3] << (unsigned char)179 << (unsigned char)Arr[6][4] << (unsigned char)179 << (unsigned char)Arr[6][5] << (unsigned char)179 << (unsigned char)Arr[6][6] << (unsigned char)179 << (unsigned char)Arr[6][7] << (unsigned char)179 << (unsigned char)Arr[6][8] << (unsigned char)179 << (unsigned char)Arr[6][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "8 " << (unsigned char)179 << (unsigned char)Arr[7][0] << (unsigned char)179 << (unsigned char)Arr[7][1] << (unsigned char)179 << (unsigned char)Arr[7][2] << (unsigned char)179 << (unsigned char)Arr[7][3] << (unsigned char)179 << (unsigned char)Arr[7][4] << (unsigned char)179 << (unsigned char)Arr[7][5] << (unsigned char)179 << (unsigned char)Arr[7][6] << (unsigned char)179 << (unsigned char)Arr[7][7] << (unsigned char)179 << (unsigned char)Arr[7][8] << (unsigned char)179 << (unsigned char)Arr[7][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "9 " << (unsigned char)179 << (unsigned char)Arr[8][0] << (unsigned char)179 << (unsigned char)Arr[8][1] << (unsigned char)179 << (unsigned char)Arr[8][2] << (unsigned char)179 << (unsigned char)Arr[8][3] << (unsigned char)179 << (unsigned char)Arr[8][4] << (unsigned char)179 << (unsigned char)Arr[8][5] << (unsigned char)179 << (unsigned char)Arr[8][6] << (unsigned char)179 << (unsigned char)Arr[8][7] << (unsigned char)179 << (unsigned char)Arr[8][8] << (unsigned char)179 << (unsigned char)Arr[8][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)195 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)197 << (unsigned char)196 << (unsigned char)180 << endl <<
        "10" << (unsigned char)179 << (unsigned char)Arr[9][0] << (unsigned char)179 << (unsigned char)Arr[9][1] << (unsigned char)179 << (unsigned char)Arr[9][2] << (unsigned char)179 << (unsigned char)Arr[9][3] << (unsigned char)179 << (unsigned char)Arr[9][4] << (unsigned char)179 << (unsigned char)Arr[9][5] << (unsigned char)179 << (unsigned char)Arr[9][6] << (unsigned char)179 << (unsigned char)Arr[9][7] << (unsigned char)179 << (unsigned char)Arr[9][8] << (unsigned char)179 << (unsigned char)Arr[9][9] << (unsigned char)179 << endl <<
        "  " << (unsigned char)192 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)193 << (unsigned char)196 << (unsigned char)217 << endl;
}

void setShipAuto(long long int Arr[][10], bool& human) {
    int a{ 0 }; int b{ 0 }; int aCount{ 0 }; int bCount{ 0 }; int b1{ 0 }; int a1{ 0 }; int v1{ 0 };
    int shipSize{ 0 };
    unsigned char v{ 0 };
    bool aDir{ 0 }; bool bDir{ 0 }; bool rulle{ 0 };
    bool* pRulle = &rulle;
    bool* pHuman = &human;
    bool autoSet{ 1 };
    bool* pAutoSet = &autoSet;
    for (int i = 0; i < 4;) {
        do {
            a, b, v = 0;
            rulle = 0;
            a = rand() % 10;
            b = rand() % 10;
            if (a >= 0 && a < 10 && b >= 0 && b < 10) {
                checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
            }
            a1 = 0; b1 = 0;
            if (rulle) {
                Arr[a][b] = 219;
                i++;
            }
        } while (a < 0 || a>10 || b < 0 || b>10);
    }
    shipSize = 1;
    for (int i = 0; i < 3;) {
        do {
            a, b, v = 0;
            rulle = 0;
            a = rand() % 10;
            b = rand() % 10;
            if (a >= 0 && a < 10 && b >= 0 && b < 10) {
                aDir = 0; bDir = 0; rulle = 0; bCount = 0; aCount = 0; a1 = 0; b1 = 0;
                while (!aDir && !bDir) {
                    v1 = rand() % 4 + 1;
                    switch (v1) {
                    case 1:
                        if ((b + shipSize) >= 0 && (b + shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount += shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= bCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                b1++;
                            }
                            i++;
                        }
                        break;
                    case 2:
                        if ((b - shipSize) >= 0 && (b - shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount -= shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= bCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                b1--;
                            }
                            i++;
                        }
                        break;
                    case 3:
                        if ((a - shipSize) >= 0 && (a - shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount -= shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= aCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                a1--;
                            }
                            i++;
                        }
                        break;
                    case 4:
                        if ((a + shipSize) >= 0 && (a + shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount += shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= aCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                a1++;
                            }
                            i++;
                        }
                        break;
                    }
                }
            }
        } while (a < 0 || a>10 || b < 0 || b>10);
    }
    shipSize = 2;
    for (int i = 0; i < 2;) {
        do {
            a, b, v = 0;
            rulle = 0;
            a = rand() % 10;
            b = rand() % 10;
            if (a >= 0 && a < 10 && b >= 0 && b < 10) {
                aDir = 0; bDir = 0; rulle = 0; bCount = 0; aCount = 0; a1 = 0; b1 = 0;
                while (!aDir && !bDir) {
                    v1 = rand() % 4 + 1;
                    switch (v1) {
                    case 1:
                        if ((b + shipSize) >= 0 && (b + shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount += shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        a1 = 0; b1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= bCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                b1++;
                            }
                            i++;
                        }
                        break;
                    case 2:
                        if ((b - shipSize) >= 0 && (b - shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount -= shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        a1 = 0; b1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= bCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                b1--;
                            }
                            i++;
                        }
                        break;
                    case 3:
                        if ((a - shipSize) >= 0 && (a - shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount -= shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        a1 = 0; b1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= aCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                a1--;
                            }
                            i++;
                        }
                        break;
                    case 4:
                        if ((a + shipSize) >= 0 && (a + shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount += shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        a1 = 0; b1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= aCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                a1++;
                            }
                            i++;
                        }
                        break;
                    }
                }
            }
        } while (a < 0 || a>10 || b < 0 || b>10);
    }
    shipSize = 3;
    for (int i = 0; i < 1;) {
        do {
            a, b, v = 0;
            rulle = 0;
            a = rand() % 10;
            b = rand() % 10;
            if (a >= 0 && a < 10 && b >= 0 && b < 10) {
                aDir = 0; bDir = 0; rulle = 0; bCount = 0; aCount = 0; a1 = 0; b1 = 0;
                while (!aDir && !bDir) {
                    v1 = rand() % 4 + 1;
                    switch (v1) {
                    case 1:
                        if ((b + shipSize) >= 0 && (b + shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount += shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= bCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                b1++;
                            }
                            i++;
                        }
                        break;
                    case 2:
                        if ((b - shipSize) >= 0 && (b - shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount -= shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= bCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                b1--;
                            }
                            i++;
                        }
                        break;
                    case 3:
                        if ((a - shipSize) >= 0 && (a - shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount -= shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= aCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                a1--;
                            }
                            i++;
                        }
                        break;
                    case 4:
                        if ((a + shipSize) >= 0 && (a + shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount += shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= aCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                a1++;
                            }
                            i++;
                        }
                        break;
                    }
                }
            }
        } while (a < 0 || a>10 || b < 0 || b>10);
    }
}

void setShip(long long int Arr[][10], bool& human) {
    system("cls");
    int a{ 0 }; int b{ 0 }; int aCount{ 0 }; int bCount{ 0 }; int b1{ 0 }; int a1{ 0 }; int v1{ 0 };
    int shipSize{ 0 };
    unsigned char v{ 0 };
    bool aDir{ 0 }; bool bDir{ 0 }; bool rulle{ 0 };
    bool* pRulle = &rulle;
    bool* pHuman = &human;
    bool autoSet{ 0 };
    bool* pAutoSet = &autoSet;
    for (int i = 0; i < 4;) {
        do {
            a, b, v = 0;
            rulle = 0;
            system("cls");
            cout << "Input coordinats for " << 4 - i << " ship 1x1" << endl;
            showPlayerField(Arr);
            cout << "Input NUMBER: ";
            cin >> a;
            while (v != 'a' && v != 'b' && v != 'c' && v != 'd' && v != 'e' && v != 'f' && v != 'g' && v != 'h' && v != 'i' && v != 'j') {
                cout << "Input letter: ";
                cin >> v;
            }
            system("cls");
            switch (v) {
            case 'a':
                b = 1;
                break;
            case 'b':
                b = 2;
                break;
            case 'c':
                b = 3;
                break;
            case 'd':
                b = 4;
                break;
            case 'e':
                b = 5;
                break;
            case 'f':
                b = 6;
                break;
            case 'g':
                b = 7;
                break;
            case 'h':
                b = 8;
                break;
            case 'i':
                b = 9;
                break;
            case 'j':
                b = 10;
                break;
            }
            a--;
            b--;
            if (a >= 0 && a < 10 && b >= 0 && b < 10) {
                checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
            }
            else {
                system("cls");
                cout << "You need keep your ship on the field!" << endl;
                showPlayerField(Arr);
            }
            a1 = 0; b1 = 0;
            if (rulle) {
                Arr[a][b] = 219;
                i++;
                system("cls");
                showPlayerField(Arr);
            }
            else {
                system("cls");
                showPlayerField(Arr);
                cout << "Use coordinats from field!" << endl;
                Sleep(1500);
            }
        } while ((a < 0 || a>10) || (b < 0 || b>10));
    }
    shipSize = 1;
    for (int i = 0; i < 3;) {
        do {
            a, b, v = 0;
            rulle = 0;
            system("cls");
            cout << "Input coordinats for " << 3 - i << " ship 2x1" << endl;
            showPlayerField(Arr);
            cout << "Input NUMBER: ";
            cin >> a;
            while (v != 'a' && v != 'b' && v != 'c' && v != 'd' && v != 'e' && v != 'f' && v != 'g' && v != 'h' && v != 'i' && v != 'j') {
                cout << "Input letter: ";
                cin >> v;
            }
            system("cls");
            switch (v) {
            case 'a':
                b = 1;
                break;
            case 'b':
                b = 2;
                break;
            case 'c':
                b = 3;
                break;
            case 'd':
                b = 4;
                break;
            case 'e':
                b = 5;
                break;
            case 'f':
                b = 6;
                break;
            case 'g':
                b = 7;
                break;
            case 'h':
                b = 8;
                break;
            case 'i':
                b = 9;
                break;
            case 'j':
                b = 10;
                break;
            }
            a--;
            b--;
            if (a >= 0 && a < 10 && b >= 0 && b < 10) {
                aDir = 0; bDir = 0; rulle = 0; bCount = 0; aCount = 0; a1 = 0; b1 = 0;
                while (!aDir && !bDir) {
                    v1 = 0;
                    cout << "Chose direction your ship from start point:" << endl <<
                        "1)RIGHT\n" <<
                        "2)LEFT\n" <<
                        "3)UP\n" <<
                        "4)DOWN\nMake your chose: ";
                    cin >> v1;
                    system("cls");
                    switch (v1) {
                    case 1:
                        if ((b + shipSize) >= 0 && (b + shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount += shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= bCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                b1++;
                            }
                            i++;
                        }
                        break;
                    case 2:
                        if ((b - shipSize) >= 0 && (b - shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount -= shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= bCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                b1--;
                            }
                            i++;
                        }
                        break;
                    case 3:
                        if ((a - shipSize) >= 0 && (a - shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount -= shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= aCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                a1--;
                            }
                            i++;
                        }
                        break;
                    case 4:
                        if ((a + shipSize) >= 0 && (a + shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount += shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= aCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                a1++;
                            }
                            i++;
                        }
                        break;
                    }
                }
            }
            else {
                system("cls");
                showPlayerField(Arr);
                cout << "Use coordinats from field!" << endl;
                Sleep(1500);
            }
        } while (a < 0 || a>10 || b < 0 || b>10);
    }
    shipSize = 2;
    for (int i = 0; i < 2;) {
        do {
            rulle = 0;
            a, b, v = 0;
            system("cls");
            cout << "Input coordinats for " << 2 - i << " ship 3x1" << endl;
            showPlayerField(Arr);
            cout << "Input NUMBER: ";
            cin >> a;
            while (v != 'a' && v != 'b' && v != 'c' && v != 'd' && v != 'e' && v != 'f' && v != 'g' && v != 'h' && v != 'i' && v != 'j') {
                cout << "Input letter: ";
                cin >> v;
            }
            system("cls");
            switch (v) {
            case 'a':
                b = 1;
                break;
            case 'b':
                b = 2;
                break;
            case 'c':
                b = 3;
                break;
            case 'd':
                b = 4;
                break;
            case 'e':
                b = 5;
                break;
            case 'f':
                b = 6;
                break;
            case 'g':
                b = 7;
                break;
            case 'h':
                b = 8;
                break;
            case 'i':
                b = 9;
                break;
            case 'j':
                b = 10;
                break;
            }
            a--;
            b--;
            if (a >= 0 && a < 10 && b >= 0 && b < 10) {
                aDir = 0; bDir = 0; rulle = 0; bCount = 0; aCount = 0; a1 = 0; b1 = 0;
                while (!aDir && !bDir) {
                    v1 = 0;
                    cout << "Chose direction your ship from start point:" << endl <<
                        "1)RIGHT\n" <<
                        "2)LEFT\n" <<
                        "3)UP\n" <<
                        "4)DOWN\nMake your chose: ";
                    cin >> v1;
                    system("cls");
                    switch (v1) {
                    case 1:
                        if ((b + shipSize) >= 0 && (b + shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount += shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= bCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                b1++;
                            }
                            i++;
                        }
                        break;
                    case 2:
                        if ((b - shipSize) >= 0 && (b - shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount -= shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= bCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                b1--;
                            }
                            i++;
                        }
                        break;
                    case 3:
                        if ((a - shipSize) >= 0 && (a - shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount -= shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= aCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                a1--;
                            }
                            i++;
                        }
                        break;
                    case 4:
                        if ((a + shipSize) >= 0 && (a + shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount += shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= aCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                a1++;
                            }
                            i++;
                        }
                        break;
                    }
                }
            }
            else {
                system("cls");
                showPlayerField(Arr);
                cout << "Use coordinats from field!" << endl;
                Sleep(1500);
            }
        } while (a < 0 || a>10 || b < 0 || b>10);
    }
    system("cls");
    cout << "Input coordinats for 1 ships 4x1" << endl;
    shipSize = 3;
    for (int i = 0; i < 1;) {
        do {
            a, b, v = 0;
            rulle = 0;
            showPlayerField(Arr);
            cout << "Input NUMBER: ";
            cin >> a;
            while (v != 'a' && v != 'b' && v != 'c' && v != 'd' && v != 'e' && v != 'f' && v != 'g' && v != 'h' && v != 'i' && v != 'j') {
                cout << "Input letter: ";
                cin >> v;
            }
            system("cls");
            switch (v) {
            case 'a':
                b = 1;
                break;
            case 'b':
                b = 2;
                break;
            case 'c':
                b = 3;
                break;
            case 'd':
                b = 4;
                break;
            case 'e':
                b = 5;
                break;
            case 'f':
                b = 6;
                break;
            case 'g':
                b = 7;
                break;
            case 'h':
                b = 8;
                break;
            case 'i':
                b = 9;
                break;
            case 'j':
                b = 10;
                break;
            }
            a--;
            b--;
            if (a >= 0 && a < 10 && b >= 0 && b < 10) {
                aDir = 0; bDir = 0; rulle = 0; bCount = 0; aCount = 0; a1 = 0; b1 = 0;
                while (!aDir && !bDir) {
                    v1 = 0;
                    cout << "Chose direction your ship from start point:" << endl <<
                        "1)RIGHT\n" <<
                        "2)LEFT\n" <<
                        "3)UP\n" <<
                        "4)DOWN\nMake your chose: ";
                    cin >> v1;
                    system("cls");
                    switch (v1) {
                    case 1:
                        if ((b + shipSize) >= 0 && (b + shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount += shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= bCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                b1++;
                            }
                            i++;
                        }
                        break;
                    case 2:
                        if ((b - shipSize) >= 0 && (b - shipSize) <= 9) {
                            bDir = 1; aDir = 0;
                            bCount -= shipSize; aCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        b1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= bCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                b1--;
                            }
                            i++;
                        }
                        break;
                    case 3:
                        if ((a - shipSize) >= 0 && (a - shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount -= shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j >= aCount; j--) {
                                Arr[a + a1][b + b1] = 219;
                                a1--;
                            }
                            i++;
                        }
                        break;
                    case 4:
                        if ((a + shipSize) >= 0 && (a + shipSize) <= 9) {
                            bDir = 0; aDir = 1;
                            aCount += shipSize; bCount = 99; //одно не должно случится
                            checkShipPlace(Arr, a, a1, b, b1, aCount, bCount, aDir, bDir, *pRulle, *pHuman, *pAutoSet);
                        }
                        else {
                            system("cls");
                            cout << "You need keep your ship on the field!" << endl;
                            showPlayerField(Arr);
                        }
                        a1 = 0;
                        if (rulle) {
                            for (int j = 0; j <= aCount; j++) {
                                Arr[a + a1][b + b1] = 219;
                                a1++;
                            }
                            i++;
                        }
                        break;
                    }
                }
            }
            else {
                system("cls");
                showPlayerField(Arr);
                cout << "Use coordinats from field!" << endl;
                Sleep(1500);
            }
        } while (a < 0 || a>10 || b < 0 || b>10);
    }
    system("cls");
    showPlayerField(Arr);
}

void shipSunken(long long int Arr[][10], int a, int b) {
    int a1{ 0 }; int b1{ 0 };

    if (a == 0 && b != 0 && b != 9) {
        for (int i = a + 1; i <= 100; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                Arr[i][b - 1] = 249; Arr[i][b + 1] = 249;
                Arr[a][b - 1] = 249; Arr[a][b + 1] = 249;

                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 > 0 && (a1 + a) < 9) {
            Arr[a + a1 + 1][b] = 249; Arr[a + a1 + 1][b + 1] = 249; Arr[a + a1 + 1][b - 1] = 249;

        }
        for (int i = b + 1; i <= 100; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1++;
                Arr[a + 1][i] = 249;
                Arr[a][b - 1] = 249; Arr[a + 1][b - 1] = 249; Arr[a + 1][b] = 249;
                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 > 0 && (b1 + b) < 9) {
            Arr[a][b + b1 + 1] = 249; Arr[a + 1][b + b1 + 1] = 249;
        }
        for (int i = b - 1; i >= -10; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;

                b1--;
                Arr[a + 1][i] = 249;

                Arr[a][b + 1] = 249; Arr[a + 1][b] = 249; Arr[a + 1][b + 1] = 249;

                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 < 0 && (b1 + b)>0) {
            Arr[a][b + b1 - 1] = 249; Arr[a + 1][b + b1 - 1] = 249;

        }
        if (Arr[a + 1][b] == 32 && Arr[a][b - 1] == 32 && Arr[a][b + 1] == 32) {
            Arr[a + 1][b] = 249; Arr[a + 1][b - 1] = 249; Arr[a + 1][b + 1] = 249; Arr[a][b - 1] = 249; Arr[a][b + 1] = 249;

        }
        if (Arr[a + 1][b] == 32) {
            Arr[a + 1][b] = 249; Arr[a + 1][b + 1] = 249; Arr[a + 1][b - 1] = 249;

        }
        if (Arr[a][b - 1] == 32) {
            Arr[a][b - 1] = 249; Arr[a + 1][b - 1] = 249;

        }
        if (Arr[a][b + 1] == 32) {
            Arr[a][b + 1] = 249; Arr[a + 1][b + 1] = 249;

        }
    }
    else if (a == 9 && b != 0 && b != 9) {
        for (int i = a - 1; i >= -10; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;

                a1--;
                Arr[i][b - 1] = 249; Arr[i][b + 1] = 249;
                Arr[a][b - 1] = 249; Arr[a][b + 1] = 249;

                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 < 0 && (a1 + a)>0) {
            Arr[a + a1 - 1][b] = 249; Arr[a + a1 - 1][b + 1] = 249; Arr[a + a1 - 1][b - 1] = 249;

        }
        for (int i = b + 1; i <= 100; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;

                b1++;
                Arr[a - 1][i] = 249;
                Arr[a][b - 1] = 249; Arr[a - 1][b - 1] = 249; Arr[a - 1][b] = 249;

                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 > 0 && (b1 + b) < 9) {
            Arr[a][b + b1 + 1] = 249; Arr[a - 1][b + b1 + 1] = 249;

        }
        for (int i = b - 1; i >= -10; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;

                b1--;
                Arr[a - 1][i] = 249;
                Arr[a][b + 1] = 249; Arr[a - 1][b] = 249; Arr[a - 1][b + 1] = 249;

                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 < 0 && (b1 + b)>0) {
            Arr[a][b + b1 - 1] = 249; Arr[a - 1][b + b1 - 1] = 249;

        }
        if (Arr[a - 1][b] == 32 && Arr[a][b - 1] == 32 && Arr[a][b + 1] == 32) {
            Arr[a - 1][b] = 249; Arr[a - 1][b - 1] = 249; Arr[a - 1][b + 1] = 249; Arr[a][b - 1] = 249; Arr[a][b + 1] = 249;

        }
        if (Arr[a - 1][b] == 32) {
            Arr[a - 1][b] = 249; Arr[a - 1][b + 1] = 249; Arr[a - 1][b - 1] = 249;

        }
        if (Arr[a][b - 1] == 32) {
            Arr[a][b - 1] = 249; Arr[a - 1][b - 1] = 249;

        }
        if (Arr[a][b + 1] == 32) {
            Arr[a][b + 1] = 249; Arr[a - 1][b + 1] = 249;

        }
    }
    else if (b == 0 && a != 0 && a != 9) {
        for (int i = a + 1; i <= 100; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;

                a1++;
                Arr[i][b + 1] = 249;
                Arr[a - 1][b] = 249; Arr[a - 1][b + 1] = 249; Arr[a][b + 1] = 249;

                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 > 0 && (a1 + a) < 9) {
            Arr[a + a1 + 1][b] = 249; Arr[a + a1 + 1][b + 1] = 249;

        }
        for (int i = a - 1; i >= -10; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;

                a1--;
                Arr[i][b + 1] = 249;
                Arr[a + 1][b] = 249; Arr[a][b + 1] = 249; Arr[a + 1][b + 1] = 249;

                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 < 0 && (a1 + a)>0) {
            Arr[a + a1 - 1][b] = 249; Arr[a + a1 - 1][b + 1] = 249;

        }
        for (int i = b + 1; i <= 100; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1++;
                Arr[a - 1][i] = 249; Arr[a + 1][i] = 249;
                Arr[a + 1][b] = 249; Arr[a - 1][b] = 249;

                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 > 0 && (b1 + b) < 9) {
            Arr[a][b + b1 + 1] = 249; Arr[a + 1][b + b1 + 1] = 249; Arr[a - 1][b + b1 + 1] = 249;

        }
        if (Arr[a + 1][b] == 32 && Arr[a - 1][b] == 32 && Arr[a][b + 1] == 32) {
            Arr[a + 1][b] = 249; Arr[a - 1][b] = 249; Arr[a + 1][b + 1] = 249; Arr[a - 1][b + 1] = 249; Arr[a][b + 1] = 249;

        }
        if (Arr[a - 1][b] == 32) {
            Arr[a - 1][b] = 249; Arr[a - 1][b + 1] = 249;

        }
        if (Arr[a + 1][b] == 32) {
            Arr[a + 1][b] = 249; Arr[a + 1][b + 1] = 249;

        }
        if (Arr[a][b + 1] == 32) {
            Arr[a][b + 1] = 249; Arr[a + 1][b + 1] = 249; Arr[a - 1][b + 1] = 249;

        }
    }
    else if (b == 9 && a != 0 && a != 9) {
        for (int i = a + 1; i <= 100; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                Arr[i][b - 1] = 249;
                Arr[a - 1][b] = 249; Arr[a - 1][b - 1] = 249; Arr[a][b - 1] = 249;

                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 > 0 && (a1 + a) < 9) {
            Arr[a + a1 + 1][b] = 249; Arr[a + a1 + 1][b - 1] = 249;

        }
        for (int i = a - 1; i >= -10; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1--;
                Arr[i][b - 1] = 249;
                Arr[a + 1][b] = 249; Arr[a][b - 1] = 249; Arr[a + 1][b - 1] = 249;
                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 < 0 && (a1 + a)>0) {
            Arr[a + a1 - 1][b] = 249; Arr[a + a1 - 1][b - 1] = 249;

        }
        for (int i = b - 1; i >= -10; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1--;
                Arr[a - 1][i] = 249; Arr[a + 1][i] = 249;
                Arr[a - 1][b] = 249; Arr[a + 1][b] = 249;
                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 < 0 && (b1 + b)>0) {
            Arr[a][b + b1 - 1] = 249; Arr[a + 1][b + b1 - 1] = 249; Arr[a - 1][b + b1 - 1] = 249;

        }
        if (Arr[a + 1][b] == 32 && Arr[a - 1][b] == 32 && Arr[a][b + 1] == 32) {
            Arr[a + 1][b] = 249; Arr[a - 1][b] = 249; Arr[a + 1][b - 1] = 249; Arr[a - 1][b - 1] = 249; Arr[a][b - 1] = 249;

        }
        if (Arr[a + 1][b] == 32) {
            Arr[a + 1][b] = 249; Arr[a + 1][b - 1] = 249;

        }
        if (Arr[a - 1][b] == 32) {
            Arr[a - 1][b] = 249; Arr[a - 1][b - 1] = 249;

        }
        if (Arr[a][b - 1] == 32) {
            Arr[a][b - 1] = 249; Arr[a + 1][b - 1] = 249; Arr[a - 1][b - 1] = 249;

        }
    }
    else if (a == 0 && b == 0) {
        for (int i = a + 1; i <= 100; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;

                a1++;
                Arr[i][b + 1] = 249;
                Arr[a][b + 1] = 249;

                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 > 0 && (a1 + a) < 9) {
            Arr[a + a1 + 1][b] = 249; Arr[a + a1 + 1][b + 1] = 249;

        }
        for (int i = b + 1; i <= 100; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;

                b1++;
                Arr[a + 1][i] = 249;
                Arr[a + 1][b] = 249;

                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 > 0 && (b1 + b) < 9) {
            Arr[a][b + b1 + 1] = 249; Arr[a + 1][b + b1 + 1] = 249;

        }
        if (Arr[a + 1][b] == 32 && Arr[a][b + 1] == 32) {
            Arr[a + 1][b] = 249; Arr[a + 1][b + 1] = 249; Arr[a][b + 1] = 249;

        }
        if (Arr[a + 1][b] == 32) {
            Arr[a + 1][b] = 249; Arr[a + 1][b + 1] = 249;

        }
        if (Arr[a][b + 1] == 32) {
            Arr[a][b + 1] = 249; Arr[a + 1][b + 1] = 249;

        }
    }
    else if (a == 9 && b == 9) {
        for (int i = a - 1; i >= -10; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;

                a1--;
                Arr[i][b - 1] = 249;
                Arr[a][b - 1] = 249;

                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 < 0 && (a1 + a)>0) {
            Arr[a + a1 - 1][b] = 249; Arr[a + a1 - 1][b - 1] = 249;

        }
        for (int i = b - 1; i >= -10; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;

                b1--;
                Arr[a - 1][i] = 249;
                Arr[a - 1][b] = 249;

                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 < 0 && (b1 + b)>0) {
            Arr[a][b + b1 - 1] = 249; Arr[a - 1][b + b1 - 1] = 249;

        }
        if (Arr[a - 1][b] == 32 && Arr[a][b - 1] == 32) {
            Arr[a - 1][b] = 249; Arr[a - 1][b - 1] = 249; Arr[a][b - 1] = 249;

        }
        if (Arr[a - 1][b] == 32) {
            Arr[a - 1][b] = 249; Arr[a - 1][b - 1] = 249;

        }
        if (Arr[a][b - 1] == 32) {
            Arr[a][b - 1] = 249; Arr[a - 1][b - 1] = 249;

        }
    }
    else if (a == 0 && b == 9) {
        for (int i = a + 1; i <= 100; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;

                a1++;
                Arr[i][b - 1] = 249;
                Arr[a][b - 1] = 249;

                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 > 0 && (a1 + a) < 9) {
            Arr[a + a1 + 1][b] = 249; Arr[a + a1 + 1][b + 1] = 249; Arr[a + a1 + 1][b - 1] = 249;

        }
        for (int i = b - 1; i >= -10; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;

                b1--;
                Arr[a + 1][i] = 249;
                Arr[a + 1][b] = 249;

                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 < 0 && (b1 + b)>0) {
            Arr[a][b + b1 - 1] = 249; Arr[a + 1][b + b1 - 1] = 249;

        }
        if (Arr[a + 1][b] == 32) {
            Arr[a + 1][b] = 249; Arr[a + 1][b - 1] = 249;

        }
        if (Arr[a][b - 1] == 32) {
            Arr[a][b - 1] = 249; Arr[a + 1][b - 1] = 249;

        }
    }
    else if (a == 9 && b == 0) {
        for (int i = a - 1; i >= -10; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;

                a1--;
                Arr[i][b + 1] = 249;
                Arr[a][b + 1] = 249;

                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 < 0 && (a1 + a)>0) {
            Arr[a + a1 - 1][b] = 249; Arr[a + a1 - 1][b + 1] = 249;

        }
        for (int i = b + 1; i <= 100; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;

                b1++;
                Arr[a - 1][i] = 249;
                Arr[a - 1][b] = 249;

                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 > 0 && (b1 + b) < 9) {
            Arr[a][b + b1 + 1] = 249; Arr[a - 1][b + b1 + 1] = 249;

        }
        if (Arr[a - 1][b] == 32) {
            Arr[a - 1][b] = 249; Arr[a - 1][b + 1] = 249;

        }
        if (Arr[a][b + 1] == 32) {
            Arr[a][b + 1] = 249; Arr[a - 1][b + 1] = 249;

        }
    }
    else {
        for (int i = a + 1; i <= 100; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                Arr[i][b - 1] = 249; Arr[i][b + 1] = 249;
                Arr[a - 1][b] = 249; Arr[a - 1][b - 1] = 249; Arr[a - 1][b + 1] = 249; Arr[a][b - 1] = 249; Arr[a][b + 1] = 249;
                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 > 0 && (a1 + a) < 9) {
            Arr[a + a1 + 1][b] = 249; Arr[a + a1 + 1][b + 1] = 249; Arr[a + a1 + 1][b - 1] = 249;
        }
        for (int i = a - 1; i >= -10; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1--;
                Arr[i][b - 1] = 249; Arr[i][b + 1] = 249;
                Arr[a + 1][b] = 249; Arr[a][b - 1] = 249; Arr[a][b + 1] = 249; Arr[a + 1][b + 1] = 249; Arr[a + 1][b - 1] = 249;
                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (a1 < 0 && (a1 + a)>0) {
            Arr[a + a1 - 1][b] = 249; Arr[a + a1 - 1][b + 1] = 249; Arr[a + a1 - 1][b - 1] = 249;
        }
        for (int i = b + 1; i <= 20; i++) {                 //b!=9
            if (Arr[a][i] == 47) {                          
                Arr[a][i] = 88;
                b1++;
                Arr[a - 1][i] = 249; Arr[a + 1][i] = 249;
                Arr[a][b - 1] = 249; Arr[a - 1][b - 1] = 249; Arr[a + 1][b - 1] = 249; Arr[a + 1][b] = 249; Arr[a - 1][b] = 249;
                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 > 0 && (b1 + b) < 9) {
            Arr[a][b + b1 + 1] = 249; Arr[a + 1][b + b1 + 1] = 249; Arr[a - 1][b + b1 + 1] = 249;
        }
        for (int i = b - 1; i >= -10; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1--;
                Arr[a - 1][i] = 249; Arr[a + 1][i] = 249;
                Arr[a][b + 1] = 249; Arr[a - 1][b] = 249; Arr[a + 1][b] = 249; Arr[a - 1][b + 1] = 249; Arr[a + 1][b + 1] = 249;
                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 < 0 && (b1 + b)>0) {
            Arr[a][b + b1 - 1] = 249; Arr[a + 1][b + b1 - 1] = 249; Arr[a - 1][b + b1 - 1] = 249;
        }
        if (Arr[a - 1][b] == 32) {
            Arr[a - 1][b] = 249; Arr[a - 1][b + 1] = 249; Arr[a - 1][b - 1] = 249;
        }
        if (Arr[a + 1][b] == 32) {
            Arr[a + 1][b] = 249; Arr[a + 1][b + 1] = 249; Arr[a + 1][b - 1] = 249;
        }
        if (Arr[a][b - 1] == 32) {
            Arr[a][b - 1] = 249; Arr[a + 1][b - 1] = 249; Arr[a - 1][b - 1] = 249;
        }
        if (Arr[a][b + 1] == 32) {
            Arr[a][b + 1] = 249; Arr[a + 1][b + 1] = 249; Arr[a - 1][b + 1] = 249;
        }
    }
}

void shipSunkenDumbShoting(long long int Arr[][10], int a, int b) {
    int a1{ 0 }; int b1{ 0 };
    if (a == 0 && b != 0 && b != 9) {
        for (int i = a + 1; i < 10; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b + 1; i < 10; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1++;
                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        if (b1 > 0 && (b1 + b) < 9) {
        }
        for (int i = b - 1; i > 0; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1--;
                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else if (a == 9 && b != 0 && b != 9) {
        for (int i = a - 1; i > 0; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1--;
                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b + 1; i < 10; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1++;
                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b - 1; i > 0; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1--;
                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else if (b == 0 && a != 0 && a != 9) {
        for (int i = a + 1; i < 10; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = a - 1; i > 0; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1--;
                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b + 1; i < 10; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1++;
                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else if (b == 9 && a != 0 && a != 9) {
        for (int i = a + 1; i < 10; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = a - 1; i > 0; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1--;
                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b - 1; i > 0; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1--;
                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else if (a == 0 && b == 0) {
        for (int i = a + 1; i < 10; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b + 1; i < 10; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1++;
                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else if (a == 9 && b == 9) {
        for (int i = a - 1; i > 0; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1--;
                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b - 1; i > 0; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1--;
                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else if (a == 0 && b == 9) {
        for (int i = a + 1; i < 10; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b - 1; i > 0; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1--;
                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else if (a == 9 && b == 0) {
        for (int i = a - 1; i > 0; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1--;
                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b + 1; i < 10; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1++;
                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else {
        for (int i = a + 1; i < 10; i++) {                 //a!=9
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1++;
                if ((a + a1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = a - 1; i >= 0; i--) {                 //a!=0                   
            if (Arr[i][b] == 47) {
                Arr[i][b] = 88;
                a1--;
                if ((a + a1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b + 1; i < 10; i++) {                 //b!=9
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1++;
                if ((b + b1) == HW - 1) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b - 1; i > 0; i--) {                 //b!=0
            if (Arr[a][i] == 47) {
                Arr[a][i] = 88;
                b1--;
                if ((b + b1) == HW - 10) {                   //проверка границ
                    break;
                }
            }
            else {
                break;
            }
        }
    }
}

void shipDamaged(long long int Arr[][10], int a, int b, bool& stupid, bool& human, bool& cheatPl) {
    int a1{ 0 }; int b1{ 0 };
    bool* pCheatPl = &cheatPl;
    bool dam{ 0 };
    int chekCount{ 0 };
    while (chekCount <= 1) {
        dam = false;
        Arr[a][b] = 47;
        for (int i = a; i < 100; i++) {
            if (i <= 9) {
                if (Arr[i][b] == 88 || Arr[i][b] == 249 || Arr[i][b] == 32) {
                    break;
                }
                if (Arr[i][b] == 219) {
                    dam = true;
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = a; i > -100; i--) {
            if (i >= 0) {
                if (Arr[i][b] == 88 || Arr[i][b] == 249 || Arr[i][b] == 32) {
                    break;
                }
                if (Arr[i][b] == 219) {
                    dam = true;
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b; i < 100; i++) {
            if (i <= 9) {
                if (Arr[a][i] == 88 || Arr[a][i] == 249 || Arr[a][i] == 32) {
                    break;
                }
                if (Arr[a][i] == 219) {
                    dam = true;
                    break;
                }
            }
            else {
                break;
            }
        }
        for (int i = b; i > -100; i--) {
            if (i >= 0) {
                if (Arr[a][i] == 88 || Arr[a][i] == 249 || Arr[a][i] == 32) {
                    break;
                }
                if (Arr[a][i] == 219) {
                    dam = true;
                    break;
                }
            }
            else {
                break;
            }
        }
        chekCount++;
    }
    if (!dam) {
        system("cls");
        cout << "SHIP IS SUNKEN!" << endl;
        Sleep(500);
        system("cls");
        sunkAnimated();
        Arr[a][b] = 88;
        stupid ? shipSunkenDumbShoting(Arr, a, b) : shipSunken(Arr, a, b);
        cout << "////// FIELD DURING ACTION //////" << endl;
        !human || cheatPl ? showPlayerField(Arr) : showNPCField(Arr);
        Sleep(2000);
    }
    else {
        system("cls");
        cout << "SHIP IS DAMAGED!" << endl;
        Sleep(500);
        system("cls");
        damagedAnimated();
        Arr[a][b] = 47;
        cout << "////// FIELD DURING ACTION //////" << endl;
        !human || cheatPl ? showPlayerField(Arr) : showNPCField(Arr);
        Sleep(2000);
    }
}

void makeMove(long long int Arr1[][10], long long int Arr2[][10], bool& win, bool& stupid, bool& human, bool& cheatPl) {
    int a, b{ 0 };
    unsigned char v{ 0 };
    bool miss{ false };
    bool* pWin = &win;
    bool* pStupid = &stupid;
    bool* pCheatPl = &cheatPl;
    bool* pHuman = &human;
    while (!miss && !win) {
        do {
            system("cls");
            cout << "Input coordinats for your move" << endl;
            cout << "///\t/// 1P ///\t///\n";
            showPlayerField(Arr1);
            cout << "///\t/// 2P ///\t///\n";
            cheatPl ? showPlayerField(Arr2) : showNPCField(Arr2);
            cout << endl;
            a, b, v = 0;
                cout << "Input NUMBER: ";
                cin >> a;
                while (v != 'a' && v != 'b' && v != 'c' && v != 'd' && v != 'e' && v != 'f' && v != 'g' && v != 'h' && v != 'i' && v != 'j') {
                    cout << "Input LETTER: ";
                    cin >> v;
                }
                system("cls");
            switch (v) {
            case 'a':
                b = 1;
                break;
            case 'b':
                b = 2;
                break;
            case 'c':
                b = 3;
                break;
            case 'd':
                b = 4;
                break;
            case 'e':
                b = 5;
                break;
            case 'f':
                b = 6;
                break;
            case 'g':
                b = 7;
                break;
            case 'h':
                b = 8;
                break;
            case 'i':
                b = 9;
                break;
            case 'j':
                b = 10;
                break;
            }
            a--;
            b--;
        } while (a < 0 || a>10 || b < 0 || b>10 || Arr2[a][b] == 249 || Arr2[a][b] == 88 || Arr2[a][b] == 47);
        if (a >= 0 && a < 10 && b >= 0 && b < 10) {   //проверить 219 ранил убил
            if (Arr2[a][b] == 32) {
                Arr2[a][b] = 249;
                system("cls");
                cout << "MISS!!!\n";           //beep
                Sleep(500);
                system("cls");
                missAnimated();
                cout << "///\t/// 1P ///\t///\n";
                showPlayerField(Arr1);
                cout << "///\t/// 2P ///\t///\n";
                cheatPl ? showPlayerField(Arr2) : showNPCField(Arr2);
                cout << endl;
                Sleep(1500);
                miss = true;
            }
            else {
                shipDamaged(Arr2, a, b, *pStupid, *pHuman, *pCheatPl);
            }
        }
        else {
            system("cls");
            cout << "You need keep your ship on the field!" << endl;
            cout << "///\t/// 1P ///\t///\n";
            showPlayerField(Arr1);
            cout << "///\t/// 2P ///\t///\n";
            cheatPl ? showPlayerField(Arr2) : showNPCField(Arr2);
        }
        checkWin(Arr1, Arr2, *pWin);
        system("cls");
    }
}

void makeAutoMove(long long int Arr1[][10], long long int Arr2[][10], bool& win, bool& stupid, bool& human, bool& cheatPC, bool& cheatPl) {
    int a{ 0 }; int b{ 0 };
    unsigned char v{ 0 };
    bool miss{ false };
    bool* pStupid = &stupid;
    bool* pHuman = &human;
    bool* pWin = &win;
    bool* pCheatPC = &cheatPC;
    bool* pCheatPl = &cheatPl;
    bool moveEnd{ 0 };
    int dirI{ 0 };
    int dirJ{ 0 };
    while (!miss && !win) {
        if (!cheatPC) {
            do {
                moveEnd = 0;
                if (!stupid) {
                    for (int i = 0; i < 10; i++) {
                        if (moveEnd) {
                            break;
                        }
                        for (int j = 0; j < 10; j++) {
                            if (moveEnd) {
                                break;
                            }
                            if (Arr1[i][j] == 47) {
                                moveEnd = 0;
                                if (i == 0 && j != 0 && j != 9) {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                    //по гор или вер
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //i!=9
                                                        if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            i++;
                                                            dirI = 1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                            else {
                                                if ((rand() % 2 + 1) == 1) {                                                //непредсказуемая стрельба по гор
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //j!=9
                                                            if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                j++;
                                                                dirJ = 1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                                else {
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //j!=0
                                                            if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                j--;
                                                                dirJ = -1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=9
                                                    if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i++;
                                                        dirI = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=9
                                                    if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j++;
                                                        dirJ = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == -1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=0
                                                    if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j--;
                                                        dirJ = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (i == 9 && j != 0 && j != 9) {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                    //по гор или вер                                    
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //i!=0
                                                        if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            i--;
                                                            dirI = -1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }

                                            }
                                            else {
                                                if ((rand() % 2 + 1) == 1) {                                                //непредсказуемая стрельба по гор
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //j!=9
                                                            if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                j++;
                                                                dirJ = 1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                                else {
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //j!=0
                                                            if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                j--;
                                                                dirJ = -1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == -1) {                                                           //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=0
                                                    if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i--;
                                                        dirI = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=9
                                                    if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j++;
                                                        dirJ = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == -1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=0
                                                    if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j--;
                                                        dirJ = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (j == 0 && i != 0 && i != 9) {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                    //по гор или вер
                                                if ((rand() % 2 + 1) == 1) {                                                //непредсказуемая стрельба по верт
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //i!=9
                                                            if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                i++;
                                                                dirI = 1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                                else {
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //i!=0
                                                            if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                i--;
                                                                dirI = -1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //j!=9
                                                        if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            j++;
                                                            dirJ = 1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=9
                                                    if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i++;
                                                        dirI = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirI == -1) {                                                           //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=0
                                                    if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i--;
                                                        dirI = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=9
                                                    if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j++;
                                                        dirJ = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (j == 9 && i != 0 && i != 9) {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                    //по гор или вер
                                                if ((rand() % 2 + 1) == 1) {                                                //непредсказуемая стрельба по верт
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //i!=9
                                                            if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                i++;
                                                                dirI = 1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                                else {
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //i!=0
                                                            if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                i--;
                                                                dirI = -1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //j!=0
                                                        if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            j--;
                                                            dirJ = -1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=9
                                                    if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i++;
                                                        dirI = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirI == -1) {                                                           //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=0
                                                    if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i--;
                                                        dirI = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == -1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=0
                                                    if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j--;
                                                        dirJ = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (i == 0 && j == 0) {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                //по гор или вер
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //i!=9
                                                        if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            i++;
                                                            dirI = 1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                            else {
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //j!=9
                                                        if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            j++;
                                                            dirJ = 1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=9
                                                    if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i++;
                                                        dirI = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=9
                                                    if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j++;
                                                        dirJ = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (i == 9 && j == 9) {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                    //по гор или вер
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //i!=0
                                                        if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            i--;
                                                            dirI = -1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                            else {
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //j!=0
                                                        if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            j--;
                                                            dirJ = -1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == -1) {                                                           //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=0
                                                    if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i--;
                                                        dirI = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == -1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=0
                                                    if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j--;
                                                        dirJ = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (i == 0 && j == 9) {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                //по гор или вер
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //i!=9
                                                        if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            i++;
                                                            dirI = 1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                            else {
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //j!=0
                                                        if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            j--;
                                                            dirJ = 1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=9
                                                    if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i++;
                                                        dirI = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == -1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=0
                                                    if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j--;
                                                        dirJ = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (i == 9 && j == 0) {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                //по гор или вер
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //i!=0
                                                        if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            i--;
                                                            dirI = -1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                            else {
                                                while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                    if (Arr1[i][j] == 47) {                                              //j!=9
                                                        if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                            dirJ = 0; dirI = 0;
                                                            break;
                                                        }
                                                        else {
                                                            j++;
                                                            dirJ = 1;
                                                        }
                                                    }
                                                    if (Arr1[i][j] != 47) {
                                                        a = i; b = j;
                                                        moveEnd = 1;
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == -1) {                                                           //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=0
                                                    if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i--;
                                                        dirI = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=9
                                                    if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j++;
                                                        dirJ = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    while (!moveEnd) {
                                        if (!dirI && !dirJ) {
                                            if ((rand() % 2 + 1) == 1) {                                                //по гор или вер
                                                if ((rand() % 2 + 1) == 1) {                                                //непредсказуемая стрельба по верт
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //i!=9
                                                            if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                                dirI = 0; dirJ = 0;
                                                                break;
                                                            }
                                                            else {
                                                                i++;
                                                                dirI = 1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                                else {
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //i!=0
                                                            if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                                dirI = 0; dirJ = 0;
                                                                break;
                                                            }
                                                            else {
                                                                i--;
                                                                dirI = -1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if ((rand() % 2 + 1) == 1) {                                                //непредсказуемая стрельба по гор
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //j!=9
                                                            if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                j++;
                                                                dirJ = 1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                                else {
                                                    while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                        if (Arr1[i][j] == 47) {                                              //j!=0
                                                            if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                                dirJ = 0; dirI = 0;
                                                                break;
                                                            }
                                                            else {
                                                                j--;
                                                                dirJ = -1;
                                                            }
                                                        }
                                                        if (Arr1[i][j] != 47) {
                                                            a = i; b = j;
                                                            moveEnd = 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if (dirI == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=9
                                                    if (i + 1 == 10 || Arr1[i + 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i++;
                                                        dirI = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirI == -1) {                                                           //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //i!=0
                                                    if (i - 1 == 10 || Arr1[i - 1][j] == 249) {                      //проверка границ массива
                                                        dirI = 0; dirJ = 0;
                                                        break;
                                                    }
                                                    else {
                                                        i--;
                                                        dirI = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == 1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=9
                                                    if (j + 1 == 10 || Arr1[i][j + 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j++;
                                                        dirJ = 1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                        if (dirJ == -1) {                                                            //продолжает меткую стрельбу
                                            while (Arr1[i][j] == 47) {                                               //проверяет расположение ранненого коробля
                                                if (Arr1[i][j] == 47) {                                              //j!=0
                                                    if (j - 1 == 10 || Arr1[i][j - 1] == 249) {                      //проверка границ массива
                                                        dirJ = 0; dirI = 0;
                                                        break;
                                                    }
                                                    else {
                                                        j--;
                                                        dirJ = -1;
                                                    }
                                                }
                                                if (Arr1[i][j] != 47) {
                                                    a = i; b = j;
                                                    moveEnd = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (!moveEnd) {
                    a = rand() % 10;
                    b = rand() % 10;
                }
            } while (Arr1[a][b] == 249 || Arr1[a][b] == 88 || Arr1[a][b] == 47);
        }
        else {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (Arr1[i][j] == 219) {
                        a = i; b = j;
                        moveEnd = true;
                    }
                }
            }
        }
        if (a >= 0 && a < 10 && b >= 0 && b < 10) {   //проверить 219 ранил убил
            if (Arr1[a][b] == 32) {
                Arr1[a][b] = 249;
                miss = true;
                system("cls");
                cout << "MISS!!!\n";
                Sleep(500);
                system("cls");
                missAnimated();
            }
            else {
                shipDamaged(Arr1, a, b, *pStupid, *pHuman, *pCheatPl);
            }
        }
        checkWin(Arr1, Arr2, *pWin);
        system("cls");
    }
}

void exitMenu(bool& pause) {
    int v{ 0 };
    while (v < 1 || v > 2) {
        cout << endl << "Do you want CONTINUE?\n" <<
            "1. Yes\n" <<
            "2. No\n";
        cout << "Choose:\n";
        cin >> v;
        system("cls");
        switch (v) {
        case 1:
            pause = false;
            break;
        case 2:
            pause = true;
            break;
        }
    }
}

void checkWin(long long int Arr1[][10], long long int Arr2[][10], bool& win) {
    int countShips{ 0 };
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (Arr1[i][j] == 219) {
                countShips++;
            }
        }
    }
    if (countShips == 0) {
        win = true;
    }
    else {
        countShips = 0;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (Arr2[i][j] == 219) {
                countShips++;
            }
        }
    }
    if (countShips == 0) {
        win = true;
    }
    else {
        countShips = 0;
    }
}

void gamePlay(long long int Arr1[][10], long long int Arr2[][10], bool& win, bool& stupid, bool& human, bool& fieldAuto, bool& pause, bool& cheatPC, bool& cheatPl) {
    bool* pWin = &win;
    bool* pStupid = &stupid;
    bool* pHuman = &human;
    bool* pFieldAuto = &fieldAuto;
    bool* pPause = &pause;
    bool* pCheatPC = &cheatPC;
    bool* pCheatPl = &cheatPl;
    int countMovment{ 0 };
    if (fieldAuto) {
        setShipAuto(Arr1, *pHuman);
    }
    else {
        setShip(Arr1, *pHuman);
    }
    setShipAuto(Arr2, *pHuman);
    if (human) {
        while ((!win && !pause)) {
            if ((!win && !pause)) {
                if (countMovment % 4 == 0 && countMovment != 0) {
                    exitMenu(*pPause);
                    countMovment = 0;
                }
                for (int i = 0; i <= 5; i++) {
                    system("cls");
                    cout <<"///    ///TURN///    ///\n";
                    if (i == 0) {
                        cout << "/// 1P ///    /// 1P ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 1) {
                        cout << "///    /// 1P ///    ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 2) {
                        cout << "/// 1P ///    ///    ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 3) {
                        cout << "///    /// 1P ///    ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 4) {
                        cout << "///    ///    /// 1P ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 5) {
                        cout << "/// 1P /// 1P /// 1P ///\n";
                        Sleep(500);
                        system("cls");
                    }
                }
                makeMove(Arr1, Arr2, *pWin, *pStupid, *pHuman, *pCheatPl);
                system("cls");
                cout << "///\t/// 1P ///\t///\n";
                showPlayerField(Arr1);
                cout << "///\t/// 2P ///\t///\n";
                if (cheatPl) {
                    showPlayerField(Arr2);
                }else {
                    showNPCField(Arr2);
                }
                cout << endl;
                checkWin(Arr1, Arr2, *pWin);
                if (win) {
                    winEnd(Arr1, Arr2);
                    break;
                }
                countMovment++;
            }
            else {
                break;
            }
            if (!win && !pause) {
                for (int i = 0; i <= 5; i++) {
                    system("cls");
                    cout << "///    ///TURN///    ///\n";
                    if (i == 0) {
                        cout << "/// 2P ///    /// 2P ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 1) {
                        cout << "///    /// 2P ///    ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 2) {
                        cout << "/// 2P ///    ///    ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 3) {
                        cout << "///    /// 2P ///    ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 4) {
                        cout << "///    ///    /// 2P ///\n";
                        Sleep(300);
                        system("cls");
                    }
                    if (i == 5) {
                        cout << "/// 2P /// 2P /// 2P ///\n";
                        Sleep(500);
                        system("cls");
                    }
                }
                makeAutoMove(Arr1, Arr2, *pWin, *pStupid, *pHuman, *pCheatPC, *pCheatPl);
                cout << "///\t/// 1P ///\t///\n";
                showPlayerField(Arr1);
                cout << "///\t/// 2P ///\t///\n";
                showNPCField(Arr2);
                cout << endl;
                checkWin(Arr1, Arr2, *pWin);
                if (win) {
                    winEnd(Arr1, Arr2);
                    break;
                }
            }
            else {
                break;
            }
        }
    }
    else {
        while (!win && !pause) {
            system("cls");
            for (int i = 0; i <= 5; i++) {
                system("cls");
                cout << "///    ///TURN///    ///\n";
                if (i == 0) {
                    cout << "/// 1P ///    /// 1P ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 1) {
                    cout << "///    /// 1P ///    ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 2) {
                    cout << "/// 1P ///    ///    ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 3) {
                    cout << "///    /// 1P ///    ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 4) {
                    cout << "///    ///    /// 1P ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 5) {
                    cout << "/// 1P /// 1P /// 1P ///\n";
                    Sleep(500);
                    system("cls");
                }
            }
            cout << "///\t/// 1P ///\t///\n";
            showPlayerField(Arr1);
            cout << "///\t/// 2P ///\t///\n";
            showPlayerField(Arr2);
            Sleep(2000);
            system("cls");
            makeAutoMove(Arr1, Arr2, *pWin, *pStupid, *pHuman, *pCheatPC, *pCheatPl);
            cout << "///\t/// 1P ///\t///\n";
            showPlayerField(Arr1);
            cout << "///\t/// 2P ///\t///\n";
            showPlayerField(Arr2);
            Sleep(2000);
            system("cls");
            checkWin(Arr1, Arr2, *pWin);
            if (win) {
                winEnd(Arr1, Arr2);
                pause = true;
                break;
            }
            if (pause) {
                break;
            }
            system("cls");
            for (int i = 0; i <= 5; i++) {
                system("cls");
                cout << "///    ///TURN///    ///\n";
                if (i == 0) {
                    cout << "/// 2P ///    /// 2P ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 1) {
                    cout << "///    /// 2P ///    ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 2) {
                    cout << "/// 2P ///    ///    ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 3) {
                    cout << "///    /// 2P ///    ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 4) {
                    cout << "///    ///    /// 2P ///\n";
                    Sleep(300);
                    system("cls");
                }
                if (i == 5) {
                    cout << "/// 2P /// 2P /// 2P ///\n";
                    Sleep(500);
                    system("cls");
                }
            }
            makeAutoMove(Arr1, Arr2, *pWin, *pStupid, *pHuman, *pCheatPC, *pCheatPl);
            cout << "///\t/// 1P ///\t///\n";
            showPlayerField(Arr1);
            cout << "///\t/// 2P ///\t///\n";
            showPlayerField(Arr2);
            Sleep(2000);
            checkWin(Arr1, Arr2, *pWin);
            if (win) {
                winEnd(Arr1, Arr2);
                pause = true;
                break;
            }
            countMovment++;
            if (countMovment % 4 == 0 && countMovment != 0) {
                exitMenu(*pPause);
                countMovment = 0;
            }
        }
    }
}

int credits() {
    system("cls");
    cout << "\t\t/// STAFF ///\n" <<
        "PRODUCER\n" <<
        "\t\tMy vacation\n" <<
        "DIRECTOR\n" <<
        "\t\tMy sweat\n" <<
        "GRAPHIC DESIGNER\n" <<
        "\t\tMy tears\n";
    Sleep(5000);
    return 0;
}

void winEnd(long long int Arr1[][10], long long int Arr2[][10]) {
    int countShips{ 0 };
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (Arr2[i][j] == 219) {
                countShips++;
            }
        }
    }
    if (countShips == 0) {
        cout << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << endl <<
                (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)219 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)219 << (unsigned char)32 << (unsigned char)220 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)219 << endl <<
                (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)220 << (unsigned char)223 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << endl <<
                (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << endl;
        Sleep(5000);
        system("cls");
    } else {
        countShips = 0;
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (Arr1[i][j] == 219) {
                countShips++;
            }
        }
    }
    if (countShips == 0) {
        cout << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << endl <<
                (unsigned char)219 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)219 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)219 << (unsigned char)32 << (unsigned char)220 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)219 << endl <<
                (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)220 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)220 << (unsigned char)223 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << endl <<
                (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)223 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << endl;
        Sleep(5000);
        system("cls");
    } else {
        countShips = 0;
    }
}

void sunkAnimated() {
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
    Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
    Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
        Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)220 << (unsigned char)176 << (unsigned char)220 << (unsigned char)220 << (unsigned char)176 << (unsigned char)220 << (unsigned char)223 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)176 << (unsigned char)176 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)220 << (unsigned char)223 << (unsigned char)176 << (unsigned char)223 << (unsigned char)223 << (unsigned char)176 << (unsigned char)223 << (unsigned char)220 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
        Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)176 << (unsigned char)176 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
        Sleep(500);
    system("cls");
}

void damagedAnimated() {
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
    Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
    Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
    Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)223 << (unsigned char)220 << (unsigned char)176 << (unsigned char)220 << (unsigned char)220 << (unsigned char)176 << (unsigned char)220 << (unsigned char)223 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)176 << (unsigned char)176 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)220 << (unsigned char)223 << (unsigned char)176 << (unsigned char)223 << (unsigned char)223 << (unsigned char)176 << (unsigned char)223 << (unsigned char)220 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;      
    Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)220 << (unsigned char)176 << (unsigned char)220 << (unsigned char)177 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << endl <<
            (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << endl;
    Sleep(500);
    system("cls");
}

void missAnimated() {
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)223 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl;
        Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl;
        Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl;
        Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)219 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl;
        Sleep(500);
    system("cls");
    cout << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)220 << (unsigned char)220 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)219 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)177 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)32 << (unsigned char)176 << (unsigned char)176 << (unsigned char)176 << (unsigned char)32 << endl <<
        (unsigned char)32 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)178 << (unsigned char)92 << (unsigned char)32 << (unsigned char)179 << (unsigned char)32 << (unsigned char)47 << endl <<
        (unsigned char)32 << (unsigned char)32 << (unsigned char)223 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)219 << (unsigned char)223 << (unsigned char)32 << (unsigned char)32 << (unsigned char)179 << (unsigned char)179 << (unsigned char)179 << (unsigned char)32 << endl;
        Sleep(500);
    system("cls");
}