#pragma once
#include <iostream>
using namespace std;
#include "Palomitas.h" //incluye el código de Palomitas.h
#include "Nachos.h"
#include "Bebida.h"

class Combo{
private:
	double precio; //atributo del combo para tener un costo distinto al de los productos por su cuenta
	Palomitas palomitas; //atributo del tipo objeto de clase Palomitas
	Nachos nachos;
	Bebida bebida;
public:
	Combo(double, Palomitas, Nachos, Bebida); //constructor, incluye a las clases de los objetos que componen el combo
	void resumen(); //imprime directamente el contenido del combo
	double getCosto();
	void setPalomas(string);
	void setQueso(string);
	void setChile(string);
};

Combo::Combo(double _precio, Palomitas _palomitas, Nachos _nachos, Bebida _bebida) { //constructor con atributos del main y agrega Palomitas predeterminadas
	precio = _precio;
	palomitas = _palomitas;
	nachos = _nachos;
	
	nachos.setCosto(30); //cambia el valor de costo del objeto nachos por 30
	bebida = _bebida;
}

void Combo::resumen() { //imprime los valores de cada uno de los objetos contenidos en la clase combo
	cout << "El combo consiste de: " << endl;
	cout <<"Palomitas de "<< palomitas.getSabor() << " " << palomitas.getTamano() << " " << palomitas.getCosto() <<"$"<< endl; 
	cout << "Nachos " << nachos.getQueso() << " " << nachos.getChile() << " " << nachos.getCosto() << "$" << endl;
	cout << "Bebida " << bebida.getTamano() << " " << bebida.getCosto() << "$" << endl;
	double preciofinal;
	preciofinal = palomitas.getCosto() + nachos.getCosto() + bebida.getCosto(); //suma los costos de los tres productos por separado
	
	cout << "El total es de "<<preciofinal<< "$"<<endl; 
	cout << "Por pedir en combo el precio final es " << precio << "$" << endl; //imprime el costo recibido en el valor del combo
	
	double descuento;
	descuento = preciofinal - precio; //calcula la diferencia entre la suma de los precios por separado y el precio del combo

	cout << "El ahorro por pedir en combo es de " << descuento << "$" << endl; //imprime la cantidad ahorrada
} 

double Combo::getCosto() {
	return precio;
}

void Combo:: setPalomas(string _sabor) {
	palomitas.setSabor(_sabor);
}

void Combo::setQueso(string _queso) {
	nachos.setQueso(_queso);
}

void Combo::setChile(string _chile) {
	nachos.setChile(_chile);
}