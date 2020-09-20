#include <iostream>
#include <string>
using namespace std;

struct card {
	int face;
	string mask;
	string color;

};

int main() {
	struct card c[5];

	for (int i = 0;i < 5;i++)
	{
		cout << "Give face number" << endl;
		cin >> c[i].face;
		cout << "Give mask name" << endl;
		cin >> c[i].mask;
		cout << "Give color name" << endl;
		cin >> c[i].color;
	}

	for (int i = 0;i < 5;i++)
	{
		cout << "Face number of index " << i << "is" <<" "<< c[i].face << endl;

		cout << "mask name of index " << i << "is" << " ":<<c[i].mask << endl;

		cout << "color name of index " << i << "is" <<" "<< c[i].color << endl;

	}

	return 0;
}
