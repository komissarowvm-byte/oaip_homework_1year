#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int c = 0, m = 0;
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            c++;
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
            m++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << c << endl;
    cout << m << endl;

    return 0;
}