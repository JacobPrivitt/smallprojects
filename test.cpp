#include <iostream>
using namespace std;

int main() {

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
	        cout << "int room" << i << ";" << endl;
	    }
}



