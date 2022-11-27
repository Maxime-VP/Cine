
#include <iostream>
using namespace std;
class Nachos {
private: //atributos

    int queso;
    double costo;

public: //metodos
    Nachos(int, double); //constructor
    double getCosto();
    void SetQueso();
    int getQueso();
};

Nachos::Nachos(int _queso, double _costo) { //constructor
    queso = 1;
    costo = _costo;
}

double Nachos::getCosto() { //regresa costo
    return costo;
}

void Nachos::SetQueso() { // permite ingresar si se desea o no queso
    int newQueso;
    newQueso = 1;
    cout << "Ingresa 1 para añadir queso" << endl;
    cin >> newQueso;
    queso = newQueso;


}

int Nachos::getQueso() { // regresa si tiene o no queso
    return queso;
}

int QuesoNachos() // verifica si tienen queso e imprime el precio
{

    int queso;
    double precio;
    precio = 40;

    queso = 0;

    Nachos N1 = Nachos(queso, precio);

    double preciofin;
    precio = N1.getCosto();

    N1.SetQueso();

    string Tienequeso;
    queso = N1.getQueso();

    string conqueso;
    if (queso == 1) {
        Tienequeso = "con queso";
    }
    else {
        Tienequeso = "sin queso";
    }

    cout << "Unos nachos " << Tienequeso << endl;
    cout << "El precio de los nachos es " << precio << endl;
    return 0;
}


