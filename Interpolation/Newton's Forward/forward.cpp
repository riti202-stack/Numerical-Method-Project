#include <iostream>
#include <fstream>
#include <vector>
#include <cmath> 
using namespace std;

 
void buildForwardDifferenceTable(vector<vector<double>> &fwdDiffTable, int numPoints) {
    for(int level = 1; level <= numPoints; level++) {
        for(int i = 0; i <= numPoints - level; i++) {
            fwdDiffTable[i][level] = fwdDiffTable[i+1][level-1] - fwdDiffTable[i][level-1];
        }
    }
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int numPoints;
    double targetX;
    fin >> numPoints >> targetX;

    vector<double> xValues(numPoints+1), yValues(numPoints+1);
    for(int i = 0; i <= numPoints; i++) {
        fin >> xValues[i] >> yValues[i];
    }

    double spacing = xValues[1] - xValues[0];  
    double p = (targetX - xValues[0]) / spacing;

    
    vector<vector<double>> fwdDiffTable(numPoints+1, vector<double>(numPoints+1, 0));
    for(int i = 0; i <= numPoints; i++) fwdDiffTable[i][0] = yValues[i];
    buildForwardDifferenceTable(fwdDiffTable, numPoints);

    
    double estimatedY = yValues[0];
    double pTerm = 1;
    for(int order = 1; order <= numPoints; order++) {
        pTerm *= (p - (order-1));
        estimatedY += (pTerm / tgamma(order+1)) * fwdDiffTable[0][order];  
    }

    fout << "Estimated value at x = " << targetX << " is " << estimatedY << endl;

    fin.close();
    fout.close();
    return 0;
}