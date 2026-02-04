#include <iostream>
using namespace std;

int C = 0;
int M = 0;

void sortInsertion(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int x = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > x) {
            C++;
            a[j + 1] = a[j];
            j--;
        }
        if (j >= 0) {
            C++;
        }
        if (j + 1 != i) {
            a[j + 1] = x;
            M++;
        }
    }
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortInsertion(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;

    cout << "C(n) = " << C << endl;
    cout << "M(n) = " << M << endl;

    return 0;
}