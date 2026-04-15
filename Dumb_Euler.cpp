#include <iostream> 
using namespace std;

double func(double x){
    return -2*pow(x,3)+12*pow(x,2)-20*x+8.5;
}

double check(double x) {
    return -0.5 * pow(x, 4) + 4 * pow(x, 3) - 10 * pow(x, 2) + 8.5 * x + 1;
}

// Driver program 
int main()
{
    double xi = 0;
    double y = 1;
    double xf = 4;
    double x = xi;
    double dx = 0.5;
    double nc = (xf - xi) / dx;
    for (int i = 0; i < nc; i++) {
        double dydx = func(x);
        y = y + dydx*dx;
        x = x + dx;
        cout << x << " " << y << " " << check(x) << endl;
   }
    return 0;
}