#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 10;

void selection(int a[], int &c, int &m) {
    c = 0; m = 0;
    for (int i = 0; i < N - 1; i++) {
        int k = i;
        for (int j = i + 1; j < N; j++) {
            c++;
            if (a[j] < a[k]) k = j;
        }
        if (k != i) {
            int t = a[i];
            a[i] = a[k];
            a[k] = t;
            m++;
        }
    }
}

void insertion(int a[], int &c, int &m) {
    c = 0; m = 0;
    for (int i = 1; i < N; i++) {
        int x = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > x) {
            c++;
            a[j + 1] = a[j];
            j--;
            m++;
        }
        c++;
        a[j + 1] = x;
    }
}

void binary_insertion(int a[], int &c, int &m) {
    c = 0; m = 0;
    for (int i = 1; i < N; i++) {
        int x = a[i];
        int l = 0, r = i;
        while (l < r) {
            int mid = (l + r) / 2;
            c++;
            if (a[mid] > x) r = mid;
            else l = mid + 1;
        }
        for (int j = i; j > l; j--) {
            a[j] = a[j - 1];
            m++;
        }
        a[l] = x;
    }
}

void bubble(int a[], int &c, int &m) {
    c = 0; m = 0;
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1 - i; j++) {
            c++;
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                m++;
            }
        }
}

void shaker(int a[], int &c, int &m) {
    c = 0; m = 0;
    int left = 0, right = N - 1;
    while (left < right) {
        for (int i = left; i < right; i++) {
            c++;
            if (a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                m++;
            }
        }
        right--;
        for (int i = right; i > left; i--) {
            c++;
            if (a[i] < a[i - 1]) {
                int t = a[i];
                a[i] = a[i - 1];
                a[i - 1] = t;
                m++;
            }
        }
        left++;
    }
}

int main() {
    srand(time(0));
    int orig[N], arr[N];
    for (int i = 0; i < N; i++)
        orig[i] = rand() % 100;

    cout << "Исходный: ";
    for (int i = 0; i < N; i++) cout << orig[i] << " ";
    cout << "\n\n";

    for (int i = 0; i < N; i++) arr[i] = orig[i];
    int c, m;
    selection(arr, c, m);
    cout << "Выбор:      C=" << c << " M=" << m << endl;

    for (int i = 0; i < N; i++) arr[i] = orig[i];
    insertion(arr, c, m);
    cout << "Вставка:    C=" << c << " M=" << m << endl;

    for (int i = 0; i < N; i++) arr[i] = orig[i];
    binary_insertion(arr, c, m);
    cout << "Бин.вставка:C=" << c << " M=" << m << endl;

    for (int i = 0; i < N; i++) arr[i] = orig[i];
    bubble(arr, c, m);
    cout << "Пузырёк:    C=" << c << " M=" << m << endl;

    for (int i = 0; i < N; i++) arr[i] = orig[i];
    shaker(arr, c, m);
    cout << "Шейкер:     C=" << c << " M=" << m << endl;

    return 0;
}