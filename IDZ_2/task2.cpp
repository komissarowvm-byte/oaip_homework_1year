#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    
    double a_val;
    cout << "Введите число a: ";
    cin >> a_val;
    
    double a2 = a_val * a_val;    
    double a4 = a2 * a2;          
    double a8 = a4 * a4;         

    cout << "a = " << a_val << endl;
    cout << "a^2 = a * a = " << a2 << endl;
    cout << "a^4 = a^2 * a^2 = " << a4 << endl;
    cout << "a^8 = a^4 * a^4 = " << a8 << endl;
    
    
    return 0;

}
