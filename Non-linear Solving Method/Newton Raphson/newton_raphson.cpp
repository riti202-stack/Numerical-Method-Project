#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int degree;
double coeff[20];
int funcType, transChoice;

// Polynomial function
double poly(double x)
{
    double sum = 0;
    for (int i = 0; i <= degree; i++)
        sum += coeff[i] * pow(x, degree - i);
    return sum;
}

// Derivative of polynomial
double poly_derivative(double x)
{
    double sum = 0;
    for (int i = 0; i < degree; i++)
        sum += coeff[i] * (degree - i) * pow(x, degree - i - 1);
    return sum;
}

// Transcendental function
double trans(double x)
{
    switch (transChoice)
    {
        case 1: return sin(x) - x/2;
        case 2: return cos(x) - x;
        case 3: return exp(x) - 3*x;
        case 4: return log(x) + x - 3;
        default: return 0;
    }
}

// Derivative of transcendental function
double trans_derivative(double x)
{
    switch (transChoice)
    {
        case 1: return cos(x) - 0.5;
        case 2: return -sin(x) - 1;
        case 3: return exp(x) - 3;
        case 4: return 1/x + 1;
        default: return 0;
    }
}

// Unified function
double f(double x)
{
    if (funcType == 1)
        return poly(x);
    else
        return trans(x);
}

// Unified derivative
double df(double x)
{
    if (funcType == 1)
        return poly_derivative(x);
    else
        return trans_derivative(x);
}

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin)
    {
        cout << "Error opening input file!" << endl;
        return 1;
    }

    double x0, tol;
    int iteration = 0;

    while (fin >> funcType)
    {
        if (funcType == 1)
        {
            fin >> degree;
            for (int i = 0; i <= degree; i++)
                fin >> coeff[i];
        }
        else
        {
            fin >> transChoice;
        }

        fin >> x0 >> tol;

        fout << "Function Type: " << (funcType == 1 ? "Polynomial" : "Transcendental") << endl;
        if (funcType == 2)
            fout << "Choice: " << transChoice << endl;

        fout << "Iter\t x0\t\t x1\t\t f(x1)\n";

        iteration = 0;
        double x1;

        while (true)
        {
            iteration++;
            double f0 = f(x0);
            double df0 = df(x0);

            if (df0 == 0)
            {
                fout << "Derivative zero encountered! Cannot proceed." << endl;
                break;
            }

            x1 = x0 - f0 / df0;

            fout << iteration << "\t"
                 << x0 << "\t"
                 << x1 << "\t"
                 << f(x1) << endl;

            if (fabs(f(x1)) < tol)
            {
                fout << "\nRoot = " << x1 << endl;
                fout << "Iterations needed = " << iteration << endl << endl;
                break;
            }

            x0 = x1;  // Update for next iteration
        }
    }

    fin.close();
    fout.close();
    return 0;
}
