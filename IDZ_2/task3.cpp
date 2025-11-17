#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    fstream outFile("out3.dat");
    double x, y;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    double x2 = x * x;           
    double y2 = y * y;           
    double xy = x * y;         
    double x2y = x2 * y;         
    double xy2 = x * y2;        
    double x2y2 = x2 * y2;       
    double term1 = 3 * x2y2;   
    double term2 = 2 * xy2;      
    double result = term1;                       
    result = result - term2;                    
    result = result - 7 * x2y;                   
    result = result - 4 * y2;                   
    result = result + 15 * xy;                   
    result = result + 2 * x2;                   
    result = result - 3 * x;                   
    result = result + 10 * y;                    
    result = result + 6;                         
    cout << "Результат: " << result << endl;
    outFile << result <<
    double check = 3*x*x*y*y - 2*x*y*y - 7*x*x*y - 4*y*y + 15*x*y + 2*x*x - 3*x + 10*y + 6;
    return 0;

}
