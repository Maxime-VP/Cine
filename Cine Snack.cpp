/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

//******************************************************************************
//
//Este programa recibe valores de un usuario para determinar lo que va a pedir
//y cuánto es el costo total de esos productos
//
//******************************************************************************

class Palomitas{
    private: //atributos
        
        string sabores;
        double costo;
        
    public: //metodos
        Palomitas(string,double); //constructor
        double getCosto();
        void SetSabores();
        string getSabor();
        void SetSaboresPrueba(); //tiene un valor hardcodeado
};

Palomitas::Palomitas(string _sabores, double _costo){ //constructor
    sabores = "natural";
    costo = _costo;
}

double Palomitas::getCosto(){ //regresa el costo de el producto
    return costo;
}

void Palomitas::SetSabores(){ // permite dar un valor al sabor de las palomitas
     string newSabor;
     cout<<"Ingresa el sabor de palomitas (mantequilla, natural, caramelo)"<<endl;
     int a;
     a=0;
     while (a==0){ //Valida que se use un sabor válido
        cin>>newSabor;
        if (newSabor == "mantequilla" or newSabor == "natural" or newSabor == "caramelo" or newSabor == "Mantequilla" or newSabor == "Natural" or newSabor == "Caramelo"){
            sabores = newSabor;
            a=1;
        }
        else { // avisa que hubo un error y perite que el ciclo continue
            cout<<"Sabor no válido, favor de ingresar un nuevo sabor"<<endl;
            a=0;
        }
     }
     
}

string Palomitas::getSabor(){ //regresa el sabor
    return sabores;
}

int SaborPalomitas() //manda a pedir el costo y el sabor de las palomitas y lo muestra al consumidor
{
    
    string Sabor;
    double precio;
    precio = 89;
    
    Sabor= "Naturales";
    
    Palomitas P1 = Palomitas(Sabor,precio);

    double preciofin;
    precio = P1.getCosto();
    
    P1.SetSabores();
    Sabor = P1.getSabor();

    
    cout<<"El sabor de las palomitas es "<<Sabor<<endl;
    cout<<"El precio de las palomitas es "<<precio<<endl;
    return 0;
}

class Nachos{
    private: //atributos
        
        int queso;
        double costo;
        
    public: //metodos
        Nachos(int,double); //constructor
        double getCosto();
        void SetQueso();
        int getQueso();
        void SetQuesoPrueba();
};

Nachos::Nachos(int _queso, double _costo){ //constructor
    queso = 1;
    costo = _costo;
}

double Nachos::getCosto(){ //regresa costo
    return costo;
}

void Nachos::SetQueso(){ // permite ingresar si se desea o no queso
     int newQueso;
     newQueso =1;
     cout<<"Ingresa 1 para añadir queso"<<endl;
     cin>>newQueso;
     queso = newQueso;
     
     
}

int Nachos::getQueso(){ // regresa si tiene o no queso
    return queso;
}

int QuesoNachos() // verifica si tienen queso e imprime el precio
{
    
    int queso;
    double precio;
    precio = 40;
    
    queso= 0;
    
    Nachos N1 = Nachos (queso, precio);

    double preciofin;
    precio = N1.getCosto();
    
    N1.SetQueso();
    
    string Tienequeso;
    queso = N1.getQueso();
    
    string conqueso;
    if (queso == 1){
        Tienequeso = "con queso";
    }
    else {
        Tienequeso = "sin queso";
    }
    
    cout<<"Unos nachos "<<Tienequeso<<endl;
    cout<<"El precio de los nachos es "<<precio<<endl;
    return 0;
}



class Icee{
    private: //atributos
        
        string sabores;
        double costo;
        
    public: //metodos
        Icee(string,double); //constructor
        double getCosto();
        void SetSabores();
        string getSabor();
        void SetSaboresPrueba();
};

Icee::Icee(string _sabores, double _costo){ //constructor
    sabores = "cereza"; 
    costo = _costo; 
}

double Icee::getCosto(){ //regresa el costo
    return costo;
}

void Icee::SetSabores(){ //valida y recibe el sabor
     string newSabor;
     cout<<"Ingresa el sabor de Icee (cereza, moraazul, mango)"<<endl;
     int a;
     a=0;
     while (a==0){
        cin>>newSabor;
        if (newSabor == "cereza" or newSabor == "Cereza" or newSabor == "moraazul" or newSabor == "Moraazul" or newSabor == "mango" or newSabor == "Mango"){
            sabores = newSabor;
            a=1;
        }
        else {
            cout<<"Sabor no válido, favor de ingresar un nuevo sabor"<<endl;
            a=0;
        }
     }
     
}

