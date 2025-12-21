#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
   ifstream fin("input.txt");
   ofstream fout("output.txt");

   int n;
   fin >> n;

   vector<double> x(n), y(n);
   for (int i = 0; i < n; i++) {
       fin >> x[i] >> y[i];
   }

    
   vector<double> diff = y;
   vector<double> firstDiff, secondDiff, thirdDiff;

   
   for (int i = 0; i < n - 1; i++) {
       firstDiff.push_back(diff[i + 1] - diff[i]);
   }
   diff = firstDiff;

    
   if (n > 2) {
       for (int i = 0; i < n - 2; i++) {
           secondDiff.push_back(diff[i + 1] - diff[i]);
       }
       diff = secondDiff;
   }

    
   if (n > 3) {
       for (int i = 0; i < n - 3; i++) {
           thirdDiff.push_back(diff[i + 1] - diff[i]);
       }
   }

   double h = x[1] - x[0];  

    
   double derivative = 0.0;
   derivative += firstDiff.size() > 0 ? firstDiff[0] : 0;
   derivative -= secondDiff.size() > 0 ? 0.5 * secondDiff[0] : 0;
   derivative += thirdDiff.size() > 0 ? (1.0 / 3.0) * thirdDiff[0] : 0;

   derivative /= h;

   fout << "Approximate derivative at x = " << x[0] << " is " << derivative << endl;

   fin.close();
   fout.close();
   return 0;
}

