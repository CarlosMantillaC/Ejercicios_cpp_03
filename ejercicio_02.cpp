#include <iostream>

using namespace std;

int main() {

    float pies, metros, sumIngresoMetros, pulgadas, yardas, millas;

    cout<<"Ingrese una cantidad expresada en pies: ";
    cin>>pies;

    cout<<"Ingrese una cantidad expresada en metros: ";
    cin>>metros;

    pies = pies / 3.281; //De pies a metros
    sumIngresoMetros = pies + metros;

    pulgadas = sumIngresoMetros * 39.37;
    yardas = sumIngresoMetros * 1.094;
    metros = sumIngresoMetros;
    millas = sumIngresoMetros / 1609;

    cout<<"La suma convertida a Pulgadas es: "<<pulgadas<<endl;
    cout<<"La suma convertida a Yardas es: "<<yardas<<endl;
    cout<<"La suma convertida a Metros es: "<<metros<<endl;
    cout<<"La suma convertida a Millas es: "<<millas<<endl;
    


    return 0;
}