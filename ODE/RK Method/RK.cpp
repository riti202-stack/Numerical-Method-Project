 #include <iostream>
#include <fstream>
using namespace std;

 
double f(double x, double y)
{
    return x*x + y;
}

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    double x0, y0, h, xn;
    fin >> x0 >> y0 >> h >> xn;

    double x = x0;
    double y = y0;

    while (x < xn)
    {
        double k1 = h * f(x, y);
        double k2 = h * f(x + h/2, y + k1/2);
        double k3 = h * f(x + h/2, y + k2/2);
        double k4 = h * f(x + h, y + k3);

        y = y + (k1 + 2*k2 + 2*k3 + k4) / 6;
        x = x + h;
    }

    fout << "For dy/dx = x^2 + y" << endl;
    fout << "Value of y at x = " << xn << " is " << y << endl;

    fin.close();
    fout.close();

    return 0;
}