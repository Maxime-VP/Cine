#include <iostream>
using namespace std;
#include "Palomitas.h"
#include "Nachos.h"
#include "Bebida.h"
#include "Combo.h"

void menu() { //imprime el menu
    cout << "Menu:" << endl; //imprime el menu
    cout << "(1) Palomitas (Grandes 90$, Medianas 85$, Chicas 80$" << endl;
    cout << "(2) Nachos 30$ (con queso o sin queso, con chile o sin chile)" << endl;
    cout << "(3) Bebida (Grande 40$, Mediana 35$, Chica 30$)" << endl;
    cout << "(4) Combo 140$ (incluye Palomitas y refresco grandes y nachos al gusto)" << endl;
    cout << "(5) Terminar compra" << endl;
    cout << "" << endl;
}

string saborPalomitas() { //da valor al sabor de palomitas
    int v;
    v = 0;
    string _sabor;
    while (v == 0) {
        cout << "De que sabor quiere sus palomitas (Mantequilla, Natural, Caramelo)" << endl;
        cin >> _sabor;
        if (_sabor == "Mantequilla" or _sabor == "Natural" or _sabor == "Caramelo") {
            return _sabor;
            v = 1;
        }
        else {
            cout << "Valor no valido, intente de nuevo" << endl;
            v = 0;
        }
    }
    return _sabor;
}

string tamanoPalomitas() { //da valor al tamaño de palomitas
    int v;
    v = 0;
    string _tamano;
    while (v == 0) {
        cout << "De que tamano quiere sus palomitas (Grandes, Medianas, Chicas)" << endl;
        cin >> _tamano;
        if (_tamano == "Grandes" or _tamano == "Medianas" or _tamano == "Chicas") {
            return _tamano;
            v = 1;
        }
        else {
            cout << "Valor no valido, intente de nuevo" << endl;
            v = 0;
        }
    }
    return _tamano;
}

double costoPalomitas(string _tamano) { //da valor al costo de palomitas dependiendo el tamaño
    double _costo;
    _costo = 0;
    if (_tamano == "Grandes") {
        _costo = 90;
    }
    if (_tamano == "Medianas") {
        _costo = 85;
    }
    if (_tamano == "Chicas") {
        _costo = 80;
    }
    return _costo;
}

string elegirQueso() { //da valor a si se quiere o no queso en los nachos
    int v;
    v = 0;
    string _quesoEleccion;
    string _queso;
    while (v == 0) {
        cout << "Escriba si quiere sus nachos con queso o sin queso (con, sin)" << endl;
        cin >> _quesoEleccion;
        if (_quesoEleccion == "con") {
            _queso = "con queso";
            v = 1;
        }
        else if (_quesoEleccion == "sin") {
            _queso = "sin queso";
            v = 1;
        }

        else {
            cout << "Valor no valido, intente de nuevo" << endl;
            v = 0;
        }
       
    }
    return _queso;
}

string elegirChile() {
    int v;
    v = 0;
    string _chileEleccion;
    string _chile;
    while (v == 0) {
        cout << "Escriba si quiere sus nachos con chile o sin chile (con, sin)" << endl;
        cin >> _chileEleccion;
        if (_chileEleccion == "con") {
            _chile = "con chile";
            v = 1;
        }
        else if (_chileEleccion == "sin") {
            _chile = "sin chile";
            v = 1;
        }
        else {
            cout << "Valor no valido, intente de nuevo" << endl;
            v = 0;
        }
    }
    return _chile;
}

string tamanoBebida() {
    int v;
    v = 0;
    string _tamano;
    while (v == 0) {
        cout << "De que tamano quiere su bebida (Grande, Mediana, Chica)" << endl;
        cin >> _tamano;
        if (_tamano == "Grande" or _tamano == "Mediana" or _tamano == "Chica") {
            v = 1;
        }
        else {
            cout << "Valor no valido, intente de nuevo" << endl;
            v = 0;
        }
    }
    return _tamano;
}

