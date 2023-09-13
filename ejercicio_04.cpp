#include <iostream>

using namespace std;

int main() {

    float rOperacion;
    float num1, num2;
    string operacion; 

    cout<<"Ingrese un número: ";
    cin>>num1;

    cout<<"Ingrese el siguiente número: ";
    cin>>num2;

    cout<<"Ingrese la operación que deseas: ";
    cin>>operacion;

    for (char &c : operacion) {
        c = tolower (c);
    } 

    if (operacion == "suma") {

        rOperacion = num1 + num2;

    } else if (operacion == "resta") {

        rOperacion = num1 - num2;
        
    } else if (operacion == "multiplicacion") {

        rOperacion = num1 * num2;

    } else if (operacion == "division") {

        rOperacion = num1 / num2; 

    }
    
    cout<<"El resultado de la "<<operacion<<" es: "<<rOperacion;


    return 0;
}