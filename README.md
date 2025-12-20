# Numerical-Method-Project

  - [Nonlinear Equation solving Methods](#nonlinear-equation-solving-methods)

    - [Bisection Method](#bisection-method)
      - [Theory](#bisection-theory)
      - [Code](#bisection-code)
      - [input file](#bisection-input)
      - [output file](#bisection-output)
    - [False Position Method](#false-position-method)
      - [Theory](#false-position-theory)
      - [Code](#false-position-code)
      - [input file](#false-position-input)
      - [output file](#false-position-output)
    - [Secant Method](#Secant-method)
      - [Theory](#secant-method-theory)
      - [Code](#secant-method-code)
      - [input file](#secant-method-input-file)
      - [output file](#secant-method-output-file)
    - [Newton Raphson Method](#newton-raphson-method)
      - [Theory](#newton-raphson-method-theory)
      - [Code](#newton-raphson-method-code)
      - [input file](#newton-raphson-method-input-file)
      - [output file](#newton-raphson-method-output-file)
        
 - [Linear Equation Solving System](#linear-equation-solving-system)
    - [LU Decomposition Method](#lu-decomposition)
       - [Theory](#lu-decomposition-theory)
       - [Code](#lu-decomposition-code)
       - [Input file](#lu-decomposition-input)
       - [Output file](#lu-decomposition-theory)
     - [Gauss Elimination Method](#gauss-elimination)
        - [Theory](#gauss-elimination-theory)
        - [Code](#lgauss-elimination-code)
        - [Input file](#gauss-elimination-input)
        - [Output file](#gauss-elimination-output)
      - [Gauss Jordan Elimination Mrthod](#gauss-jordan-elimonation)
         - [Theory](#gauss-jordan-elimination-theory)
         - [Code](#gauss-jordan-elimination-code)
         - [Input file](#gauss-jordan-elimination-input)
         - [Output file](#gauss-jordan-elimination-output)

      - [Matrix Inversion](#matrix-inversion)
         - [Theory](#matrix-inversion-theory)
         - [Code](#matrix-inversion-theory)
         - [Input file](#matrix-inversion-theory)
         - [Output file](#matrix-inversion-theory)

---
 
 - [Ordinary Differential Equation solving Methods](#ordinary-differential-equation-solving-methods)

    - [Runge Kutta Method](#runge-kutta-method)
      - [Theory](#runge-kutta-method-theory)
      - [Code](#runge-kutta-method-code)
      - [input file](#runge-kutta-method-input)
      - [output file](#runge-kutta-method-output)
  - [Interpolation Methods](#interpolation-methods)

    - [Newtons Forward Interpolation Method](#newtons-forward-interpolation-method)
      - [Theory](#newtons-forward-interpolation-method-theory)
      - [Code](#newtons-forward-interpolation-method-code)
      - [input file](#newtons-forward-interpolation-method-input)
      - [output file](#newtons-forward-interpolation-method-output)
        
     - [Newtons Backward Interpolation Method](#newtons-backward-interpolation-method)
       - [Theory](#newtons-backward-interpolation-method-theory)
       - [Code](#newtons-backward-interpolation-method-code)
       - [input file](#newtons-backward-interpolation-method-input)
       - [output file](#newtons-backward-interpolation-method-output)
      - [Newtons Divided Difference Interpolation Method](#newtons-divided-difference-interpolation-method)
        - [Theory](#newtons-divided-difference-interpolation-method-theory)
        - [Code](#newtons-divided-difference-interpolation-method-code)
        - [input file](#newtons-divided-difference-interpolation-method-input)
        - [output file](#newtons-divided-difference-interpolation-method-output)
 - [Neumerical Differentiation solving Methods](#numerical-differentiation-solving-methods)

    - [Neumerical Differentiation By Forward Interpolation Method](#neumerical-differentiation-by-forward-interpolation-method)
      - [Theory](#neumerical-differentiation-by-forward-interpolation-method-theory)
      - [Code](#neumerical-differentiation-by-forward-interpolation-method-code)
      - [input file](#neumerical-differentiation-by-forward-interpolation-method-input)
      - [output file](#neumerical-differentiation-by-forward-interpolation-method-output)
     - [Neumerical Differentiation By Backward Interpolation Method](#neumerical-differentiation-by-backward-interpolation-method)
       - [Theory](#neumerical-differentiation-by-backward-interpolation-method-theory)
       - [Code](#neumerical-differentiation-by-backward-interpolation-method-code)
       - [input file](#neumerical-differentiation-by-backward-interpolation-method-input)
       - [output file](#neumerical-differentiation-by-backward-interpolation-method-output)
- [Solution of Numerical Integrations](#solution-of-numerical-integrations)
  - [Simpsons One-Third Rule](#simpsons-one-third-rule)
    - [Theory](#simpsons-one-third-rule-theory)
    - [Code](#simpsons-one-third-rule-code)
    - [Input](#simpsons-one-third-rule-input)
    - [Output](#simpsons-one-third-rule-output)
  - [Simpsons Three-Eighths Rule](#simpsons-three-eighths-rule)
    - [Theory](#simpsons-three-eighths-rule-theory)
    - [Code](#simpsons-three-eighths-rule-code)
    - [Input](#simpsons-three-eighths-rule-input)
    - [Output](#simpsons-three-eighths-rule-output)
- [Solution of Curve Fitting Model](#solution-of-curve-fitting-model)
  - [Least Square Regression Method For Linear Equations](#least-square-regression-method-for-linear-equations-method)
    - [Theory](#least-square-regression-method-for-linear-equations-theory)
    - [Code](#least-square-regression-method-for-linear-equations-code)
    - [Input](#least-square-regression-method-for-linear-equations-input)
    - [Output](#least-square-regression-method-for-linear-equations-output)
  - [Least Square Regression Method For Transcendental Equations](#least-square-regression-method-for-transcendental-equations)
    - [Theory](#least-square-regression-method-for-transcendental-equations-theory)
    - [Code](#least-square-regression-method-for-transcendental-equations-code)
    - [Input](#least-square-regression-method-for-transcendental-equations-input)
    - [Output](#least-square-regression-method-for-transcendental-equations-output)
  - [Least Square Regression Method For Polynomial Equations](#least-square-regression-method-for-polynomial-equations)
    - [Theory](#least-square-regression-method-for-polynomial-equations-theory)
    - [Code](#least-square-regression-method-for-polynomial-equations-code)
    - [Input](#least-square-regression-method-for-polynomial-equations-input)
    - [Output](#least-square-regression-method-for-polynomial-equations-output)
  ---

  # Nonlinear Equation solving Methods

  ## Bisection Method

  #### Bisection Theory
  <details>
  <summary>Click to expand Theory</summary>
  
<br>
 
 ---
 
  
&nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Bisection Method: Theory and Application}}$

&emsp;&emsp;The *Bisection Method* is a fundamental root-finding algorithm in numerical analysis. It is a $\color{orange}{\mathbf{bracketing method}}$ used to find the real                     <br>&emsp;&emsp;roots of a continuous function f(x) = 0.

 1. $\color{Hotpink}{\mathbf{Mathematical Principle}}$ : The method is based on the $\color{orange}{\mathbf{Intermediate Value Theorem (IVT)}}$.

    - $\color{red}{\mathbf{Theorem}}$: If a continuous function f(x) on a closed interval [a,b] satisfies f(a)*f(b) < 0 (meaning the signs of f(a) and f(b) are opposite), then there exists at least one value c in (a, b) such that f(c) = 0.

 2. $\color{Hotpink}{\mathbf{The Algorithm}}$ : The Bisection Method repeatedly halves the interval and checks which sub-interval contains the root.

    - Initialization: Choose an interval [a,b] such that f(a)* f(b) < 0.
    - Bisection: Calculate the midpoint m = {a + b}/2.
    - Sign Check:
      - If f(m) = 0, then m is the root.
      - If f(a)*f(m) < 0, the root lies in [a,m]. Set b = m
      - If f(m)*f(b) < 0, the root lies in [m, b]. Set a = m.
    - Repeat: Continue steps 2 and 3 until the interval width $|b - a|$ is smaller than the desired tolerance $\epsilon$.


	  ![bisection-img](./bisection.png)
3. $\large\color{Hotpink}{\mathbf{Discussion}}$ : The Bisection Method is widely used in science and engineering to solve nonlinear equations, polynomials, and transcendental functions. In electrical engineering, it helps find operating points in circuits, while in mechanical engineering it is applied to vibrations, stress analysis, and dynamics. It is also used in control systems to determine stable parameters and in physics and chemistry to find equilibrium points and reaction constants. The method is highly reliable and stable, as it guarantees convergence if the initial interval satisfies the sign-change condition. Although its convergence is relatively slow compared to other methods, its simplicity, robustness, and predictable error control make it very effective. Overall, the Bisection Method is a dependable root-finding tool, often used as a preliminary step before applying faster numerical methods.


| Iteration | a     | b     | c = (a+b)/2 | f(c)   | New Interval   |
| --------- | ----- | ----- | ----------- |  ----- | -------------- |
| 1         | 1.000 | 2.000 | 1.500       | -0.125 | [1.5, 2]       |
| 2         | 1.500 | 2.000 | 1.750       | 1.609  | [1.5, 1.75]    |
| 3         | 1.500 | 1.750 | 1.625       | 0.666  | [1.5, 1.625]   |
| 4         | 1.500 | 1.625 | 1.563       | 0.252  | [1.5, 1.563]   |
| 5         | 1.500 | 1.563 | 1.531       | 0.059  | [1.5, 1.531]   |
| 6         | 1.500 | 1.531 | 1.516       | -0.034 | [1.516, 1.531] |
| 7         | 1.516 | 1.531 | 1.523       | 0.012  | [1.516, 1.523] |


   
<br>

	  


 ---

 

</details>

#### Bisection Code

 <details>
  <summary>Click to expand Code</summary>

  ```cpp

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function definition
double f(double x) {
    return x*x*x - x - 2;   // Example: x^3 - x - 2 = 0
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    double a, b, tol, c;
    int iteration = 1;

    // Read input
    fin >> a >> b;
    fin >> tol;

    // Check validity of interval
    if (f(a) * f(b) >= 0) {
        fout << "Invalid interval. Bisection method cannot be applied.\n";
        return 0;
    }

    fout << fixed << setprecision(6);
    fout << "Iteration\t a\t\t b\t\t c\t\t f(c)\n";

    // Loop until tolerance condition is satisfied
    while (true) {
        c = (a + b) / 2;

        fout << iteration << "\t\t"
             << a << "\t"
             << b << "\t"
             << c << "\t"
             << f(c) << endl;

        // Stopping condition
        if (fabs(f(c)) < tol || fabs(b - a) < tol) {
            fout << "\nRoot found at x = " << c << endl;
            fout << "Converged in " << iteration << " iterations.\n";
            break;
        }

        // Update interval
        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;

        iteration++;
    }

    fin.close();
    fout.close();

    return 0;
}
```
  




	 
 </details>

 #### Bisection Input

 <details>
	 <summary>
		 Click to See Input file
	 </summary>

  ```
  1 2
  0.0001
  ```
<br> 
Here at first line   
      we take the assumed interval a,b as input and in second line 
	  the value of tolarence is taken as input <br>
	 
 </details>

 #### Bisection Output

 <details>
	 <summary>
		 Click to see Output 
	 </summary>
	 
```
Iteration 	a	      b	          c	         f(c)
1		1.000000 	2.000000 	1.500000 	-0.125000
2		1.500000  	2.000000 	1.750000 	1.609375
3		1.500000  	1.750000 	1.625000 	0.666016
4		1.500000      1.625000 	1.562500 	0.252197
5		1.500000      1.562500 	1.531250 	0.059113
6		1.500000  	1.531250 	1.515625 	-0.034054
7		1.515625  	1.531250 	1.523438 	0.012250
8		1.515625  	1.523438 	1.519531 	-0.010971
9		1.519531  	1.523438 	1.521484 	0.000622
10		1.519531  	1.521484 	1.520508 	-0.005179
11		1.520508  	1.521484 	1.520996 	-0.002279
12		1.520996  	1.521484 	1.521240 	-0.000829
13		1.521240  	1.521484 	1.521362 	-0.000103


Root found at x = 1.521362
Converged in 13 iterations.
```

	 
 </details>

   ## False Position Method

   ### False Position Theory
   <details>
	   <summary>
		   Click to see Theory
	   </summary>
	   <br>
	   &emsp;&emsp; :blue_book: $\huge\color{magenta}{\mathbf{False Position Method: Theory and Application}}$ : <i>The False Position Method, also known by its Latin name                         Regula Falsi, is an iterative numerical method used to find the roots                                                                                                        of a continuous function f(x) = 0. It is a bracketing method, meaning                                                                                                         it requires two initial guesses that surround the actual root.</i><br>
	                 <i>While it is similar to the Bisection Method, False Position is                                                                                                                generally more efficient because it uses the values of the                                                                                                                   function to estimate the root's location rather than just                                                                                                                     splitting the interval in half</i>.<br><br>
  &emsp;&emsp;&emsp; :mortar_board: $\large\color{yellow}{\mathbf{Mathematical Explanation}}$ : The method assumes that over a small enough interval, the function $f(x)$ behaves approximately like a straight line. Instead of picking the midpoint of an interval $[a, b]$, it finds the x-intercept of the straight line (secant line) connecting the points $(a, f(a))$ and $(b, f(b))$.

  The method assumes that over a small enough interval, the function $f(x)$ behaves approximately like a straight line. Instead of picking the midpoint of an interval $[a, b]$, it finds the x-intercept of the straight line (secant line) connecting the points $(a, f(a))$ and $(b, f(b))$.

  &emsp;&emsp;&emsp; :mortar_board: $\large\color{yellow}{\mathbf{Mathematical Explanation}}$ : To find the root of $f(x) = 0$ using False Position:Choose Initial Guesses: Find two points $a$ and $b$ such that $f(a)$ and $f(b)$ have opposite signs (i.e., $f(a) \cdot f(b) < 0$). This ensures a root exists between them.Calculate $x_r$: Use the formula above to find the first estimate.Evaluate the Function: Calculate $f(x_r)$.Update the Interval:If $f(a) \cdot f(x_r) < 0$, the root lies between $a$ and $x_r$. Set $b = x_r$.If $f(a) \cdot f(x_r) > 0$, the root lies between $x_r$ and $b$. Set $a = x_r$.Repeat: Continue the process until the value of $f(x_r)$ is sufficiently close to zero or the change in $x_r$ is smaller than a predefined tolerance.

  

	        
	   
	   
   </details>



 # Ordinary Differential Equation solving Methods

  ## Runge Kutta Method

  #### Runge Kutta Method Theory
    
  <details>
    <summary>Click to expand Theory</summary>
 &nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{RK Method: Theory and Application}}$
	  <br>
The Runge–Kutta methods are numerical techniques used to solve ordinary differential equations (ODEs).The 4th-order Runge-Kutta method (RK4) is the most commonly used and provides a good balance between accuracy and computational efficiency.It can solve of the form:
    dy/dx= f(x,y),   y(x0)=y0
Instead of using only the slope at one point, RK methods take several slope estimates within the step and combine them to get a more accurate result.
	  <br>
  $\color{Hotpink}{\mathbf{ RK 4th Order Formula:}}$ :  
  
For step size h:
<br>
    k1=h*f(xn,yn)<br>
    k2=h*f(xn+(h/2),yn+(k1/2))<br>
    k3=h*f(xn+(h/2),yn+(k2/2))<br>
    k4=h*f(xn+h,yn+k3)<br>
    yn+1=yn+(1/6)(k1+2k2+2k3+k4)
	<br>
$\color{Hotpink}{\mathbf{Example Problem:}}$ : 
 
Solve dy/dx=x+y   where,y(0)=1<br>
Find y(0.1) using RK 4th order<br>

Step 1: Given<br>
	•	f(x,y) = x + y<br>
	•	x_0 = 0, y_0 = 1<br>
	•	Step size h = 0.1<br>

⸻

Step 2: Compute k values<br>
k1 = 0.1(0 + 1) = 0.1<br>
k2= 0.1(0.05 + 1.05) = 0.11<br>
k3= 0.1(0.05 + 1.055) = 0.1105<br>
k4= 0.1(0.1 + 1.1105) = 0.12105<br>

⸻

Step 3: Compute y1<br>
y(0.1) = 1 + (1/6)(0.1 + 2(0.11) + 2(0.1105) + 0.12105)<br>
       =1 + 0.11034<br>
       =1.11034
	   
 ⸻

 Final Answer:<br>
  Approax 1.11034
</details>

 #### Runge Kutta Method Code
```python
 #include <iostream>
#include <fstream>
using namespace std;

 
double f(double x, double y)
{
    return x*x + y;
}

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    double x0, y0, h, xn;
    fin >> x0 >> y0 >> h >> xn;

    double x = x0;
    double y = y0;

    while (x < xn)
    {
        double k1 = h * f(x, y);
        double k2 = h * f(x + h/2, y + k1/2);
        double k3 = h * f(x + h/2, y + k2/2);
        double k4 = h * f(x + h, y + k3);

        y = y + (k1 + 2*k2 + 2*k3 + k4) / 6;
        x = x + h;
    }

    fout << "For dy/dx = x^2 + y" << endl;
    fout << "Value of y at x = " << xn << " is " << y << endl;

    fin.close();
    fout.close();

    return 0;
}
```
#### Runge Kutta Method Input
```
 0 1 0.1 0.2
```
#### Runge Kutta Method Output
```
 For dy/dx = x^2 + y
Value of y at x = 0.2 is 1.253
```

  # Interpolation Methods

  ## Newtons Forward Interpolation Method

  #### Newtons Forward Interpolation Method Theory
 <details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Newton's\ Forward\ Interpolation}}$

Newton’s Forward Interpolation is a **numerical method** used to estimate the value of a function when the function values are known at a set of **equally spaced points**. This method is most suitable when the required value lies **near the beginning** of the data set.

1. $\color{Hotpink}{\mathbf{When\ to\ Use}}$  
    - Independent variable values are **equally spaced**.  
    - Interpolation point is **close to the first data point**.  
    - Only **discrete data values** are available (no explicit function).

2. $\color{Hotpink}{\mathbf{Basic\ Idea}}$  
    - Constructs an **interpolating polynomial** using **forward differences**.  
    - Provides an approximate value of the function within the given range.

3. $\color{Hotpink}{\mathbf{Notation}}$  
    - Let the data points be: $(x_0, y_0), (x_1, y_1), (x_2, y_2), \dots$  
    - Uniform spacing: $h = x_1 - x_0$  
    - Define: $p = \frac{x - x_0}{h}$

4. $\color{Hotpink}{\mathbf{Formula}}$  

y = y0 + pΔy0 + p(p-1)/2!Δ²y0 + p(p-1)*(p-2)/3!*Δ³y0 + …

Where:  
- $\Delta y_0$ is the first forward difference  
- $\Delta^2 y_0$ is the second forward difference  
- Higher-order differences improve accuracy

5. $\color{Hotpink}{\mathbf{Key\ Characteristics}}$  
    - Falls under **linear numerical interpolation methods**.  
    - Produces a **polynomial approximation**.  
    - Does **not** solve differential or non-linear equations.  
    - Accuracy increases with higher-order differences.

6. $\color{Hotpink}{\mathbf{Applications}}$  
    - Estimating missing values in tables.  
    - Engineering and scientific computations.  
    - Data approximation in numerical analysis.  
    - Pre-processing for curve fitting.

---

### :pencil2: Example

Given the data:

| x | 0 | 1 | 2 | 3 |
|---|---|---|---|---|
| y | 1 | 2 | 5 | 10 |

Find \(y\) at \(x = 0.5\).

**Step 1: Difference Table**

| x | y | Δy | Δ²y |
|---|---|----|----|
| 0 | 1 | 1 | 2 |
| 1 | 2 | 3 | 2 |
| 2 | 5 | 5 |   |
| 3 | 10 |   |   |

**Step 2: Compute \(p\)**

h = 1, x0 = 0<br>
p = (0.5 - 0)/1 = 0.5

**Step 3: Apply Newton’s Forward Formula**

y = y0 + pΔy0 + p(p-1)/2 * Δ²y0<br>
y = 1 + (0.5)1 + (0.5(-0.5)/2)*2<br>
y = 1 + 0.5 - 0.25<br>
y = 1.25

**Final Answer:**  
y(0.5) ≈ 1.25

---

</details>


 #### Newtons Forward Interpolation Method Code
```python
#include <iostream>
#include <fstream>
#include <vector>
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
```
#### Newtons Forward Interpolation Method Input
```
 3 0.5
0 1
1 2
2 5
3 10
```
#### Newtons Forward Interpolation Method Output
```
Estimated value at x = 0.5 is 1.25
```
#### Newton’s Backward Interpolation Method Theory
<details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Newton's\ Backward\ Interpolation}}$

Newton’s Backward Interpolation is a **numerical method** used to estimate the value of a function when the function values are known at a set of **equally spaced points**. This method is most suitable when the required value lies **near the end** of the data set.

1. $\color{Hotpink}{\mathbf{When\ to\ Use}}$    
    - Independent variable values are **equally spaced**.  
    - Interpolation point is **close to the last data point**.  
    - Only **discrete data values** are available (no explicit function).

2. $\color{Hotpink}{\mathbf{Basic\Idea}}$  
    - Constructs an **interpolating polynomial** using **backward differences**.  
    - Provides an approximate value of the function within the given range.

3. $\color{Hotpink}{\mathbf{Notation}}$    
    - Data points: `(x0, y0), (x1, y1), (x2, y2), ..., (xn, yn)`  
    - Uniform spacing: `h = x1 - x0`  
    - Define: `p = (x - xn) / h`  (xn = last data point)

4. $\color{Hotpink}{\mathbf{Formula}}$  
  y = yn + pΔy_n + p(p+1)/2!Δ²y_n + p(p+1)*(p+2)/3!*Δ³y_n + …
Where:  
- `Δy_n` is the first backward difference  
- `Δ²y_n` is the second backward difference  
- Higher-order differences improve accuracy

5. $\color{Hotpink}{\mathbf{Key\ Characteristics}}$    
    - Falls under **linear numerical interpolation methods**.  
    - Produces a **polynomial approximation**.  
    - Does **not** solve differential or non-linear equations.  
    - Accuracy increases with higher-order differences.

6. $\color{Hotpink}{\mathbf{Applications}}$  
    - Estimating missing values in tables.  
    - Engineering and scientific computations.  
    - Data approximation in numerical analysis.  
    - Pre-processing for curve fitting.

---

### :pencil2: Example

Given the data:

| x | 0 | 1 | 2 | 3 |
|---|---|---|---|---|
| y | 1 | 2 | 5 | 10 |

Find `y` at `x = 2.5`.

**Step 1: Backward Difference Table**

| x | y | Δy | Δ²y |
|---|---|----|----|
| 0 | 1 |   |   |
| 1 | 2 |   |   |
| 2 | 5 | 3 | 2 |
| 3 | 10 | 5 | 2 |

**Step 2: Compute `p`**
h = 1, xn = 3<br>
p = (2.5 - 3)/1 = -0.5

**Step 3: Apply Newton’s Backward Formula**

y = yn + pΔy_n + p(p+1)/2 * Δ²y_n<br>
y = 10 + (-0.5)5 + (-0.50.5)/2*2<br>
y = 10 - 2.5 + (-0.25/2)*2<br>
y = 10 - 2.5 - 0.25<br>
y = 7.25

**Final Answer:**

y(2.5) ≈ 7.25

---

</details>

#### Newtons Backward Interpolation Method Code
```python
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

 
void buildBackwardDifferenceTable(vector<vector<double>> &bwdDiffTable, int numPoints) {
    for(int order = 1; order <= numPoints; order++) {
        for(int i = numPoints; i >= order; i--) {
            bwdDiffTable[i][order] = bwdDiffTable[i][order-1] - bwdDiffTable[i-1][order-1];
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
    double p = (targetX - xValues[numPoints]) / spacing; 
    
    vector<vector<double>> bwdDiffTable(numPoints+1, vector<double>(numPoints+1, 0));
    for(int i = 0; i <= numPoints; i++) bwdDiffTable[i][0] = yValues[i];
    buildBackwardDifferenceTable(bwdDiffTable, numPoints);

    
    double estimatedY = yValues[numPoints];
    double pTerm = 1;
    for(int order = 1; order <= numPoints; order++) {
        pTerm *= (p + (order-1));
        estimatedY += (pTerm / tgamma(order+1)) * bwdDiffTable[numPoints][order]; 
    }

    fout << "Estimated value at x = " << targetX << " is " << estimatedY << endl;

    fin.close();
    fout.close();
    return 0;
}

```

#### Newtons Backward Interpolation Method Input

```
3 2.5
0 1
1 2
2 5
3 10
```

#### Newtons Backward Interpolation Method Output

```
Estimated value at x = 2.5 is 7.25
```  

#### Newtons Divided Difference Interpolation Method Theory
<details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Newton's\ Divided\ Difference\ Interpolation}}$

Newton’s Divided Difference Interpolation is a **numerical method** used to estimate the value of a function when the function values are known at a set of **unequally spaced data points**. This method is useful when data points are not equally spaced and provides an efficient way to construct an interpolating polynomial.

1. $\color{Hotpink}{\mathbf{When\ to\ Use}}$  
    - Independent variable values are **unequally spaced**.  
    - Interpolation point lies **anywhere within the data range**.  
    - Only **discrete data values** are available.

2. $\color{Hotpink}{\mathbf{Basic\ Idea}}$  
    - Constructs an **interpolating polynomial** using **divided differences**.  
    - Each higher-order divided difference improves the approximation.

3. $\color{Hotpink}{\mathbf{Notation}}$  
    - Let the data points be: $(x_0, y_0), (x_1, y_1), (x_2, y_2), \dots$  
    - Divided difference symbols:  
      - $f[x_0] = y_0$  
      - $f[x_0, x_1]$ = first divided difference  
      - $f[x_0, x_1, x_2]$ = second divided difference  

4. $\color{Hotpink}{\mathbf{Formula}}$  

\
P(x) = f[x_0]
+ (x - x_0)f[x_0, x_1]
+ (x - x_0)(x - x_1)f[x_0, x_1, x_2]
+ ....
  

Where:  
- $f[x_0, x_1] = \dfrac{f(x_1) - f(x_0)}{x_1 - x_0}$  
- Higher-order divided differences are computed recursively

5. $\color{Hotpink}{\mathbf{Key\ Characteristics}}$  
    - Works for **unequal interval data**.  
    - Polynomial form is **incremental** (easy to add new data points).  
    - More flexible than forward or backward interpolation.  
    - Accuracy increases with higher-order terms.

6. $\color{Hotpink}{\mathbf{Applications}}$  
    - Interpolation of experimental or tabulated data.  
    - Engineering and scientific computations.  
    - Numerical data fitting and approximation.  
    - Basis for numerical differentiation and integration.

---

### :pencil2: Example

Given the data:

| x | 1 | 2 | 4 |
|---|---|---|---|
| y | 1 | 4 | 16 |

Find \(y\) at \(x = 3\).

**Step 1: Divided Difference Table**

| x | y | First DD | Second DD |
|---|---|----------|-----------|
| 1 | 1 | 3        | 1         |
| 2 | 4 | 6        |           |
| 4 |16 |          |           |

**Step 2: Construct the Polynomial**

\
P(x) = 1 + (x - 1)3 + (x - 1)(x - 2)1


**Step 3: Evaluate at \(x = 3\)**

\
P(3) = 1 + (2)3 + (2)(1) = 9


**Final Answer:**  
y(3) ≈ 9

---

</details>

 #### Newtons Divided Difference Interpolation Method Code
```python
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

```
#### Newtons Divided Difference Interpolation Method Input
```
3
1 1
2 4
4 16
3

```
#### Newtons Divided Difference Interpolation Method Output
```
Interpolated value at x = 3 is 9

```

# Neumerical Differentiation solving Methods 
## Neumerical Differentiation By Forward Interpolation Method
### Neumerical Differentiation By Forward Interpolation Method Theory

 
<details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Numerical\ Differentiation\ using\ Newton's\ Forward\ Interpolation}}$

Numerical Differentiation using Newton’s Forward Interpolation is a **numerical technique** used to approximate the **derivative of a function** when only **tabulated data** at **equally spaced points** is available. This method is most suitable when the required derivative is needed **near the beginning** of the data set.

1. $\color{Hotpink}{\mathbf{When\ to\ Use}}$  
    - Data points are **equally spaced**.  
    - Derivative is required **near the first data point**.  
    - Function is known only through **discrete values**.

2. $\color{Hotpink}{\mathbf{Basic\ Idea}}$  
    - Start with **Newton’s Forward Interpolation Polynomial**.  
    - Differentiate the polynomial **with respect to x**.  
    - Obtain formulas for first and higher-order derivatives.

3. $\color{Hotpink}{\mathbf{Notation}}$  
    - Data points: $(x_0, y_0), (x_1, y_1), (x_2, y_2), \dots$  
    - Step size: $h = x_1 - x_0$  
    - Parameter: $p = \frac{x - x_0}{h}$  
    - $\Delta y_0, \Delta^2 y_0, \Delta^3 y_0, \dots$ are forward differences

4. $\color{Hotpink}{\mathbf{Newton’s\ Forward\ Interpolation\ Formula}}$  

y = y0 + pΔy0<br>
    + [p(p − 1) / 2!] Δ²y0<br>
    + [p(p − 1)(p − 2) / 3!] Δ³y0<br>
    + ...<br>


5. $\color{Hotpink}{\mathbf{First\ Derivative\ Formula}}$  

By differentiating the above equation:

(dy/dx) at x = x0<br>
= (1/h) * [ Δy0 - (1/2)Δ²y0 + (1/3)Δ³y0 - ... ]<br>


6. $\color{Hotpink}{\mathbf{Key\ Characteristics}}$  
    - Based on **forward differences**.  
    - Accuracy improves with **more data points**.  
    - Best suited for **initial-region differentiation**.  
    - Simple and efficient for tabulated data.

7. $\color{Hotpink}{\mathbf{Applications}}$  
    - Estimating velocity and acceleration from position data.  
    - Engineering and physics problems.  
    - Scientific data analysis.  
    - Numerical methods and computation labs.

---

### :pencil2: Example

Given the data:

| x | 0 | 1 | 2 | 3 |
|---|---|---|---|---|
| y | 1 | 2 | 5 | 10 |

Find the first derivative at \(x = 0\).

**Step 1: Forward Difference Table**

| x | y | Δy | Δ²y |
|---|---|----|----|
| 0 | 1 | 1 | 2 |
| 1 | 2 | 3 | 2 |
| 2 | 5 | 5 |   |
| 3 |10 |   |   |

**Step 2: Identify values**

h = 1,    Δy₀ = 1,    Δ²y₀ = 2


**Step 3: Apply differentiation formula**

(dy/dx) at x = 0<br> 
= (1/1) * (1 - (1/2) × 2)<br> 
= 0<br>


**Final Answer:**  
(dy/dx) at x = 0 ≈ 0


---

</details>

  ### Neumerical Differentiation By Forward Interpolation Method Code
 ```python
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


```
#### Neumerical Differentiation By Forward Interpolation Method Input
```
4
0 1
1 2
2 5
3 10


```
#### Neumerical Differentiation By Forward Interpolation Method Output
```
Approximate derivative at x = 0 is 0

``` 
#### Neumerical Differentiation By Backward Interpolation Method Theory
<details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Numerical\ Differentiation\ using\ Newton's\ Backward\ Interpolation}}$

Newton’s Backward Interpolation is a **numerical method** used to approximate the **derivative of a function** when the function values are known at a set of **equally spaced points**, especially useful for estimating the derivative **near the end** of the data set.

1. $\color{Hotpink}{\mathbf{When\ to\ Use}}$  
    - Data points are **equally spaced**.  
    - Derivative is required **near the last data point**.  
    - Function values are known only at **discrete points**.

2. $\color{Hotpink}{\mathbf{Basic\ Idea}}$  
    - Constructs **Newton’s Backward Interpolation Polynomial**.  
    - Differentiate the polynomial with respect to \(x\).  
    - Use backward differences to approximate the derivative.

3. $\color{Hotpink}{\mathbf{Notation}}$  
    - Data points: (x₀, y₀), (x₁, y₁), ..., (xₙ, yₙ) 
    - Step size: h = x₁ - x₀ (assumed uniform spacing)  
    - Define: p = (x - x_n) / h (distance from last data point)  
    - Backward differences:∇yₙ, ∇²yₙ, ∇³yₙ, ...


4. $\color{Hotpink}{\mathbf{Newton's\ Backward\ Interpolation\ Formula}}$

y = y_n + p * ∇y_n<br> 
    + [p(p + 1) / 2!] * ∇²y_n<br> 
    + [p(p + 1)(p + 2) / 3!] * ∇³y_n<br> 
    + ...<br>


5. $\color{Hotpink}{\mathbf{First\ Derivative\ Formula}}$

By differentiating the backward interpolation polynomial:

(dy/dx) at x = x_n<br> 
= (1/h) * [ ∇y_n + (1/2) ∇²y_n + (1/3) ∇³y_n + ... ]<br>


6. $\color{Hotpink}{\mathbf{Key\ Characteristics}}$  
    - Uses **backward differences** based on last data points.  
    - Suitable for derivatives near the **end of the data set**.  
    - Accuracy improves with higher order differences and more data points.

7. $\color{Hotpink}{\mathbf{Applications}}$  
    - Estimating rates of change from discrete measurements at the end of an interval.  
    - Physics and engineering problems involving tabulated data.  
    - Numerical computation and data fitting.

---

### :pencil2: Example

Given the data:

| x | 0 | 1 | 2 | 3 |
|---|---|---|---|---|
| y | 1 | 2 | 5 | 10 |

Find the first derivative at \(x = 3\).

**Step 1: Backward Difference Table**

| x | y  | ∇y  | ∇²y |
|---|----|-----|-----|
| 0 | 1  |     |     |
| 1 | 2  |     |     |
| 2 | 5  | 3   | 1   |
| 3 | 10 | 5   | 2   |

**Step 2: Identify values**

h = 1,    ∇y₃ = 5,    ∇²y₃ = 2


**Step 3: Apply differentiation formula**

(dy/dx) at x = 3 = (1/1) * (5 + (1/2) × 2) = 6


**Final Answer:**  
(dy/dx) at x = 3 ≈ 6


---

</details>
  
  ### Neumerical Differentiation By Backward Interpolation Method Code
 ```python
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

     
    for (int i = n - 1; i > 0; i--) {
        firstDiff.push_back(diff[i] - diff[i - 1]);
    }
    diff = firstDiff;

    
    if (n > 2) {
        for (int i = firstDiff.size() - 1; i > 0; i--) {
            secondDiff.push_back(diff[i] - diff[i - 1]);
        }
        diff = secondDiff;
    }

 
    if (n > 3) {
        for (int i = secondDiff.size() - 1; i > 0; i--) {
            thirdDiff.push_back(diff[i] - diff[i - 1]);
        }
    }

    double h = x[1] - x[0];  

     
    double derivative = 0.0;
    derivative += firstDiff.size() > 0 ? firstDiff[0] : 0;
    derivative += secondDiff.size() > 0 ? 0.5 * secondDiff[0] : 0;
    derivative += thirdDiff.size() > 0 ? (1.0 / 3.0) * thirdDiff[0] : 0;

    derivative /= h;

    fout << "Approximate derivative at x = " << x[n - 1] << " is " << derivative << endl;

    fin.close();
    fout.close();
    return 0;
}

```
#### Neumerical Differentiation By Backward Interpolation Method Input
```
4
0 1
1 2
2 5
3 10



```
#### Neumerical Differentiation By Backward Interpolation Method Output
```
Approximate derivative at x = 3 is 6


``` 
# Solution of Numerical Integrations
## Simpsons One-Third Rule
### Simpsons One-Third Rule Theory

<details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Simpson's\ 1/3\ Rule}}$

Simpson’s 1/3 Rule is a **numerical integration method** used to approximate the definite integral of a function. It is especially effective when the function is smooth and the interval is divided into an even number of subintervals.

1. $\color{Hotpink}{\mathbf{When\ to\ Use}}$  
   - The interval \([a, b]\) is divided into **an even number of subintervals (n)**.  
   - The function values at these points are known or can be calculated.  
   - Suitable for functions that are reasonably smooth.

2. $\color{Hotpink}{\mathbf{Basic\ Idea}}$  
   - Approximate the function by a series of parabolas over pairs of intervals.  
   - Calculate the integral of these parabolas to estimate the area under the curve.

3. $\color{Hotpink}{\mathbf{Notation}}$  
   - \(a, b\): Limits of integration  
   - \(n\): Number of subintervals (must be even)  
   - h = (b - a) / n: Width of each subinterval  
   -x_i = a + i × h, for \(i = 0, 1, 2, ..., n\)  
   - f(x_i): Function value at \(x_i\)

4. $\color{Hotpink}{\mathbf{Formula}}$  

**Integral approximation:**
Integral ≈ (h/3) * [ f(x0) + 4 * Σ f(x_odd) + 2 * Σ f(x_even) + f(xn) ]

Where:  
- Σ f(x_odd) is the sum of function values at odd indices (x1, x3, x5, ...)  
- Σ f(x_even) is the sum of function values at even indices (x2, x4, x6, ...) excluding x0 and xn  

5. $\color{Hotpink}{\mathbf{Key\ Characteristics}}$  
   - Requires an **even number of subintervals**.  
   - More accurate than the Trapezoidal rule for smooth functions.  
   - Error decreases rapidly with smaller \(h\).  
   - Widely used in engineering and scientific calculations.

6. $\color{Hotpink}{\mathbf{Applications}}$  
   - Calculating areas and definite integrals.  
   - Physics, engineering, and statistics problems.  
   - Situations where analytical integration is difficult or impossible.

---

### :pencil2: Example

Calculate ∫₀² (1 + x³) dx using Simpson’s 1/3 rule with \(n=4\).

| i | x_i | f(x_i) = 1 + (x_i)^3 |
|---|-----|-----------------------|
| 0 | 0   | 1                     |
| 1 | 0.5 | 1.125                 |
| 2 | 1.0 | 2                     |
| 3 | 1.5 | 4.375                 |
| 4 | 2.0 | 9                     |

Calculate \(h = (2 - 0) / 4 = 0.5\).

Apply the formula:

Integral ≈ (0.5 / 3) * [1 + 4*(1.125 + 4.375) + 2*(2) + 9]<br>
= (0.1667) * [1 + 4*(5.5) + 4 + 9]<br>
= 0.1667 * [1 + 22 + 4 + 9]<br>
= 0.1667 * 36<br>
= 6<br>

---

</details>

 ###  Simpsons One-Third Rule Code
```python
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

```
#### Simpsons One-Third Rule Input
```
 4
0 2
1 1.125 2 4.375 9

```
####  Simpsons One-Third Rule Output
```
Approximate integral value is 6

```
### Simpsons Three-Eighths Rule Theory

 
<details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Simpson's\ 3/8\ Rule}}$

Simpson’s 3/8 Rule is a numerical method used to approximate the definite integral of a function. It is based on approximating the integrand by a cubic polynomial that passes through four equally spaced points.

1. $\color{Hotpink}{\mathbf{When\ to\ Use}}$  
    - When you want to approximate an  Integral of f(x) from a to b: ∫ₐᵇ f(x) dx.  
    - The interval \([a, b]\) is divided into \(n\) sub-intervals, where \(n\) is a multiple of 3.  
    - Function values are known at equally spaced points.

2. $\color{Hotpink}{\mathbf{Basic\ Idea}}$  
    - Approximate the integrand by cubic polynomials on each group of three subintervals.  
    - Sum the approximations over the entire interval.

3. $\color{Hotpink}{\mathbf{Step\ Size}}$  
    - Divide the interval \([a, b]\) into \(n\) equal parts where \(n\) is divisible by 3.  
    - Step size h = (b - a) / n
.

4. $\color{Hotpink}{\mathbf{Formula}}$
   Integral ≈ (3h/8) × [ f(x0) + 3f(x1) + 3f(x2) + 2f(x3) + 3f(x4) + 3f(x5) + 2f(x6) + ... + f(xn) ]
   
- Here, \(x_0, x_1, ..., x_n\) are the equally spaced points.
- The coefficients 3 and 2 alternate accordingly every three points, with 3 applied to the first two points in each group and 2 applied to the last point before the next group.

5. $\color{Hotpink}{\mathbf{Key\ Characteristics}}$  
    - More accurate than the trapezoidal rule and Simpson’s 1/3 rule for some functions.  
    - Requires the number of intervals to be a multiple of 3.  
    - Good for smooth integrands and small \(n\).

6. $\color{Hotpink}{\mathbf{Applications}}$  
    - Approximating definite integrals in engineering and physics.  
    - Numerical solution of integrals when an analytical solution is difficult.  
    - Used in numerical methods courses and computational projects.

---

### :pencil2: Example

Approximate the integral of \(f(x) = x^3\) over \([0, 3]\) with \(n = 3\) subintervals.

- \(h = (3 - 0)/3 = 1\)
- Points: \(x_0=0, x_1=1, x_2=2, x_3=3\)
- Function values: \(f(0)=0, f(1)=1, f(2)=8, f(3)=27\)

Apply formula:
Integral ≈ (3 × 1 / 8) × [0 + 3×1 + 3×8 + 27]<br>
= (3/8) × [0 + 3 + 24 + 27]<br>
= (3/8) × 54<br>
= 20.25<br> 

Exact integral of \(x^3\) from 0 to 3 is:
Integral of x^3 from 0 to 3 = (3^4) / 4 = 81 / 4 = 20.25


---

</details>


 ###  Simpsons Three-Eighths Rule Code
```python
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

```
#### Simpsons Three-Eighths Rule Input
```
3
0 3
0 1 8 27


```
####  Simpsons Three-Eighths Rule Output
```
Approximate integral value is 20.25


```
# Solution of Curve Fitting Model

## Least Square Regression Method For Linear Equations Method

### Least Square Regression Method For Linear Equations Theory
 
<details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: **Least Square Regression Method**

Least Square Regression is a statistical method used to find the best-fitting line through a set of data points by minimizing the sum of the squares of the vertical distances of the points from the line. It is commonly used to model the relationship between two variables \(x\) and \(y\) with a linear equation of the form \(y = mx + c\).

1. **When to Use**  
   - To find the linear relationship between two variables.  
   - When data points do not perfectly fit a line due to errors or variability.  
   - To predict values of \(y\) for given \(x\) using the regression line.

2. **Basic Idea**  
   - Minimize the sum of the squares of the residuals (differences between observed and predicted \(y\)).  
   - Derive formulas for slope \(m\) and intercept \(c\) that minimize this sum.

3. **Notation**  
   - Data points: \((x_1, y_1), (x_2, y_2), \dots, (x_n, y_n)\)  
   - \(n\) is the number of data points.

4. **Formulas**  

- Slope \(m\):
  m = [ n * Σ(x_i * y_i) - Σx_i * Σy_i ] / [ n * Σ(x_i^2) - (Σx_i)^2 ]
  
- Intercept \(c\):

c = (Σy_i - m * Σx_i) / n

- Regression line equation:

y = m * x + c

5. **Key Characteristics**  
   - Provides the line of best fit minimizing squared errors.  
   - Assumes a linear relationship between \(x\) and \(y\).  
   - Sensitive to outliers.

6. **Applications**  
   - Predicting trends and forecasting.  
   - Engineering data analysis.  
   - Economics and social sciences.  
   - Any scenario requiring linear modeling.

---

### :pencil2: Example

Given the data:

| x | 1 | 2 | 3 | 4 | 5 |
|---|---|---|---|---|---|
| y | 2 | 4 | 5 | 4 | 5 |

Find the regression line \(y = mx + c\).

**Step 1: Compute sums**

- \(Σx_i = 1 + 2 + 3 + 4 + 5 = 15\)  
- \(Σy_i = 2 + 4 + 5 + 4 + 5 = 20\)  
- \(Σx_i^2 = 1 + 4 + 9 + 16 + 25 = 55\)  
- \(Σx_i y_i = (1)(2) + (2)(4) + (3)(5) + (4)(4) + (5)(5) = 2 + 8 + 15 + 16 + 25 = 66\)  
- \(n = 5\)

**Step 2: Calculate slope \(m\)**

m = [5 * 66 - 15 * 20] / [5 * 55 - 15^2] <br>
  = (330 - 300) / (275 - 225) <br>
  = 30 / 50<br>
  = 0.6<br>
  
**Step 3: Calculate intercept \(c\)**

c = (20 - 0.6 * 15) / 5<br>
  = (20 - 9) / 5 <br>
  = 11 / 5<br>
  = 2.2<br>
  
**Step 4: Write the regression line**

y = 0.6 * x + 2.2

---

</details>


