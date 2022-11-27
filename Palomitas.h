#include <iostream>
using namespace std;

class Palomitas {
private: //atributos

    string sabores;
    double costo;

public: //metodos
    Palomitas(string, double); //constructor
    double getCosto();
    void SetSabores();
    string getSabor();
};

Palomitas::Palomitas(string _sabores, double _costo) { //constructor
    sabores = "natural";
    costo = _costo;
}

double Palomitas::getCosto() { //regresa el costo de el producto
    return costo;
}

void Palomitas::SetSabores() { // permite dar un valor al sabor de las palomitas
    string newSabor;
    cout << "Ingresa el sabor de palomitas (mantequilla, natural, caramelo)" << endl;
    int a;
    a = 0;
    while (a == 0) { //Valida que se use un sabor válido
        cin >> newSabor;
        if (newSabor == "mantequilla" or newSabor == "natural" or newSabor == "caramelo" or newSabor == "Mantequilla" or newSabor == "Natural" or newSabor == "Caramelo") {
            sabores = newSabor;
            a = 1;
        }
        else { // avisa que hubo un error y perite que el ciclo continue
            cout << "Sabor no válido, favor de ingresar un nuevo sabor" << endl;
            a = 0;
        }
    }

}

string Palomitas::getSabor() { //regresa el sabor
    return sabores;
}

int SaborPalomitas() //manda a pedir el costo y el sabor de las palomitas y lo muestra al consumidor
{

    string Sabor;
    double precio;
    precio = 89;

    Sabor = "Naturales";

    Palomitas P1 = Palomitas(Sabor, precio);

    precio = P1.getCosto();

    P1.SetSabores();
    Sabor = P1.getSabor();


    cout << "El sabor de las palomitas es " << Sabor << endl;
    cout << "El precio de las palomitas es " << precio << endl;
    return 0;
}
#pragma once
#pragma once
