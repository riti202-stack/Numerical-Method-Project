#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    double x[n], y[n][n];

    
    for (int i = 0; i < n; i++) {
        fin >> x[i] >> y[i][0];
    }

    
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            y[i][j] = (y[i + 1][j - 1] - y[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    double xp;
    fin >> xp;

    
    double result = y[0][0];
    double term = 1;

    for (int i = 1; i < n; i++) {
        term *= (xp - x[i - 1]);
        result += term * y[0][i];
    }

    fout << "Interpolated value at x = " << xp << " is " << result << endl;

    fin.close();
    fout.close();

    return 0;
}
