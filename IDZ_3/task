#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double V0, S1, V1, S2, V2, S3, V3;
    
    cout << "Введите скорость велосипедиста V0 (км/ч): ";
    cin >> V0;
    
    cout << "Введите расстояние S1 (м): ";
    cin >> S1;
    cout << "Введите скорость на S1 V1 (км/ч): ";
    cin >> V1;
    
    cout << "Введите расстояние S2 (м): ";
    cin >> S2;
    cout << "Введите скорость на S2 V2 (км/ч): ";
    cin >> V2;
    
    cout << "Введите расстояние S3 (м): ";
    cin >> S3;
    cout << "Введите скорость на S3 V3 (км/ч): ";
    cin >> V3;
    
    V0 = V0 * 1000;
    V1 = V1 * 1000;
    V2 = V2 * 1000;
    V3 = V3 * 1000;
    
    double S = S1 + S2 + S3;
    double T = 0.0;
    double distance_from_A = 0.0;
    
    double T1 = S / (V0 + V1);
    if (T1 <= S1 / V1) {
        T = T1;
        distance_from_A = V0 * T;
    }
    else {
        double t1 = S1 / V1;
        double D1 = V0 * t1;
        double remaining_S = S - S1 - D1;
        
        double T2 = t1 + remaining_S / (V0 + V2);
        if (T2 <= t1 + S2 / V2) {
            T = T2;
            distance_from_A = V0 * T;
        }
        else {
            double t2 = S2 / V2;
            double D2 = V0 * (t1 + t2);
            double remaining_S2 = S - S1 - S2 - D2;
            
            double T3 = t1 + t2 + remaining_S2 / (V0 + V3);
            T = T3;
            distance_from_A = V0 * T;
        }
    }
    
    cout << "\nРезультаты расчета:" << endl;
    cout << "Время встречи: " << T << " часов" << endl;
    cout << "Расстояние от пункта A: " << distance_from_A << " метров" << endl;
    
    cout << "\nПроверка:" << endl;
    cout << "Путь велосипедиста: " << distance_from_A << " м" << endl;
    cout << "Путь путника: " << (S - distance_from_A) << " м" << endl;
    cout << "Общий путь: " << distance_from_A + (S - distance_from_A) << " м" << endl;
    
    return 0;
}
