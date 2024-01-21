// Created by Kurious
// Basic FGO Instant Death Calculator
// Please omit % signs from inputs, final result will be in a percentage
#include <iostream>
using namespace std;

double deathCalcFunc (double hitRate, double deathRate, double instantDeathResistUp, double instantDeathResistDown){
    return hitRate * deathRate * (1 - instantDeathResistUp + instantDeathResistDown);
}

int main (){
    int n = 1;
    do {
        double x, y, z, zz;
        cout << "Enter hitRate: ";
        cin >> x;
        cout << "Enter deathRate: ";
        cin >> y;
        cout << "Enter instantDeathResistUp: ";
        cin >> z;
        cout << "Enter instantDeathResistDown: ";
        cin >> zz;
        double a = x/100;
        double b = y/100;
        double c = z/100;
        double d = zz/100;
        cout << "Final Death Rate: " << deathCalcFunc(a, b, c, d) * 100 << "%" << endl;
        cout << "Enter 1 to begin a new calculation: " << endl;
        cout << "Enter 0 to exit: " << endl;
        cin >> n;
    }
    while(n == 1);
    return 0;
}