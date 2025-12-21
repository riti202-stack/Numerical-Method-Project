#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;
    if (n % 2 != 0) {
        fout << "Error: Number of subintervals must be even for Simpson's 1/3 rule." << endl;
        return 1;
    }

    double a, b;
    fin >> a >> b;

    vector<double> f(n + 1);
    for (int i = 0; i <= n; i++) {
        fin >> f[i];
    }

    double h = (b - a) / n;
    double integral = f[0] + f[n];

    
    double odd_sum = 0;
    for (int i = 1; i < n; i += 2) {
        odd_sum += f[i];
    }
    integral += 4 * odd_sum;

    
    double even_sum = 0;
    for (int i = 2; i < n; i += 2) {
        even_sum += f[i];
    }
    integral += 2 * even_sum;

    integral *= (h / 3);

    fout << "Approximate integral value is " << integral << endl;

    fin.close();
    fout.close();
    return 0;
}
