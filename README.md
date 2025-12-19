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

  ---

  ### Nonlinear Equation solving Methods

  ### Bisection Method

  #### Bisection Method Theory
  <details>
  <summary>Click to expand Theory</summary>

Gauss elimination works by... 
Bisection Method: Theory and Application
1. Introduction
Numerical methods are techniques used to approximate solutions for mathematical problems that
cannot be solved analytically. One common application is root-finding, where the goal is to find a
value x such that f(x) = 0 for a given function f.
2. Concept of Bisection Method
The Bisection Method is a bracketing method that repeatedly bisects an interval and then selects a
subinterval in which a root must lie. It assumes that the function is continuous on the interval [a, b]
and that f(a) and f(b) have opposite signs (i.e., f(a)*f(b) < 0).
3. Mathematical Formulation
Given a continuous function f on [a, b] where f(a)*f(b) < 0:
1. Compute midpoint c = (a + b)/2.
2. Evaluate f(c).
3. If f(c) = 0, then c is the root.
4. If f(a)*f(c) < 0, set b = c.
5. Else, set a = c.
6. Repeat until the interval [a, b] is sufficiently small.
4. Algorithm Steps
1. Choose initial interval [a, b] such that f(a)*f(b) < 0.
2. Set tolerance epsilon and maximum iterations N.
3. For i = 1 to N:
   a. Compute c = (a + b)/2.
   b. If |f(c)| < epsilon or (b - a)/2 < epsilon, return c.
   c. If f(a)*f(c) < 0, set b = c.
   d. Else, set a = c.
5. Convergence Analysis
The Bisection Method converges linearly. At each step, the interval size is halved, ensuring that the
error reduces exponentially. The number of iterations required to achieve a tolerance epsilon is
approximately log2((b-a)/epsilon).
6. Advantages and Limitations
Advantages:- Guaranteed convergence if f is continuous and f(a)*f(b) < 0.- Simple and easy to implement.
Limitations:- Slow convergence.- Requires sign change in the interval.- Not suitable for multiple roots or discontinuous functions.
7. Example Problem
Find the root of f(x) = x^3 - x - 2 in the interval [1, 2].
Step 1: f(1) = -2, f(2) = 4 so f(1)*f(2) < 0
Step 2: c = (1+2)/2 = 1.5, f(1.5) = -0.125
Step 3: f(1)*f(1.5) < 0 so new interval [1, 1.5]
Repeat until desired tolerance is achieved.
Root approximately 1.521 within tolerance 0.001.
8. Conclusion
The Bisection Method is a fundamental numerical technique for root-finding. Its simplicity and
guaranteed convergence make it a valuable tool, especially for problems where other methods may
fail.

</details>



  
    
    
  
  
