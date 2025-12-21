#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>  

using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin) {
        cerr << "Error: Could not open input.txt\n";
        return 1;
    }
    if (!fout) {
        cerr << "Error: Could not open output.txt\n";
        return 1;
    }

    int n;
    fin >> n;
    if (n <= 1) {
        cerr << "Error: Need at least 2 data points for regression.\n";
        return 1;
    }

    vector<double> x(n), y(n);
    for (int i = 0; i < n; i++) {
        fin >> x[i] >> y[i];
    }

    double Sx = 0, Sy = 0, Sx2 = 0, Sxy = 0;
    for (int i = 0; i < n; i++) {
        Sx += x[i];
        Sy += y[i];
        Sx2 += x[i] * x[i];
        Sxy += x[i] * y[i];
    }

    double denominator = n * Sx2 - Sx * Sx;
    if (denominator == 0) {
        cerr << "Error: Denominator is zero. Regression cannot be computed.\n";
        return 1;
    }

    double b = (n * Sxy - Sx * Sy) / denominator;
    double a = (Sy - b * Sx) / n;

    fout << fixed << setprecision(6);
    fout << "Regression line: y = " << a << " + " << b << " x\n";
    fout << "a = " << a << "\n";
    fout << "b = " << b << "\n";

    double x_predict;
    cout << "Enter a value of x to predict y: ";
    cin >> x_predict;

    double y_predict = a + b * x_predict;

    fout << "For x = " << x_predict << ", predicted y = " << y_predict << "\n";
    cout << "For x = " << x_predict << ", predicted y = " << y_predict << "\n";

    fin.close();
    fout.close();

    return 0;
}
