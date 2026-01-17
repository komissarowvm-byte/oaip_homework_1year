#include <iostream>
#include <climits>

using namespace std;

void findMinProductColumns(int matrix[10][7]) {
    long long minProduct = LLONG_MAX;
    int columnIndices[7];
    int count = 0;

    for (int col = 0; col < 7; col++) {
        long long product = 1;
        bool hasNonZero = false;

        for (int row = 0; row < 10; row++) {
            if (matrix[row][col] != 0) {
                product *= matrix[row][col];
                hasNonZero = true;
            }
        }

        if (!hasNonZero) {
            product = 0;
        }

        if (product < minProduct) {
            minProduct = product;
            count = 0;
            columnIndices[count++] = col + 1;
        } else if (product == minProduct) {
            columnIndices[count++] = col + 1;
        }
    }

    cout << "Столбцы с минимальным произведением: ";
    for (int i = 0; i < count; i++) {
        cout << columnIndices[i] << " ";
    }
    cout << endl;
}

int main() {
    int matrix1[10][7] = {
        {1, 2, 0, 4, 5, 6, 7},
        {0, 2, 3, 0, 5, 6, 7},
        {1, 0, 3, 4, 0, 6, 7},
        {1, 2, 0, 4, 5, 0, 7},
        {1, 2, 3, 0, 5, 6, 0},
        {0, 0, 3, 4, 5, 6, 7},
        {1, 2, 3, 4, 0, 6, 7},
        {1, 2, 3, 4, 5, 0, 7},
        {1, 2, 3, 4, 5, 6, 0},
        {0, 2, 3, 4, 5, 6, 7}
    };

    int matrix2[10][7] = {
        {2, 0, 4, 1, 3, 5, 0},
        {0, 1, 0, 2, 4, 0, 6},
        {1, 0, 0, 3, 5, 7, 2},
        {0, 2, 1, 0, 0, 4, 3},
        {3, 0, 2, 1, 0, 5, 0},
        {0, 4, 0, 2, 1, 0, 3},
        {2, 1, 0, 0, 3, 4, 0},
        {0, 3, 2, 1, 0, 0, 5},
        {1, 0, 3, 0, 2, 1, 0},
        {0, 2, 0, 3, 1, 0, 4}
    };

    cout << "Матрица 1:" << endl;
    findMinProductColumns(matrix1);
    
    cout << "Матрица 2:" << endl;
    findMinProductColumns(matrix2);

    return 0;
}