string Icee::getSabor(){ //regresa el sabor
    return sabores;
}

int SaborIcee() { //manda a llamar a los getters y setters de Icee e imprime los valores recibidos
    
    string Sabor;
    double precio;
    precio = 45;
    
    Sabor= "cereza";
    
    Icee Ic1 = Icee(Sabor,precio);

    double preciofin;
    precio = Ic1.getCosto();
    
    Ic1.SetSabores();
    Sabor = Ic1.getSabor();

    
    cout<<"El sabor del icee es "<<Sabor<<endl;
    cout<<"El precio del icee es "<<precio<<endl;
    return 0;

}




class Refresco{
    private: //atributos
        
        int hielo;
        double costo;
        
    public: //metodos
        Refresco(int,double); //constructor
        double getCosto();
        void SetHielo();
        int getHielo();
        void SetHieloPrueba();
};

Refresco::Refresco(int _hielo, double _costo){ //constructor
    hielo = 1;
    costo = _costo; 
}

double Refresco::getCosto(){
    return costo;
}

void Refresco::SetHielo(){ //recibe si lleva o no hielo
     int newHielo;
     newHielo= 1;
     cout<<"Ingresa 1 para añadir hielo"<<endl;
     cin>>newHielo;
     hielo = newHielo;
     
     
}

int Refresco::getHielo(){ //regresa si tiene o no hielo
    return hielo;
}

int HieloRefresco() //manda a llamar a los getters y setters de Refresco e imprime los valores recibidos
    
{
    
    int hielo;
    double precio;
    precio = 30;
    
    hielo= 0;
    
    Refresco R1 = Refresco (hielo, precio); //crea un objeto Refresco llamado R1

    double preciofin;
    precio = R1.getCosto();
    
    R1.SetHielo();
    
    string Tienehielo;
    hielo = R1.getHielo();
    
    string conHielo;
    if (hielo == 1){
        conHielo = "con hielo";
    }
    else {
        conHielo = "sin hielo";
    }
    
    cout<<"Un refresco "<<conHielo<<endl;
    cout<<"El precio del refresco es "<<precio<<endl;
    return 0;
}
//***************************************************************************************
//
//El código siguiente incluye las versiones de prueba de las funciones empleadas y de sus setters
//
//***************************************************************************************

void Palomitas::SetSaboresPrueba(){ // permite dar un valor al sabor de las palomitas
     string newSabor;
     cout<<"Ingresa el sabor de palomitas (mantequilla, natural, caramelo)"<<endl;
     int a;
     a=0;
     while (a==0){ //Valida que se use un sabor válido
        newSabor="caramelo";
        if (newSabor == "mantequilla" or newSabor == "natural" or newSabor == "caramelo" or newSabor == "Mantequilla" or newSabor == "Natural" or newSabor == "Caramelo"){
            sabores = newSabor;
            a=1;
        }
        else { // avisa que hubo un error y perite que el ciclo continue
            cout<<"Sabor no válido, favor de ingresar un nuevo sabor"<<endl;
            a=0;
        }
     }
     
}

int SaborPalomitasPrueba() //manda a pedir el costo y el sabor de las palomitas y lo muestra al consumidor
{
    
    string Sabor;
    double precio;
    precio = 89;
    
    Sabor= "Naturales";
    
    Palomitas P1 = Palomitas(Sabor,precio);

    double preciofin;
    precio = P1.getCosto();
    
    P1.SetSaboresPrueba();
    Sabor = P1.getSabor();

    
    cout<<"El sabor de las palomitas es "<<Sabor<<endl;
    cout<<"El precio de las palomitas es "<<precio<<endl;
    return 0;
}



void Nachos::SetQuesoPrueba(){ // permite ingresar si se desea o no queso
     int newQueso;
     newQueso =1;
     cout<<"Ingresa 1 para añadir queso"<<endl;
     newQueso=1;
     queso = newQueso;
}

