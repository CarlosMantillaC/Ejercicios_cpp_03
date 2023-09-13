#include <iostream>

using namespace std;

int main() {

    int hijos, edad;
    string viuda;
    float montoHijos, montoEdad, montoViuda;

    cout<<"Ingrese la cantidad de hijos: ";
    cin>>hijos;

    cout<<"Ingrese la cantidad de hijos entre 6 y 18 años: ";
    cin>>edad;

    cout<<"¿La madre es viuda?, ingresa si o no: ";
    cin>>viuda;


    if (hijos > 0 && hijos <= 2) {

        montoHijos = 70.00;

    } else if (hijos >= 3 && hijos <= 5) {

        montoHijos = 90.00;

    } else if (hijos >= 6) {

        montoHijos = 120;
    }

    for (int I = 0; I <= edad; I++) {

        montoEdad = edad * 10.00;
    }

    for(char &c : viuda) {
        c = tolower(c);
    }


    if (viuda == "si") {

        montoViuda = 20.00;
    }

    cout<<"El monto mensual que recibirá la familia es de: S/. "<<montoEdad+montoHijos+montoViuda;

    return 0;
}