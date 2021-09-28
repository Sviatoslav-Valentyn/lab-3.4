#include<iostream>

using namespace std;

int main()
{
	double x, x0, y, y0, R;


	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

		if (pow(x + R, 2) + pow(y + R, 2) >= R * R && x <= 0 && y <=0 && x >= -R && y >= -R ||
			pow(x - R, 2) + pow(y, 2) <= R * R && y >= 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

		cin.get();
		return 0;
}