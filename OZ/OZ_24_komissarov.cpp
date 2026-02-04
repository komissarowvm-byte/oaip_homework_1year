#include <iostream>
using namespace std;

void tree(int i, int n) {
    if (i > n) return;
    for (int p = 0; p < n - i; p++) cout << " ";
    for (int r = 0; r < 2 * i - 1; r++) cout << "#";
    cout << endl;
    tree(i + 1, n);
}

int main() {
    int n;
    cin >> n;

    tree(1, n);

    for (int i = 0; i < n - 1; i++) cout << " ";
    cout << "|" << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << " ";
        for (int k = 0; k < 2 * i - 1; k++) cout << "#";
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) cout << " ";
    cout << "|";

    return 0;
}