#include <iostream>
using namespace std;


class Refresco {
private: //atributos

    int hielo;
    double costo;

public: //metodos
    Refresco(int, double); //constructor
    double getCosto();
    void SetHielo();
    int getHielo();
};

Refresco::Refresco(int _hielo, double _costo) { //constructor
    hielo = 1;
    costo = _costo;
}

double Refresco::getCosto() {
    return costo;
}

void Refresco::SetHielo() { //recibe si lleva o no hielo
    int newHielo;
    newHielo = 1;
    cout << "Ingresa 1 para añadir hielo" << endl;
    cin >> newHielo;
    hielo = newHielo;


}

int Refresco::getHielo() { //regresa si tiene o no hielo
    return hielo;
}

int HieloRefresco() //manda a llamar a los getters y setters de Refresco e imprime los valores recibidos

{

    int hielo;
    double precio;
    precio = 30;

    hielo = 0;

    Refresco R1 = Refresco(hielo, precio); //crea un objeto Refresco llamado R1

    double preciofin;
    precio = R1.getCosto();

    R1.SetHielo();

    string Tienehielo;
    hielo = R1.getHielo();

    string conHielo;
    if (hielo == 1) {
        conHielo = "con hielo";
    }
    else {
        conHielo = "sin hielo";
    }

    cout << "Un refresco " << conHielo << endl;
    cout << "El precio del refresco es " << precio << endl;
    return 0;
}