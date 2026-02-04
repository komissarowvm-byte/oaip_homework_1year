#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int C = 0;
    int M = 0; 

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            C++;
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                M++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "C(n) = " << C << endl;
    cout << "M(n) = " << M << endl;

    return 0;
}