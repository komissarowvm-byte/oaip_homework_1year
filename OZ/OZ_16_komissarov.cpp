#include <iostream>
#include <cmath>

double f1(double x) { return sin(x); }
double f2(double x) { return cos(x); }

double trap(double a, double b, int n, double (*f)(double)) {
    double h = (b - a) / n;
    double s = (f(a) + f(b)) / 2;
    for (int i = 1; i < n; ++i)
        s += f(a + i * h);
    return s * h;
}

int main() {
    double c, d;
    std::cin >> c >> d;
    double pi = 3.14159;
    double r = trap(c, d, 20, f1) + trap(0, pi, 100, f2);
    std::cout << r;
}