#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int a[MAX];
    int n;

    cout << "n = ";
    cin >> n;

    cout << "Введите " << n << " чисел: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int C = 0;
    int M = 0;

    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;
        while (j >= 0) {
            C++;
            if (a[j] > x) {
                a[j + 1] = a[j];
                M++;
                j--;
            } else {
                break;
            }
        }
        a[j + 1] = x;
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "C(n) = " << C << endl;
    cout << "M(n) = " << M << endl;

    return 0;
}