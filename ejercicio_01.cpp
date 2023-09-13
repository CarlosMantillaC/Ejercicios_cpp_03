#include <iostream>

using namespace std;

int main() {

    float distancia, horas, minutos[2], segundos[2], sumaHora, sumaMin, sumaSeg;

    for (int i = 1; i <= 2; i++)
    {

        cout << "Ingrese los minutos del atleta " << i << ": ";
        cin >> minutos[i];
        sumaMin += minutos[i];
        cout << "Ingrese los segundos del atleta " << i << ": ";
        cin >> segundos[i];
        sumaSeg += segundos[i];
    }

    sumaHora = sumaMin / 60;

    cout << "La suma de las horas son: " << sumaHora << endl;
    cout << "La suma de los minutos son: " << sumaMin << endl;
    cout << "La suma de los segundos son: " << sumaSeg << endl;

    return 0;
}