#include <iostream>

using namespace std;

#include "Palomitas.h"
#include "Nachos.h"
#include "Refresco.h"

//******************************************************************************
//
//Este programa recibe valores de un usuario para determinar lo que va a pedir
//y cuánto es el costo total de esos productos
//
//******************************************************************************


int main() {

    string eleccion;

    cout << " \n Menu: \n Palomitas 90$ \n Nachos 40$\n Refresco 30$ \n Combo 140$ \n (El combo puede llevar refresco o Icee) \n" << endl;
    double CostoFinal;
    CostoFinal = 0;

    int a;
    a = 0;
    while (a == 0) {
        cout << "Desea un combo, (si/no)" << endl;
        cout << "El precio del combo es 140$" << endl;
        cin >> eleccion;
        if (eleccion == "si" or eleccion == "s" or eleccion == "sí" or
            eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or
            eleccion == "SÍ") {
            SaborPalomitas();
            QuesoNachos();
            HieloRefresco();

            CostoFinal = CostoFinal + 140;
            cout << "¿Desea ordenar algo más? (Si/No)" << endl;
            cin >> eleccion;
            if (eleccion == "si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or
                eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ") {
                a = 0;
            }
            else {
                cout << "El total de la orden es: " << CostoFinal << "$" << endl;
                a = 1;
            }
        }
        else if (eleccion == "no" or eleccion == "n" or eleccion == "No" or eleccion == "NO" or eleccion == "N") {
            cout << "Desea comprar palomitas (si/no)" << endl;
            cin >> eleccion;

            if (eleccion == "si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or
                eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ") {
                SaborPalomitas();
                CostoFinal = CostoFinal + 90;
            }
            cout << "Desea comprar nachos (si/no)" << endl;
            cin >> eleccion;
            if (eleccion == "si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or
                eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ") {
                QuesoNachos();
                CostoFinal = CostoFinal + 40;
            }
            cout << "Desea comprar refresco (si/no)" << endl;
            cin >> eleccion;
            if (eleccion == "si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or
                eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ") {
                HieloRefresco();
                CostoFinal = CostoFinal + 30;
            }

            cout << "¿Desea ordenar algo más? (Si/No)" << endl;
            cin >> eleccion;
            if (eleccion == "si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or
                eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ") {
                a = 0;
            }

            else {
                cout << "El total de la orden es: " << CostoFinal << "$" << endl;
                a = 1;
            }

        }

        else {
            cout << "Eliga alguna opción" << endl;
            a = 0;
        }
    }

    return 0;
}
