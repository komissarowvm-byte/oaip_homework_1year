#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int k;
    cout << "k = ";
    cin >> k;
    while (k <= 2 || k >= 10) {
        cout << "k должно быть от 3 до 9: ";
        cin >> k;
    }

    double x[10], y[10];
    double A[10][10], B[10][10], C[10][10];

    for (int i = 0; i < k; i++) {
        x[i] = rand() % 21 - 10;
        y[i] = rand() % 21 - 10;
    }

    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++) {
            A[i][j] = rand() % 21 - 10;
            B[i][j] = rand() % 21 - 10;
            C[i][j] = rand() % 21 - 10;
        }

    double Ax[10] = {0}, By[10] = {0}, Cx[10] = {0};

    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++) {
            Ax[i] += A[i][j] * x[j];
            By[i] += B[i][j] * y[j];
            Cx[i] += C[i][j] * x[j];
        }

    double dot_Ax_By = 0, dot_Cx_y = 0, dot_x_By = 0;
    for (int i = 0; i < k; i++) {
        dot_Ax_By += Ax[i] * By[i];
        dot_Cx_y += Cx[i] * y[i];
        dot_x_By  += x[i] * By[i];
    }

    if (dot_x_By == 0) {
        cout << "Знаменатель равен нулю. Деление невозможно." << endl;
        return 1;
    }

    double result = (dot_Ax_By + dot_Cx_y) / dot_x_By;

    cout.precision(4);
    cout << "Результат: " << result << endl;

    return 0;
}