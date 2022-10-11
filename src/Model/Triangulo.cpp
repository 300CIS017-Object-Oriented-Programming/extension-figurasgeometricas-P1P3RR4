//
// Created by Pipe on 11/10/2022.
//

#include "Triangulo.h"

Triangulo::Triangulo() {
    base = 0;
    altura = 0;
    l1 = 0;
    l2 = 0;
    nombreFigura = "Triangulo";
}

Triangulo::Triangulo(float base, float altura, float l1, float l2) {
    this->base = base;
    this->altura = altura;
    this->l1 = l1;
    this->l2 = l2;
}

void Triangulo::dibujarFigura() {
    cout << nombreFigura;
    cout << "\n";
    int diagonal=3;
    int longitud = 2 * diagonal - 2;
    for (int i = 0; i < diagonal; i++) {
        for (int j = 0; j < longitud; j++)
            cout << " ";
        longitud = longitud - 1;

        for (int j = 0; j <= i; j++) {
            cout << " *";
        }
        cout << "\n";
    }
}

float Triangulo::calcularArea() {
    area = (base * altura)/2;
    return area;
}

float Triangulo::calcularPerimetro() {
    perimetro = l1 + l2 + base;
    return perimetro;
}
