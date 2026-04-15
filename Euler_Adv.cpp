#include <iostream>

using namespace std;

double x, y;

double Derivs() {
	return -2 * pow(x, 3) + 12 * pow(x, 2) - 20 * x + 8.5;
}

double eulery( double h) {
	double dydx = Derivs();
	double ynew = y + dydx * h;
	x = x + h;
	return ynew;
}


void Integrator( double h, double xend) {
	do {
		if ((xend - x) < h)
			h = xend;
		y = eulery( h);
		cout << x << " " << y << endl;
		if (x >= xend)
			break;

	} while (true);
}

int main() {
	 y = 1;
	double xi = 0;
	double xf = 4;
	double dx = 0.5;
	double xout = (xf - xi) / dx;
	 x = xi;
	double m = 0;
	double xpm = x;
	double ypm = y;
	double xend = 0;
	do {
		xend = x + xout;
		if (xend > xf)
			xend = xf;
		double h = dx;
		Integrator( h, xend);
		m++;
		xpm = x;
		ypm = y;
		cout << xpm << " " << ypm << endl;
		if (x >= xf)
			break;
		
	} while (true);
	return 0;
}