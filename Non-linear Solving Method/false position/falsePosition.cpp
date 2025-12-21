#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int degree;
double coeff[20];
int funcType, transChoice;
double a, b, tol;

// Polynomial evaluation
double poly(double x)
{
    double sum = 0;
    for (int i = 0; i <= degree; i++)
        sum += coeff[i] * pow(x, degree - i);
    return sum;
}

// Transcendental evaluation
double trans(double x)
{
    switch (transChoice)
    {
        case 1: return sin(x) - x / 2;
        case 2: return cos(x) - x;
        case 3: return exp(x) - 3 * x;
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

        fin >> a >> b;
        fin >> tol;

        if (f(a) * f(b) >= 0)
        {
            fout << "False Position method not applicable for this function." << endl << endl;
            continue;
        }

        fout << "Function Type: " << (funcType == 1 ? "Polynomial" : "Transcendental") << endl;
        if (funcType == 2)
            fout << "Choice: " << transChoice << endl;
        fout << "Iter\t a\t\t b\t\t c\t\t f(c)\n";

        iteration = 0;
        double c;

        while (true)
        {
            iteration++;
            c = (a * f(b) - b * f(a)) / (f(b) - f(a));

            fout << iteration << "\t"
                 << a << "\t"
                 << b << "\t"
                 << c << "\t"
                 << f(c) << endl;

            if (fabs(f(c)) < tol)
            {
                fout << "\nRoot = " << c << endl;
                fout << "Iterations needed = " << iteration << endl << endl;
                break;
            }

            if (f(a) * f(c) < 0)
                b = c;
            else
                a = c;
        }
    }

    fin.close();
    fout.close();
    return 0;
}
