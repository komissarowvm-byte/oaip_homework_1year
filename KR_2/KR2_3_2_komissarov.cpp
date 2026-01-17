#include <iostream>

using namespace std;

void printReverseNegated() {
    int num;
    if (cin >> num) {
        printReverseNegated();
        cout << -num << " ";
    }
}

int main() {
    cout << "Введите числа через пробел (для завершения введите любой нечисловой символ):" << endl;
    printReverseNegated();
    cout << endl;
    
    return 0;
}

