#pragma once
#include <iostream>
using namespace std;
#include "Snack.h" //incluye la clase Snack.h

class Palomitas: public Snack { //crea clase, : public Snack hace que herede los atributos de Snack
private:
	string sabor; //atributos
	string tamano;

public:
	Palomitas(double, string, string); //constructor, se incluye double pues es el costo que hereda de Snack.h
	Palomitas();
	string getSabor(); //getters, regresan el valor del objeto para los parámetros especificados
	string getTamano();
	void setSabor(string);

};

Palomitas::Palomitas(double _costo, string _sabor, string _tamano) :Snack(_costo) { //constructor que recibe valores del usuario
	sabor = _sabor;
	tamano = _tamano;
	
}

Palomitas::Palomitas():Snack() { //constructor hardcodeado, es un default por lo que no recibe valores

	sabor = "Mantequilla";
	tamano = "Grande";

}

string Palomitas::getSabor() { //retorna el sabor
	return sabor;
}

string Palomitas::getTamano() {
	return tamano;
}

void Palomitas:: setSabor(string _sabor) {
	sabor = _sabor;
}
