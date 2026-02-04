#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int a[10][10] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    int s = 0;
    for (int j = 0; j < n; j++)
        s += a[0][j];

    int ok = 1;

    for (int i = 0; i < n; i++) {
        int r = 0;
        for (int j = 0; j < n; j++)
            r += a[i][j];
        if (r != s) ok = 0;
    }

    for (int j = 0; j < n; j++) {
        int c = 0;
        for (int i = 0; i < n; i++)
            c += a[i][j];
        if (c != s) ok = 0;
    }

    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++) {
        d1 += a[i][i];
        d2 += a[i][n - 1 - i];
    }
    if (d1 != s || d2 != s) ok = 0;

    if (ok)
        cout << "Магический квадрат" << endl;
    else
        cout << "Не магический квадрат" << endl;

    return 0;
}