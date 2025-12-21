#include <iostream>
#include <fstream>
#include <vector>
#include <cmath> // For tgamma
#include <iomanip>
using namespace std;

// Build backward difference table
void buildBackwardDifferenceTable(vector<vector<double>> &bwdDiffTable, int numPoints) {
    for(int order = 1; order < numPoints; order++) { // order = 1 to numPoints-1
        for(int i = numPoints-1; i >= order; i--) {
            bwdDiffTable[i][order] = bwdDiffTable[i][order-1] - bwdDiffTable[i-1][order-1];
        }
    }
}

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

    int numPoints;       // Number of data points
    double targetX;
    fin >> numPoints >> targetX;

    if (numPoints < 2) {
        cerr << "Error: At least 2 data points are required.\n";
        return 1;
    }

    vector<double> xValues(numPoints), yValues(numPoints);
    for(int i = 0; i < numPoints; i++) {
        fin >> xValues[i] >> yValues[i];
    }

    double spacing = xValues[1] - xValues[0]; 
    double p = (targetX - xValues[numPoints-1]) / spacing; 
    
    vector<vector<double>> bwdDiffTable(numPoints, vector<double>(numPoints, 0));
    for(int i = 0; i < numPoints; i++) bwdDiffTable[i][0] = yValues[i];

    buildBackwardDifferenceTable(bwdDiffTable, numPoints);

    double estimatedY = yValues[numPoints-1];
    double pTerm = 1;
    for(int order = 1; order < numPoints; order++) {
        pTerm *= (p + (order-1));
        estimatedY += (pTerm / tgamma(order+1)) * bwdDiffTable[numPoints-1][order]; 
    }

    fout << fixed << setprecision(6);
    fout << "Estimated value at x = " << targetX << " is " << estimatedY << endl;

    fin.close();
    fout.close();
    return 0;
}
