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
      - [Theory](#newtons-forward-interpolatio-method-theory)
      - [Code](#newtons-forward-interpolatio-method-code)
      - [input file](#newtons-forward-interpolatio-method-input-file)
      - [output file](#newtons-forward-interpolation-method-output-file)

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
    - Bisection: Calculate the midpoint $m$:$$m = \frac{a + b}{2}
    - Sign Check:
      - If f(m) = 0, then m is the root.
      - If f(a)*f(m) < 0, the root lies in [a,m]. Set b = m
      - If f(m)*f(b) < 0, the root lies in [m, b]. Set a = m.
    - Repeat: Continue steps 2 and 3 until the interval width $|b - a|$ is smaller than the desired tolerance $\epsilon$.
 

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

Step 1: Given
	•	f(x,y) = x + y
	•	x_0 = 0, y_0 = 1
	•	Step size h = 0.1

⸻

Step 2: Compute k values
k1 = 0.1(0 + 1) = 0.1
k2= 0.1(0.05 + 1.05) = 0.11
k3= 0.1(0.05 + 1.055) = 0.1105
k4= 0.1(0.1 + 1.1105) = 0.12105

⸻

Step 3: Compute y1
y(0.1) = 1 + (1/6)(0.1 + 2(0.11) + 2(0.1105) + 0.12105)
       =1 + 0.11034
       =1.11034
	   
 ⸻

 Final Answer:
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
 <details>
    <summary>Click to expand Theory</summary>
    &nbsp;&nbsp;&nbsp;&nbsp; :book: $\huge\color{green}{\mathbf{Newton's\ Forward\ Interpolation:\ Theory\ and\ Formula}}$
    <br>
    Newton's forward interpolation is a numerical method used to estimate the value of a function
    when a set of equally spaced data points is known. It is especially useful when the required
    value lies <b>near the beginning</b> of the tabulated data. [web:22][web:23]
    <br><br>
    It constructs an interpolation polynomial using forward differences of the function values,
    starting from the first point in the table. This method assumes that the x-values are
    equally spaced with step size \(h\). [web:22]

    <br><br>
    $\color{Hotpink}{\mathbf{ Basic\ Setup:}}$ :
    <br>
    Suppose the function values are known at points:
    <br>
    \((x_0, y_0), (x_1, y_1), \dots, (x_n, y_n)\) where \(x_{k+1} - x_k = h\) (constant step size). [web:23]
    <br>
    To approximate \(y\) at a point \(x\) near \(x_0\), define the normalized variable:
    <br>
    \[
        u = \frac{x - x_0}{h}
    \] [web:22]

    <br>
    $\color{Hotpink}{\mathbf{ Forward\ Difference\ Table:}}$
    <br>
    The forward differences are defined as: [web:22]
    <br>
    First forward differences:
    <br>
    \(\Delta y_0 = y_1 - y_0,\quad \Delta y_1 = y_2 - y_1,\ \dots\)
    <br>
    Second forward differences:
    <br>
    \(\Delta^2 y_0 = \Delta y_1 - \Delta y_0,\quad \Delta^2 y_1 = \Delta y_2 - \Delta y_1,\ \dots\)
    <br>
    Higher-order differences are obtained similarly, forming a forward difference table. [web:22][web:27]

    <br><br>
    $\color{Hotpink}{\mathbf{ Newton's\ Forward\ Interpolation\ Formula:}}$
    <br>
    Using the notation above, the interpolation polynomial is:
    <br>
    \[
    \begin{aligned}
    y(x) \approx f(x) &= y_0
    + u\,\Delta y_0
    + \frac{u(u-1)}{2!}\,\Delta^2 y_0
    + \frac{u(u-1)(u-2)}{3!}\,\Delta^3 y_0 \\
    &\quad + \dots
    + \frac{u(u-1)\dots(u-n+1)}{n!}\,\Delta^n y_0
    \end{aligned}
    \] [web:22][web:23]

    <br>
    Here:
    <br>
    • \(y_0\) is the function value at the first point \(x_0\). [web:22]<br>
    • \(\Delta^k y_0\) is the k-th forward difference starting at \(y_0\). [web:22]<br>
    • \(u = \dfrac{x - x_0}{h}\) is a dimensionless parameter that indicates how far x is from \(x_0\) in units of h. [web:23]

    <br><br>
    $\color{Hotpink}{\mathbf{ When\ to\ Use:}}$
    <br>
    • Data points must have equally spaced x-values (constant h). [web:23]<br>
    • The required x should be close to the first tabulated point \(x_0\). [web:22]<br>
    • If the required x is near the last point \(x_n\), Newton's backward interpolation is usually more suitable. [web:22][web:28]
</details>

 
 <\details>


  
    
    
  
  
