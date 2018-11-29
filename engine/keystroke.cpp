#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define KB_W 0x57
#define KB_S 0x53
#define KB_A 0x41
#define KB_D 0x44
#define KB_ESCAPE 27

int KB_code = 0;
bool QuitGame=false;

void keyboard_input();

int main(){

    cout << "Move with W, A, S, D" << endl;
    cout << "ESC to stop playing." << endl;
    cout << "CAPS lock on please." << endl;

    while(!QuitGame)
    {
        keyboard_input();
    }

    cout << "\nGood job." << endl;
    cin.ignore();
    cin.get();
    return 0;
}
void keyboard_input() {
    if (kbhit())
    {
        KB_code = getch();
        switch (KB_code) {
            case KB_W:
                cout << "You walk forward." << endl;
                break;

            case KB_ESCAPE:

                QuitGame=true;
                break;

            case KB_S:
                cout << "You walk backwards." << endl;
                break;

            case KB_A:
                cout << "You walk left." << endl;
                break;

            case KB_D:
                cout << "You walk right." << endl;
                break;

            default:
                cout << "You don't move." << endl;

        }
    }
}