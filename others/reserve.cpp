#include <iostream>
#include <string>
#include <conio.h>
#include <cstdio>
using namespace std;

void menu();
void fullTime();
void price();
void place();
void bubbleSort();

int main() {

    //menu();

    return 0;
}

void menu()
{
    int option;

    cout << "Hello, welcome to JetGreen." << endl;
    cout << "1. Reserve Seat" << endl;
    cout << "2. Check Flight Price" << endl;
    cin >> option;

    switch(option)
    {
        case 1:
            system("CLS");
            cout  << "-------------------------------------------------------" << endl;
            place();
            break;

        case 2:
            system("CLS");
            cout  << "-------------------------------------------------------" << endl;
            price();
            break;
        default:
            cout << "Sorry, that is not an option." << endl;
            break;
    }
}

void fullTime()
{
    int availableFlights = 24;
    int time = 0;
    string halfTime = " A.M. ";
    int counter = 0;
    if(availableFlights > 0)
    {
        cout << "Current Available Flights:" << endl;
        cout << "-------------------------------------------------------" << endl;
        while(counter <= 23)
        {
                if(time == 0)
                {
                    cout << "12" << halfTime << "flight available." << endl;
                }
                if (time >= 12)
                {
                    time = time - 12;
                    halfTime = " P.M. ";
                    if(time == 0)
                    {
                        cout << "12" << halfTime << "flight available." << endl;
                    }
                }
                if(time != 0)
                {
                    cout << time << halfTime << "flight available." << endl;
                }
                time += 1;
                counter += 1;
        }
    }
}

void price()
{
    const int size = 12;
    int value[size];
    for (int i = 0; i < size; ++i) {
        value[i] = i += 1;
        cout << value[i];
    }
}

void place()
{
    fullTime();
}

