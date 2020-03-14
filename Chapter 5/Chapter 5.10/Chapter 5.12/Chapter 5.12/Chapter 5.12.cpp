#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

const float PI = 3.14;

int main()
{
	int radius, height, volume;

	cout << "Enter the radius of the cylinder in cm: \n";
	cout << "Enter the height of the cynlinder in cm:  ";
	cin >> radius >> height;
	volume = height * PI * (radius * radius);
	cout << "Volume of cylinder in cubic cm: \n";
	cout << volume;

	return 0;
}