#include <iostream>
#include <cmath>     
#include <iomanip>   

using namespace std;

int main() {
    double capital_inicial = 15000.0;
    double tasa_mensual = 0.037;
    int anios = 15;
    int meses = anios * 12;
    double monto_final;

    
    monto_final = capital_inicial * pow(1 + tasa_mensual, meses);

    
    cout << fixed << setprecision(2);
    cout << "Monto ahorrado despues de " << anios << " años: $" << monto_final << endl;

    return 0;
}

