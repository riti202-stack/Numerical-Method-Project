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

  ---

  # Nonlinear Equation solving Methods

  ## Bisection Method

  #### Bisection Method Theory
  <details>
  <summary>Click to expand Theory</summary>

 
  
  :book: $\color{green}{\textbf{**Bisection Method: Theory and Application**}}$

</details>

 # Ordinary Differential Equation solving Methods

  ## Runge Kutta Method

  #### Runge Kutta Method Theory
    
  <details>
    <summary>Click to expand Theory</summary>
The Runge–Kutta methods are numerical techniques used to solve ordinary differential equations (ODEs).The 4th-order Runge-Kutta method (RK4) is the most commonly used and provides a good balance between accuracy and computational efficiency.It can solve of the form:
    dy/dx= f(x,y),   y(x0)=y0
Instead of using only the slope at one point, RK methods take several slope estimates within the step and combine them to get a more accurate result.
    
  RK 4th Order Formula:
For step size h:
    k1=h*f(xn,yn)
    k2=h*f(xn+(h/2),yn+(k1/2))
    k3=h*f(xn+(h/2),yn+(k2/2))
    k4=h*f(xn+h,yn+k3)
    yn+1=yn+(1/6)(k1+2k2+2k3+k4)

Example Problem:
Solve dy/dx=x+y   where,y(0)=1
Find y(0.1) using RK 4th order


  <summary>Click to expand Theory</summary>

 
   

</details>
 



  
    
    
  
  
