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

    int srav = 0;
    int obmen = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            srav++;
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                obmen++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Сравнений: " << srav << endl;
    cout << "Обменов: " << obmen << endl;

    return 0;
}