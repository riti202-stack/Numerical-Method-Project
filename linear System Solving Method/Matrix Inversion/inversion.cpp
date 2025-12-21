#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

double det(double a[10][10], int n);
void adjoint(double a[10][10], double adj[10][10], int n);

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    double a[10][10], adj[10][10], inv[10][10], b[10], x[10];

    // Read matrix A
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fin >> a[i][j];

    // Read vector b
    for (int i = 0; i < n; i++)
        fin >> b[i];

    double determinant = det(a, n);

    if (determinant == 0)
    {
        fout << "Matrix inversion not possible (Determinant = 0)\n";
        return 0;
    }

    // Compute adjoint
    adjoint(a, adj, n);

    // Compute inverse
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inv[i][j] = adj[i][j] / determinant;

    fout << "Determinant = " << determinant << "\n\n";

    // Print adjoint matrix
    fout << "Adjoint Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            fout << setw(12) << adj[i][j];
        fout << endl;
    }

    // Print inverse matrix
    fout << "\nInverse Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            fout << setw(12) << inv[i][j];
        fout << endl;
    }

    // Compute roots: x = A⁻¹b
    for (int i = 0; i < n; i++)
    {
        x[i] = 0;
        for (int j = 0; j < n; j++)
            x[i] += inv[i][j] * b[j];
    }

    fout << "\nRoots:\n";
    for (int i = 0; i < n; i++)
        fout << "x" << i + 1 << " = " << x[i] << endl;

    fin.close();
    fout.close();
    return 0;
}

// Determinant function
double det(double a[10][10], int n)
{
    if (n == 1)
        return a[0][0];

    double d = 0, temp[10][10];
    int sign = 1;

    for (int f = 0; f < n; f++)
    {
        int subi = 0;
        for (int i = 1; i < n; i++)
        {
            int subj = 0;
            for (int j = 0; j < n; j++)
            {
                if (j == f) continue;
                temp[subi][subj++] = a[i][j];
            }
            subi++;
        }
        d += sign * a[0][f] * det(temp, n - 1);
        sign = -sign;
    }
    return d;
}

// Adjoint function
void adjoint(double a[10][10], double adj[10][10], int n)
{
    if (n == 1)
    {
        adj[0][0] = 1;
        return;
    }

    double temp[10][10];
    int sign;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int subi = 0;
            for (int r = 0; r < n; r++)
            {
                if (r == i) continue;
                int subj = 0;
                for (int c = 0; c < n; c++)
                {
                    if (c == j) continue;
                    temp[subi][subj++] = a[r][c];
                }
                subi++;
            }
            sign = ((i + j) % 2 == 0) ? 1 : -1;
            adj[j][i] = sign * det(temp, n - 1); // transpose
        }
    }
}
