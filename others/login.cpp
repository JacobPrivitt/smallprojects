// Injecter

#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

void menu();
void create();
void login();

int main()
{

	menu();

}

void menu() {

	string option, log;

	cout << "Do you want to sign in or login?" << endl;
	cout << "Y/N" << endl;
	cin >> option;

	if (option == tolower("y")) {
		create();
	}else{
		cout << "Would you like to login?" << endl;
		cout << "Y/N" << endl;
		cin >> log;
		if (log == tolower("y")) {
			login();
		}else{
		cout << "Have a nice day." << endl;
		}
	}
}

void create() {

	string password;
	ofstream outputFile;
	outputFile.open("password.txt");

	cout << "Create password." << endl;
	cin >> password;

	outputFile << password;
	outputFile.close;

	cout << "Your password has been created." << endl;
}

void login() {

	string log;
	string password;
	ifstream inputFile;
	inputFile.open("password.txt");

	cout << "Enter password." << endl;
	cin >> password;

	streambuf *old = cout.rdbuf(0);
	cout << log;
	cout.rdbuf(old);

	if (log == password) {
		cout << "Access Granted." << endl;
	}else {
		MessageBox(NULL, "Incorrect Password", "Incorrect", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL);
	}

	inputFile.close();

}