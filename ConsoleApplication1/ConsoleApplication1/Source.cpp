// 6th 11 am for appointment
#include<iostream>

using namespace std;

void showMessage();
void showPointer(int & a, int & b);

int main() {
	int a;
	int b;

	showMessage();
	showPointer(a, b);
	cout << "You have entered " << a << " " << b << endl;

	return 0;
}

void showMessage()
{
	cout << "This message is inside showPointer" << endl;

}

void showPointer(int & a, int & b)
{
	cout << "Enter a number " << endl;
		cin >> a;
		cout << "Enter a second number" << endl;

		cin >> b;
}