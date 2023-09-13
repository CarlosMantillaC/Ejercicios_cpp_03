#include <iostream>
using namespace std;

int main() {
    int distancias[] = {50, 55, 57, 58, 60};
    int t = 174;
    int sumaMax = 0;
    int distancia1, distancia2, distancia3;

    for (int i = 0; i < 5; ++i) {

        for (int j = i + 1; j < 5; ++j) {

            for (int k = j + 1; k < 5; ++k) {

                int sumaActual = distancias[i] + distancias[j] + distancias[k];

                if (sumaActual <= t && sumaActual > sumaMax) {
                    sumaMax = sumaActual;

                    distancia1 = distancias[i];
                    distancia2 = distancias[j];
                    distancia3 = distancias[k];

                }
            }
        }
    }


    cout << "Los pueblos que se podrán visitar son de las distancias: "
        << distancia1 << " " << distancia2 << " " << distancia3;


    return 0;
}