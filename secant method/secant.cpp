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

// Unified function
double f(double x)
{
    if (funcType == 1)
        return poly(x);
    else
        return trans(x);
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

    double x0, x1, tol;
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

        fin >> x0 >> x1;
        fin >> tol;

        fout << "Function Type: " << (funcType == 1 ? "Polynomial" : "Transcendental") << endl;
        if (funcType == 2)
            fout << "Choice: " << transChoice << endl;

        fout << "Iter\t x0\t\t x1\t\t x2\t\t f(x2)\n";

        iteration = 0;
        double x2;

        while (true)
        {
            iteration++;

            double f0 = f(x0);
            double f1 = f(x1);

            if (f1 - f0 == 0)
            {
                fout << "Division by zero encountered!" << endl;
                break;
            }

            x2 = x1 - f1*(x1 - x0)/(f1 - f0);

            fout << iteration << "\t"
                 << x0 << "\t"
                 << x1 << "\t"
                 << x2 << "\t"
                 << f(x2) << endl;

            if (fabs(f(x2)) < tol)
            {
                fout << "\nRoot = " << x2 << endl;
                fout << "Iterations needed = " << iteration << endl << endl;
                break;
            }

            // Update for next iteration
            x0 = x1;
            x1 = x2;
        }
    }

    fin.close();
    fout.close();

    return 0;
}
