#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    vector<double> x(n), y(n), Y(n);
    for (int i = 0; i < n; i++) {
        fin >> x[i] >> y[i];
        if (y[i] <= 0) {
            fout << "Error: y values must be positive for logarithm transformation." << endl;
            return 1;
        }
        Y[i] = log(y[i]);  
    }

    double x_query;
    fin >> x_query;

    double sumX = 0, sumY = 0, sumX2 = 0, sumXY = 0;

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += Y[i];
        sumX2 += x[i] * x[i];
        sumXY += x[i] * Y[i];
    }

    double denominator = n * sumX2 - sumX * sumX;
    if (denominator == 0) {
        fout << "Error: Denominator zero, cannot compute regression coefficients." << endl;
        return 1;
    }

    double b = (n * sumXY - sumX * sumY) / denominator;
    double a = (sumY - b * sumX) / n;

    double A = exp(a);  

    fout << fixed << setprecision(6);
    fout << "Linearized model: Y = a + b x" << endl;
    fout << "a = " << a << endl;
    fout << "b = " << b << endl << endl;

    fout << "Original model: y = A * e^(B * x)" << endl;
    fout << "A = " << A << endl;
    fout << "B = " << b << endl << endl;

     
    double y_query = A * exp(b * x_query);
    fout << "Predicted y at x = " << x_query << " is " << y_query << endl;

    fin.close();
    fout.close();
    return 0;
}

