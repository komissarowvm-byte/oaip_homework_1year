#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int a[10][15];
    int i, j, k;

    for (i = 0; i < 10; i++)
        for (j = 0; j < 15; j++)
            a[i][j] = rand() % 100 - 50;

    cout << "Седловые точки:\n";

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 15; j++) {
            int min_in_row = 1;
            for (k = 0; k < 15; k++) {
                if (a[i][k] < a[i][j]) {
                    min_in_row = 0;
                    break;
                }
            }

            int max_in_col = 1;
            for (k = 0; k < 10; k++) {
                if (a[k][j] > a[i][j]) {
                    max_in_col = 0;
                    break;
                }
            }

            if (min_in_row == 1 && max_in_col == 1) {
                cout << "a[" << i << "][" << j << "] = " << a[i][j] << endl;
            }
        }
    }

    return 0;
}