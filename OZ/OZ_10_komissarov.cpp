#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int N = 10;
    double a[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    bool ok = true;
    const double eps = 1e-6;

    for (int i = 0; i < N && ok; i++) {
        for (int j = 0; j < N && ok; j++) {
            double s = 0;
            for (int k = 0; k < N; k++) {
                s += a[i][k] * a[j][k];
            }
            if (i == j) {
                if (abs(s - 1.0) > eps) ok = false;
            } else {
                if (abs(s) > eps) ok = false;
            }
        }
    }

    if (ok) cout << "Матрица ортонормирована.\n";
    else cout << "Матрица НЕ ортонормирована.\n";

    return 0;
}