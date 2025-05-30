#include <iostream>
#include <string>

using namespace std;


class Deporte {
protected:
    string nombre;
    string tipoBalon;
    int numeroJugadores;

public:
    
    Deporte(string nombre, string tipoBalon, int numeroJugadores)
        : nombre(nombre), tipoBalon(tipoBalon), numeroJugadores(numeroJugadores) {}

    
    void mostrarInformacion() {
        cout << "Nombre del deporte: " << nombre << endl;
        cout << "Tipo de balon: " << tipoBalon << endl;
        cout << "Numero de jugadores por equipo: " << numeroJugadores << endl;
    }

    
    virtual void tipoCuerpo() = 0;

    
    void esDeEquipo() {
        if (numeroJugadores > 1)
            cout << "Es un deporte de equipo." << endl;
        else
            cout << "Es un deporte individual." << endl;
    }
};


class ConPies : public Deporte {
public:
    ConPies() : Deporte("Futbol Soccer", "Balon redondo", 11) {}

    void tipoCuerpo() override {
        cout << "Este deporte se juega principalmente con los pies." << endl;
    }
};

int main() {
    ConPies futbol;

    futbol.mostrarInformacion();
    futbol.tipoCuerpo();          
    futbol.esDeEquipo();          

    return 0;
}