int QuesoNachosPrueba() // verifica si tienen queso e imprime el precio
{
    
    int queso;
    double precio;
    precio = 40;
    
    queso= 0;
    
    Nachos N1 = Nachos (queso, precio);

    double preciofin;
    precio = N1.getCosto();
    
    N1.SetQuesoPrueba();
    
    string Tienequeso;
    queso = N1.getQueso();
    
    string conqueso;
    if (queso == 1){
        Tienequeso = "con queso";
    }
    else {
        Tienequeso = "sin queso";
    }
    
    cout<<"Unos nachos "<<Tienequeso<<endl;
    cout<<"El precio de los nachos es "<<precio<<endl;
    return 0;
}


void Icee::SetSaboresPrueba(){ //valida y recibe el sabor
     string newSabor;
     cout<<"Ingresa el sabor de Icee (cereza, moraazul, mango)"<<endl;
     int a;
     a=0;
     while (a==0){
        newSabor="mango";
        if (newSabor == "cereza" or newSabor == "Cereza" or newSabor == "moraazul" or newSabor == "Moraazul" or newSabor == "mango" or newSabor == "Mango"){
            sabores = newSabor;
            a=1;
        }
        else {
            cout<<"Sabor no válido, favor de ingresar un nuevo sabor"<<endl;
            a=0;
        }
     }
     
}

int SaborIceePrueba() { //manda a llamar a los getters y setters de Icee e imprime los valores recibidos
    
    string Sabor;
    double precio;
    precio = 45;
    
    Sabor= "cereza";
    
    Icee Ic1 = Icee(Sabor,precio);

    double preciofin;
    precio = Ic1.getCosto();
    
    Ic1.SetSaboresPrueba();
    Sabor = Ic1.getSabor();

    
    cout<<"El sabor del icee es "<<Sabor<<endl;
    cout<<"El precio del icee es "<<precio<<endl;
    return 0;

}



void Refresco::SetHieloPrueba(){ //recibe si lleva o no hielo
     int newHielo;
     newHielo= 1;
     cout<<"Ingresa 1 para añadir hielo"<<endl;
     cin>>newHielo;
     hielo = newHielo;
}

int HieloRefrescoPrueba() //manda a llamar a los getters y setters de Refresco e imprime los valores recibidos
{
    
    int hielo;
    double precio;
    precio = 30;
    
    hielo= 0;
    
    Refresco R1 = Refresco (hielo, precio); //crea un objeto Refresco llamado R1

    double preciofin;
    precio = R1.getCosto();
    
    R1.SetHieloPrueba();
    
    string Tienehielo;
    hielo = R1.getHielo();
    
    string conHielo;
    if (hielo == 1){
        conHielo = "con hielo";
    }
    else {
        conHielo = "sin hielo";
    }
    
    cout<<"Un refresco "<<conHielo<<endl;
    cout<<"El precio del refresco es "<<precio<<endl;
    return 0;
}

int Prueba(){
    
    string eleccion;
    
    cout<<"Esta es una función de prueba el valor esperado es de 140$ \n \n Menu: \n Palomitas 89$ \n Nachos 40$\n Refresco 30$ \n Icee 45$ \n Combo 140$ \n (El combo puede llevar refresco o Icee) \n"<<endl;
    double CostoFinal;
    CostoFinal= 0;
    
    int a;
    int b;
    a=0;
    while (a==0){
        cout<<"Desea un combo, (si/no)"<<endl;
        eleccion="si";
        if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
            SaborPalomitasPrueba();
            QuesoNachosPrueba();
            
            b=0;
            while (b==0){
                cout<<"¿Quiere refresco o icee? (Refresco/Icee)"<<endl;
                eleccion="Icee";
                if (eleccion=="refresco" or eleccion == "Refresco" or eleccion == "R" or eleccion == "REFRESCO"){
                    HieloRefrescoPrueba();
                    b=1;
                    }
                else if (eleccion=="icee" or eleccion == "Icee" or eleccion == "I" or eleccion == "ICEE"){
                    SaborIceePrueba();
                    b=1;
                    }
                else {
                    cout<<"Opción inválida, eliga de nuevo"<<endl;
                    b=0;
                    }
                
                }
        
        cout<<"El precio del combo es 140$"<<endl;    
        CostoFinal=CostoFinal + 140;
        
        cout<<"¿Desea ordenar algo más? (Si/No)"<<endl;
        eleccion="no";
        if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
            a=0;
            }
            
        else{
            cout<<"El total de la orden es: "<< CostoFinal<<"$"<<endl;
            a=1;
            }
        
        }
            
        
        else if (eleccion=="no" or eleccion == "n" or eleccion == "No" or eleccion == "NO" or eleccion == "N"){
            cout<<"Desea comprar palomitas (si/no)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                SaborPalomitasPrueba();
                CostoFinal=CostoFinal + 89;
            }
            cout<<"Desea comprar nachos (si/no)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                QuesoNachosPrueba();
                CostoFinal=CostoFinal + 40;
            }
            cout<<"Desea comprar refresco (si/no)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                HieloRefrescoPrueba();
                CostoFinal=CostoFinal + 30;
            }
            cout<<"Desea comprar un icee (si/no)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                SaborIceePrueba();
                CostoFinal=CostoFinal + 45;
            }
            
            cout<<"¿Desea ordenar algo más? (Si/No)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                a=0;
                }
            
            else{
                cout<<"El total de la orden es: "<< CostoFinal<<"$"<<endl;
                a=1;
                }
            
        }
        else{
            cout<<"Eliga alguna opción"<<endl;
            a=0;
        }
    }
    
    return 0;
}

