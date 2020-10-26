
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void main() {
	double x, x_end, x_delta, R, y;

	cout.setf(ios::left);
	cout << setw(10) << "x start" << " = "; cin >> x;
	cout << setw(10) << "x end" << " = "; cin >> x_end;
	cout << setw(10) << "x delta" << " = "; cin >> x_delta;
	cout << setw(10) << "R" << " = "; cin >> R;


	cout << "--------------------------------" << endl;
	cout << "|" << setw(14) << "x" << " |" << setw(14) << "y" << "|" << endl;
	cout << "--------------------------------" << endl;




	if (x <= -1 - R)
		y = 1;
	else
		if (-1 - R < x && x <= 0)
			y = R - sqrt(R * R - x * x);
		else
			if (-1 < x && x <= 2)
				y = -R;
			else
				y = x * (R - 4) / 2 + 4;

	

	cout << "|" <<setprecision(2)<< setw(14) << x << " |" << setw(14) << setprecision(3) << R << "|" << endl;
	cout << "--------------------------------" << endl; 
}
 