#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void fill(int a[][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = rand() % 101 - 50;
}

void print(int a[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
}

int norm(int a[][10], int n) {
    int m = abs(a[0][0]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (abs(a[i][j]) > m)
                m = abs(a[i][j]);
    return m;
}

int main() {
    srand(time(0));
    int n;
    cout << "n = ";
    cin >> n;
    while (n <= 2 || n >= 10) {
        cout << "n должно быть от 3 до 9. Повторите: ";
        cin >> n;
    }

    int a[10][10], b[10][10], c[10][10];

    fill(a, n);
    fill(b, n);
    fill(c, n);

    cout << "\nМатрица A:\n"; print(a, n);
    cout << "Матрица B:\n"; print(b, n);
    cout << "Матрица C:\n"; print(c, n);

    int na = norm(a, n);
    int nb = norm(b, n);
    int nc = norm(c, n);

    cout << "Нормы: A=" << na << ", B=" << nb << ", C=" << nc << endl;

    if (na <= nb && na <= nc) {
        cout << "\nНаименьшая норма у матрицы A:\n";
        print(a, n);
    } else if (nb <= na && nb <= nc) {
        cout << "\nНаименьшая норма у матрицы B:\n";
        print(b, n);
    } else {
        cout << "\nНаименьшая норма у матрицы C:\n";
        print(c, n);
    }

    return 0;
}