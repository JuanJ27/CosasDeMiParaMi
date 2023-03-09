#include <iostream>

using namespace std;
//este ejemplo es usando un putnore para la funcion a integrar.
double integral(double (*f)(double), double a, double b, int n) { 
    double dx = (b-a)/n;
    double *x = new double[n];
    for (int i = 0; i < n; i++) {
        x[i] = a + i*dx;
    }
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += f(x[i]);
    }
    delete[] x;
    return dx*suma;
}

double f(double x) {
    return x*x;
}

int main() {
    double a = 0;
    double b = 10;
    int n = 1000000;
    double result = integral(f, a, b, n);
    cout << "La integral de x^2 desde 0 a 10 es: " << result << endl;
    return 0;
}


