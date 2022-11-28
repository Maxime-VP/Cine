#pragma once
#include <iostream>
using namespace std;


class Bebida {
private:
	
	string tamano; //no utilizar ñ crashea todo, atributos
	double costo;

public:
	Bebida(string, double); //constructor
	Bebida();
	string getTamano(); //getter
	double getCosto();
	
};

Bebida::Bebida(string _tamano, double _costo) { //constructor con parámetros del usuario
	tamano = _tamano;
	costo = _costo;
}

Bebida::Bebida() {
	tamano = "grande";
	costo = 40;
}

string Bebida::getTamano() { //retorna el tamaño
	return tamano;
}

double Bebida::getCosto() {
	return costo;
}

