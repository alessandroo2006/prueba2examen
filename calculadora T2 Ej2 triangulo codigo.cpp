#include <iostream>
using namespace std;

int main() {
    // Declarar las variables para los lados
    double lado1, lado2, lado3;
    
    // Leer los lados del triángulo
    cout << "Introduce la longitud del primer lado: ";
    cin >> lado1;
    cout << "Introduce la longitud del segundo lado: ";
    cin >> lado2;
    cout << "Introduce la longitud del tercer lado: ";
    cin >> lado3;

    // Determinar el tipo de triángulo
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << "Las longitudes de los lados deben ser mayores que cero." << endl;
    } else if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triángulo es equilátero." << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "El triángulo es isósceles." << endl;
    } else {
        cout << "El triángulo es escaleno." << endl;
    }

    return 0;
}


