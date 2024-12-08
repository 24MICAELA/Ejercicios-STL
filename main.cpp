#include <iostream>
#include "Matemáticas/Matematicas.h"
#include "Geometría/Geometria.h"
#include "Ciencia/Ciencia.h"
#include "STL/STL.h"

int main() {
    // eje 1
    matematicas::Matematicas mat;
    std::cout << "Suma: " << mat.sumar(5, 3) << std::endl;
    std::cout << "Resta: " << mat.restar(5, 3) << std::endl;

    // eje 2
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;

    // eje 3
    Geometria::Circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;

    // eje 4
    double masa = 10.0; // kg
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(masa) << std::endl;

    // eje 5
    vectorOperations();
    mapOperations();
    setOperations();

    return 0;
}
