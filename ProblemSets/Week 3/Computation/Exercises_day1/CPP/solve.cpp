#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	float a, b, c, x1, x2;
	cout << "Enter a" << endl;
	cin >> a;
	cout << endl;
	cout << "Enter b" << endl;
	cin >> b;
	cout << endl;
	cout << "Enter c" << endl;
	cin >> c;
	cout << endl;
	x1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
	cout << "Solutions are:" << endl << x1 << endl << x2 <<endl;
	return 0;
}
