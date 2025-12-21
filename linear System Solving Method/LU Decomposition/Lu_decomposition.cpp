#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    double A[20][20], L[20][20] = {0}, U[20][20] = {0};
    double b[20], y[20], x[20];

    // Read matrix A
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fin >> A[i][j];

    // Read vector b
    for (int i = 0; i < n; i++)
        fin >> b[i];

    // LU Decomposition (Doolittle)
    for (int i = 0; i < n; i++)
    {
        // Upper triangular U
        for (int k = i; k < n; k++)
        {
            double sum = 0;
            for (int j = 0; j < i; j++)
                sum += L[i][j] * U[j][k];

            U[i][k] = A[i][k] - sum;
        }

        // Lower triangular L
        for (int k = i; k < n; k++)
        {
            if (i == k)
                L[i][i] = 1;   // Diagonal as 1
            else
            {
                double sum = 0;
                for (int j = 0; j < i; j++)
                    sum += L[k][j] * U[j][i];

                L[k][i] = (A[k][i] - sum) / U[i][i];
            }
        }
    }

    // Print L matrix
    fout << "Lower Triangular Matrix (L):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            fout << setw(10) << L[i][j];
        fout << endl;
    }

    // Print U matrix
    fout << "\nUpper Triangular Matrix (U):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            fout << setw(10) << U[i][j];
        fout << endl;
    }

    // Forward substitution: Ly = b
    for (int i = 0; i < n; i++)
    {
        double sum = 0;
        for (int j = 0; j < i; j++)
            sum += L[i][j] * y[j];

        y[i] = b[i] - sum;
    }

    // Backward substitution: Ux = y
    for (int i = n - 1; i >= 0; i--)
    {
        double sum = 0;
        for (int j = i + 1; j < n; j++)
            sum += U[i][j] * x[j];

        x[i] = (y[i] - sum) / U[i][i];
    }

    // Print solution
    fout << "\nSolution Vector (x):\n";
    for (int i = 0; i < n; i++)
        fout << "x" << i + 1 << " = " << x[i] << endl;

    fin.close();
    fout.close();

    return 0;
}
