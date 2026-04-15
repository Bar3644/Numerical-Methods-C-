#include <iostream>

using namespace std;

double Derivs(double x) {
	return -2 * pow(x, 3) + 12 * pow(x, 2) - 20 * x + 8.5;
}

void Heun(double &x, double &y,double h) {
	double dy1dx = Derivs(x);
	double ye = y + dy1dx * h;
	x = x + h;
	double dy2dx = Derivs(x);
	double slope = (dy1dx + dy2dx) / 2;
	y = y + slope * h;
}


void Integrator(double h, double &x,double &y ,double xend) {
	do {
		if ((xend - x) < h)
			h = xend;
		Heun(x,y,h);
		cout << x << " " << y << endl;
		if (x >= xend)
			break;

	} while (true);
}

int main() {
	double x = 0;
	double y = 1;
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
		Integrator(h, x,y,xend);
		m++;
		xpm = x;
		ypm = y;
		cout << xpm << " " << ypm << endl;
		if (x >= xf)
			break;

	} while (true);
	return 0;
}