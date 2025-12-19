# Numerical-Method-Project

  - [Nonlinear Equation solving Methods](#nonlinear-equation-solving-methods)

    - [Bisection Method](#bisection-method)
      - [Theory](#bisection-method-theory)
      - [Code](#bisection-method-code)
      - [input file](#bisection-method-input-file)
      - [output file](#bisection-method-output-file)
    - [False Position Method](#false-position-method)
      - [Theory](#false-position-method-theory)
      - [Code](#false-position-method-code)
      - [input file](#false-position-method-input-file)
      - [output file](#false-position-method-output-file)
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
 - [Ordinary Differential Equation solving Methods](#ordinary-differential-equation-solving-methods)

    - [Runge Kutta Method](#runge-kutta-method)
      - [Theory](#runge-kutta-method-theory)
      - [Code](#runge-kutta-method-code)
      - [input file](#runge-kutta-method-input-file)
      - [output file](#runge-kuttan-method-output-file)
  - [Interpolation Methods](#interpolation-methods)

    - [Newtons Forward Interpolation Method](#newtons-forward-interpolation-method)
      - [Theory](#newtons-forward-interpolation-method-theory)
      - [Code](#newtons-forward-interpolation-method-code)
      - [input file](#newtons-forward-interpolation-method-input-file)
      - [output file](#newtons-forward-interpolation-method-output-file)
        
     - [Newtons Backward Interpolation Method](#newtons-backward-interpolation-method)
       - [Theory](#newtons-backward-interpolation-method-theory)
       - [Code](#newtons-backward-interpolation-method-code)
       - [input file](#newtons-backward-interpolation-method-input-file)
       - [output file](#newtons-backward-interpolation-method-output-file)

  ---

  # Nonlinear Equation solving Methods

  ## Bisection Method

  #### Bisection Method Theory
  <details>
  <summary>Click to expand Theory</summary>
  
<br>
 
 ---
 
  
  &nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Bisection Method: Theory and Application}}$

 The *Bisection Method* is a fundamental root-finding algorithm in numerical analysis. It is a $\color{orange}{\mathbf{bracketing method}}$ used to find the real roots of a continuous function f(x) = 0.

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


   
<br>

	  


 ---

 

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
#### Runge Kutta Method Input File
```
 0 1 0.1 0.2
```
#### Runge Kutta Method Output File
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
#### Newtons Forward Interpolation Method Input File
```
 3 0.5
0 1
1 2
2 5
3 10
```
#### Newtons Forward Interpolation Method Output File
```
Estimated value at x = 0.5 is 1.25
```
#### Newton’s Backward Interpolation Theory
<details>
<summary>Click to expand Theory</summary>
<br>

---

&nbsp;&nbsp;&nbsp;&nbsp; :book: **Newton's Backward Interpolation**

Newton’s Backward Interpolation is a **numerical method** used to estimate the value of a function when the function values are known at a set of **equally spaced points**. This method is most suitable when the required value lies **near the end** of the data set.

1. **When to Use**  
    - Independent variable values are **equally spaced**.  
    - Interpolation point is **close to the last data point**.  
    - Only **discrete data values** are available (no explicit function).

2. **Basic Idea**  
    - Constructs an **interpolating polynomial** using **backward differences**.  
    - Provides an approximate value of the function within the given range.

3. **Notation**  
    - Data points: `(x0, y0), (x1, y1), (x2, y2), ..., (xn, yn)`  
    - Uniform spacing: `h = x1 - x0`  
    - Define: `p = (x - xn) / h`  (xn = last data point)

4. **Formula**
  y = yn + pΔy_n + p(p+1)/2!Δ²y_n + p(p+1)*(p+2)/3!*Δ³y_n + …
Where:  
- `Δy_n` is the first backward difference  
- `Δ²y_n` is the second backward difference  
- Higher-order differences improve accuracy

5. **Key Characteristics**  
    - Falls under **linear numerical interpolation methods**.  
    - Produces a **polynomial approximation**.  
    - Does **not** solve differential or non-linear equations.  
    - Accuracy increases with higher-order differences.

6. **Applications**  
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
  
    
    
  
  
