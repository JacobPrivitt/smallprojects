#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

#define KB_W 0x57
#define KB_ESCAPE 27

int KB_code = 0;
bool QuitGame = false;

void map();
void createRoom();

int main()
{

    map();

    while(!QuitGame)
    {
        createRoom();
    }

    cout << "\nGame Complete." << endl;

    cin.ignore();
    cin.get();

    return 0;
}

void map(){

    int yAxis = 0;
    int left = 0;
    cout << endl << "Choose left side number then the upper number to create room quardnate" << endl;
    cout << endl;
    cout << "        1     2     3     4  " << endl;
    while(yAxis < 9){
        cout << "     |     |     |     |     " << endl;
        cout << "-----|-----|-----|-----|-----" << endl;
        cout << "     |     |     |     |" <<  endl;
        cout << left+1 << "    |     |     |     |" << endl;
        cout << "     |     |     |     |" << endl;
        yAxis += 1;
        left += 1;
    }
}

void createRoom(){
    if(kbhit())
    {
        KB_code = getch();
        switch (KB_code){
            case KB_W:
                cout << "Creating new room." << endl;
                cout << "Room Coordinate:" << endl;
                cout << "Left #:" << endl;
                int left;
                cin >> left;
                cout << "Right #:" << endl;
                int right;
                cin >> right;
                break;

            case KB_ESCAPE:
                QuitGame=true;
                break;

            default:
                cout << "Not a shortcut." << endl;
        }
    }
}

void map(){
    cout << "What do you want the size of the map to be?" << endl;
    cout << "Width: " << endl;
    int width;
    cin >> width;
    cout << "Height: " << endl;
    int height;
    cin >> height;

    int area = width * height;

    const int size = area + 1;
    int value[size];
    for (int i = 1; i < size; ++i) {
        value[i] = i;
    }
}