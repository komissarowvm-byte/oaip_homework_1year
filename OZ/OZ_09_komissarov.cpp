#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int n, m, k;
    cin >> n >> m >> k;

    int** A = new int*[n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }

    int** B = new int*[m];
    for (int i = 0; i < m; i++) {
        B[i] = new int[k];
    }

    int** C = new int*[n];
    for (int i = 0; i < n; i++) {
        C[i] = new int[k]();
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 10 - 5;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            B[i][j] = rand() % 10 - 5;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < m; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < m; i++) {
        delete[] B[i];
    }
    delete[] B;

    for (int i = 0; i < n; i++) {
        delete[] C[i];
    }
    delete[] C;

    return 0;
}