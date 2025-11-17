#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double v0_kmh = 54.0; 
    double v_kmh = 18.0;   
    double a = -0.5;       
    double v0 = v0_kmh * 1000 / 3600;
    double v = v_kmh * 1000 / 3600;
    double t = (v - v0) / a;
    cout << "Ответ: " << t << " секунд" << endl;
    return 0;

}
