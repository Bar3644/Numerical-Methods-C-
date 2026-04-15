# Numerical Methods in C++

A personal repository containing **C++ implementations of numerical methods**, supporting PDF documents, and study material related to computational mathematics and engineering problem solving.

This repository is intended as both a learning resource and a technical portfolio project, demonstrating practical programming skills in C++ together with core numerical analysis techniques.

---

## Overview

Numerical methods are essential for solving mathematical problems that cannot easily be solved analytically. This repository focuses on implementing such methods in C++ with clear structure and reusable code.

Included materials may consist of:

- C++ source code implementations
- Numerical algorithms
- Example problems and test cases
- PDF explanations or reports
- Coursework notes
- Mathematical references

---

## Topics Covered

Depending on the repository contents, topics may include:

### Root Finding Methods
- Bisection Method
- Newton-Raphson Method
- Secant Method
- Fixed Point Iteration

### Linear Algebra
- Gaussian Elimination
- LU Decomposition
- Matrix Operations
- Solving Linear Systems

### Interpolation / Approximation
- Newton Interpolation
- Lagrange Interpolation
- Curve Fitting

### Numerical Differentiation / Integration
- Trapezoidal Rule
- Simpson’s Rule
- Finite Difference Methods

### Differential Equations
- Euler Method
- Runge-Kutta Methods

---

## Technologies Used

- **C++**
- STL (Standard Template Library)
- Object-Oriented Programming
- Command line compilation (g++, clang++, MSVC)

---

## Example Code

```cpp
#include <iostream>
#include <cmath>

double f(double x) {
    return x*x - 2;
}

int main() {
    double x = 1.0;

    for(int i = 0; i < 10; i++) {
        x = x - f(x)/(2*x);
    }

    std::cout << "Approximate root: " << x << std::endl;
}
