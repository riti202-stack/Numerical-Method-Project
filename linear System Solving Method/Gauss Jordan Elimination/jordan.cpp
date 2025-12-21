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

    // Gauss–Jordan elimination
    for (int i = 0; i < n; i++)
    {
        if (fabs(a[i][i]) < 1e-9) continue;

        double pivot = a[i][i];
        for (int j = 0; j <= n; j++)
            a[i][j] /= pivot;

        for (int k = 0; k < n; k++)
        {
            if (k == i) continue;
            double factor = a[k][i];
            for (int j = 0; j <= n; j++)
                a[k][j] -= factor * a[i][j];
        }
    }

    // Print matrix after elimination
    fout << "Matrix after Gauss–Jordan Elimination:\n";
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
        for (int i = 0; i < n; i++)
            fout << "x" << i + 1 << " = " << a[i][n] << endl;
    }

    return 0;
}
