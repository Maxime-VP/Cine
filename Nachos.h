#pragma once
#include <iostream>
using namespace std;
#include "Snack.h" //incluye el código de Snack.h

class Nachos : public Snack { //hereda el atributo costo de la clase Snack
private:
	string queso; //atributos
	string chile;

public:
	Nachos(double, string, string); //constructor
	Nachos();
	string getQueso(); //getters retornan valores del objeto al main
	string getChile();
	void setChile(string);
	void setQueso(string);
};

Nachos::Nachos(double _costo, string _queso, string _chile) :Snack(_costo) { //constructor con valores del usuario
	queso = _queso;
	chile = _chile;

}
Nachos::Nachos(): Snack() {
	queso = "con queso";
	chile = "sin chile";
}

string Nachos::getQueso() { //retorna el valor de queso
	return queso;
}

string Nachos::getChile() {
	return chile;
}

void Nachos::setQueso(string _queso) {
	queso = _queso;
}

void Nachos::setChile(string _chile) {
	chile = _chile;
}
