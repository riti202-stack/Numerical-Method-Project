#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    double a[20][21];

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n; j++)
            fin >> a[i][j];

    // Forward elimination
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (fabs(a[i][i]) < 1e-9) continue;
            double factor = a[k][i] / a[i][i];
            for (int j = i; j <= n; j++)
                a[k][j] -= factor * a[i][j];
        }
    }

    // Print matrix after elimination
    fout << "Matrix after Gauss Elimination:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
            fout << setw(10) << a[i][j];
        fout << endl;
    }

    int rankA = 0, rankAug = 0;

    for (int i = 0; i < n; i++)
    {
        bool nonZeroA = false;
        for (int j = 0; j < n; j++)
            if (fabs(a[i][j]) > 1e-9)
                nonZeroA = true;

        if (nonZeroA) rankA++;

        if (nonZeroA || fabs(a[i][n]) > 1e-9)
            rankAug++;
    }

    fout << "\nResult:\n";
    if (rankA < rankAug)
    {
        fout << "No solution\n";
    }
    else if (rankA == rankAug && rankA < n)
    {
        fout << "Infinitely many solutions\n";
    }
    else
    {
        fout << "Unique solution\n";

        double x[20];
        for (int i = n - 1; i >= 0; i--)
        {
            x[i] = a[i][n];
            for (int j = i + 1; j < n; j++)
                x[i] -= a[i][j] * x[j];
            x[i] /= a[i][i];
        }

        for (int i = 0; i < n; i++)
            fout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}
