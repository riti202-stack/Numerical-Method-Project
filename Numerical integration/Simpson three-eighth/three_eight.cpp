#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;
    double a, b;
    fin >> a >> b;

    if (n % 3 != 0) {
        fout << "Error: Number of intervals n must be a multiple of 3." << endl;
        return 1;
    }

    vector<double> f(n + 1);
    for (int i = 0; i <= n; i++) {
        fin >> f[i];
    }

    double h = (b - a) / n;
    double integral = f[0] + f[n];

    
    for (int i = 1; i < n; i++) {
        if (i % 3 == 0)
            integral += 2 * f[i];
        else
            integral += 3 * f[i];
    }

    integral *= (3 * h / 8.0);

    fout << "Approximate integral value is " << integral << endl;

    fin.close();
    fout.close();

    return 0;
}