double costoBebida(string _tamano) {
    double _costo;
    _costo = 0;
    if (_tamano == "Grande") {
        _costo = 40;
    }
    if (_tamano == "Mediana") {
        _costo = 35;
    }
    if (_tamano == "Chica") {
        _costo = 30;
    }
    return _costo;
}

int quiereAlgoMas(double total) { //pregunta al usuario si quiere algo más
    int b;
    b = 0;
    int eleccion;
    while (b == 0) {
        cout << "Desea algo mas?" << endl;
        cout << "(1) Si" << endl;
        cout << "(2) No" << endl;
        cin >> eleccion;
        if (eleccion == 1) {
            cout << "El precio total hasta el momento es de " << total << "$" << endl;
            return 0;
            b = 1;
        }
        else if (eleccion == 2) {
            cout << "El precio final es de " << total << "$" << endl;
            return 1;
            b = 1;
        }
        else {
            cout << "Eleccion no valida, elija de nuevo" << endl;
            b = 0;
        }
    }
}

int main()
{   
    double total; //se crea una variable total para llevar la suma de toda la orden
    total = 0;

    int eleccion;
    int a;
    a = 0;
    while(a == 0) { //cicla el proceso hasta que la validacion se haga correctamente
        
        menu();
        cout << "Que desea ordenar (1,2,3,4)" << endl;
        cin >> eleccion; //recibe la eleccion del usuario

        if (eleccion == 1) { //valida la eleccion del usuario
            //cin para las variables
           
            //Este segmento valida la eleccion de sabor
            
            string _sabor;
            _sabor = saborPalomitas();

            // Este segmento valida la eleccion de tamaño
            
            string _tamano;
            _tamano = tamanoPalomitas();

            //Este segmento asigna el costo del producto dependiendo del tamaño
            double _costo;
            _costo = costoPalomitas(_tamano);
           

            Palomitas P1 = Palomitas(_costo, _sabor, _tamano);
            cout << "Palomitas sabor " << P1.getSabor() << " " << P1.getTamano() << " " << P1.getCosto() << "$" << endl;
            total = total + P1.getCosto(); //suma el costo del producto al total

            a = quiereAlgoMas(total);
            
        }
        else if (eleccion == 2) {

             //Este segmento valida la eleccion del queso
            string _queso;
            _queso = elegirQueso();
            
            // Este segmento valida la eleccion de chile
            
            string _chile;
            _chile = elegirChile();


            Nachos N1 = Nachos(30.0, _queso, _chile);
            cout << "Nachos " << N1.getQueso() << " " << N1.getChile() << " " << N1.getCosto() << "$" << endl;
            total = total + N1.getCosto(); //suma el costo del producto al total

            a = quiereAlgoMas(total);
        }
        else if (eleccion == 3) {

            // Este segmento valida la eleccion de tamaño
            string _tamano;
            _tamano = tamanoBebida();
            
           
            //Este segmento asigna el costo del producto dependiendo del tamaño
            double _costo;
            _costo = costoBebida(_tamano);
            

            Bebida B1 = Bebida(_tamano,_costo);
            cout << "Bebida " << B1.getTamano() << " " << B1.getCosto() << "$" << endl;
            
            total = total + B1.getCosto(); //suma el costo del producto al total

            a = quiereAlgoMas(total);
        }
        else if (eleccion == 4) {
           
            Combo C1 = Combo(140.0, Palomitas(), Nachos(), Bebida()); //usa funciones default para dar los parámetros del combo
            
            string _sabor;
            _sabor = saborPalomitas();

            C1.setPalomas(_sabor); //cambia el valor de palomitas del objeto C1

            string _queso;
            _queso = elegirQueso();
            string _chile;
            _chile = elegirChile();

            C1.setQueso(_queso);
            C1.setChile(_chile);

            C1.resumen();

            
            total = total + C1.getCosto(); //suma el costo del producto al total

            a = quiereAlgoMas(total);
        }
        else if (eleccion == 5) { //En caso de querer terminar la compra sin pedir algo más
            cout << "El precio final es de " << total << "$" << endl;
            a = 1;
        }

        else {
            cout << "Eleccion no valida, elija de nuevo" << endl;
            a = 0;
        }
    }
}
