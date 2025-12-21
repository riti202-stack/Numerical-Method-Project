#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    double x[100], y[100];

    for(int i = 0; i < n; i++)
    {
        fin >> x[i] >> y[i];
    }

    // Elements of A^T A matrix
    double s0 = n;
    double s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    double t0 = 0, t1 = 0, t2 = 0;

    for(int i = 0; i < n; i++)
    {
        s1 += x[i];
        s2 += x[i] * x[i];
        s3 += x[i] * x[i] * x[i];
        s4 += x[i] * x[i] * x[i] * x[i];

        t0 += y[i];
        t1 += x[i] * y[i];
        t2 += x[i] * x[i] * y[i];
    }

    // A^T A matrix
    double A[3][3] = {
        { s0, s1, s2 },
        { s1, s2, s3 },
        { s2, s3, s4 }
    };

    // A^T Y vector
    double B[3] = { t0, t1, t2 };

    // Determinant of A
    double det =
        A[0][0]*(A[1][1]*A[2][2] - A[1][2]*A[2][1]) -
        A[0][1]*(A[1][0]*A[2][2] - A[1][2]*A[2][0]) +
        A[0][2]*(A[1][0]*A[2][1] - A[1][1]*A[2][0]);

    if(det == 0)
    {
        fout << "Matrix is singular. Inverse not possible.";
        return 0;
    }

    // Inverse of A
    double invA[3][3];

    invA[0][0] =  (A[1][1]*A[2][2] - A[1][2]*A[2][1]) / det;
    invA[0][1] = -(A[0][1]*A[2][2] - A[0][2]*A[2][1]) / det;
    invA[0][2] =  (A[0][1]*A[1][2] - A[0][2]*A[1][1]) / det;

    invA[1][0] = -(A[1][0]*A[2][2] - A[1][2]*A[2][0]) / det;
    invA[1][1] =  (A[0][0]*A[2][2] - A[0][2]*A[2][0]) / det;
    invA[1][2] = -(A[0][0]*A[1][2] - A[0][2]*A[1][0]) / det;

    invA[2][0] =  (A[1][0]*A[2][1] - A[1][1]*A[2][0]) / det;
    invA[2][1] = -(A[0][0]*A[2][1] - A[0][1]*A[2][0]) / det;
    invA[2][2] =  (A[0][0]*A[1][1] - A[0][1]*A[1][0]) / det;

    // Coefficients
    double a0 = invA[0][0]*B[0] + invA[0][1]*B[1] + invA[0][2]*B[2];
    double a1 = invA[1][0]*B[0] + invA[1][1]*B[1] + invA[1][2]*B[2];
    double a2 = invA[2][0]*B[0] + invA[2][1]*B[1] + invA[2][2]*B[2];

    fout << "Polynomial Least Squares (Quadratic Fit)\n\n";
    fout << "a0 = " << a0 << "\n";
    fout << "a1 = " << a1 << "\n";
    fout << "a2 = " << a2 << "\n\n";

    fout << "Final Model:\n";
    fout << "y = " << a0 << " + " << a1 << "*x + " << a2 << "*x^2\n";

    fin.close();
    fout.close();

    return 0;
}
