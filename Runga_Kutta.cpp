// C program to implement Runge Kutta method 
//Source https://www.geeksforgeeks.org/runge-kutta-4th-order-method-solve-differential-equation/
#include<iostream> 

using namespace std;

// A sample differential equation 
double dydx(double x, double y)
{
    return-2*pow(x,3) +12*pow(x,2)-20*x + 8.5;
}

// Finds value of y for a given x using step size h 
// and initial value y0 at x0. 
double rungeKutta(double x0, double y0, double x, double h)
{
    // Count number of iterations using step size or 
    // step height h 
    int n = (int)((x - x0) / h);

    double k1, k2, k3, k4;

    // Iterate for number of iterations 
    double y = y0;
    for (int i = 1; i <= n; i++)
    {
        // Apply Runge Kutta Formulas to find 
        // next value of y 
        k1 = h * dydx(x0, y);
        k2 = h * dydx(x0 + 0.5 * h, y + 0.5 * k1);
        k3 = h * dydx(x0 + 0.5 * h, y + 0.5 * k2);
        k4 = h * dydx(x0 + h, y + k3);

        // Update next value of y 
        y = y + (1.0 / 6.0) * (k1 + 2 * k2 + 2 * k3 + k4);;

        // Update next value of x 
        x0 = x0 + h;
        cout << x0 << " " << y << endl;
    }

    return y;
}

// Driver method 
int main()
{
    double x0 = 0, y = 1, x = 4, h = 0.5;
    cout << "\nThe value of y at x is : " << rungeKutta(x0, y, x, h) << endl;
    
    return 0;
}