//***************************************************************************************
//
//Fin de funciones prueba
//
//***************************************************************************************

int main(){
    
    string eleccion;
    
    cout<<"Para realizar una prueba, escriba Prueba \n \n Menu: \n Palomitas 89$ \n Nachos 40$\n Refresco 30$ \n Icee 45$ \n Combo 140$ \n (El combo puede llevar refresco o Icee) \n"<<endl;
    double CostoFinal;
    CostoFinal= 0;
    
    int a;
    int b;
    a=0;
    while (a==0){
        cout<<"Desea un combo, (si/no)"<<endl;
        cin>>eleccion;
        if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
            SaborPalomitas();
            QuesoNachos();
            
            b=0;
            while (b==0){
                cout<<"¿Quiere refresco o icee? (Refresco/Icee)"<<endl;
                cin>>eleccion;
                if (eleccion=="refresco" or eleccion == "Refresco" or eleccion == "R" or eleccion == "REFRESCO"){
                    HieloRefresco();
                    b=1;
                    }
                else if (eleccion=="icee" or eleccion == "Icee" or eleccion == "I" or eleccion == "ICEE"){
                    SaborIcee();
                    b=1;
                    }
                else {
                    cout<<"Opción inválida, eliga de nuevo"<<endl;
                    b=0;
                    }
                
                }
        
            cout<<"El precio del combo es 140$"<<endl;    
            CostoFinal=CostoFinal + 140;
        
            cout<<"¿Desea ordenar algo más? (Si/No)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                a=0;
                }
            
            else{
                cout<<"El total de la orden es: "<< CostoFinal<<"$"<<endl;
                a=1;
                }
        
        }
            
        
        else if (eleccion=="no" or eleccion == "n" or eleccion == "No" or eleccion == "NO" or eleccion == "N"){
            cout<<"Desea comprar palomitas (si/no)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                SaborPalomitas();
                CostoFinal=CostoFinal + 89;
            }
            cout<<"Desea comprar nachos (si/no)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                QuesoNachos();
                CostoFinal=CostoFinal + 40;
            }
            cout<<"Desea comprar refresco (si/no)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                HieloRefresco();
                CostoFinal=CostoFinal + 30;
            }
            cout<<"Desea comprar un icee (si/no)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                SaborIcee();
                CostoFinal=CostoFinal + 45;
            }
            
            cout<<"¿Desea ordenar algo más? (Si/No)"<<endl;
            cin>>eleccion;
            if (eleccion=="si" or eleccion == "s" or eleccion == "sí" or eleccion == "Si" or eleccion == "Sí" or eleccion == "S" or eleccion == "SÍ" or eleccion == "SÍ"){
                a=0;
                }
            
            else{
                cout<<"El total de la orden es: "<< CostoFinal<<"$"<<endl;
                a=1;
                }
            
        }
        
        else if (eleccion == "Prueba" or eleccion == "prueba"){
           
           cout<<"Inicia Prueba"<<endl;
           Prueba();
           cout<<"Termina Prueba"<<endl;
            a=1;
        }
        else{
            cout<<"Eliga alguna opción"<<endl;
            a=0;
        }
    }
    
    return 0;
}





