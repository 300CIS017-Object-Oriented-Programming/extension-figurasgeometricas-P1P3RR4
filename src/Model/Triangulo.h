//
// Created by Pipe on 11/10/2022.
//

#ifndef EXTENSION_FIGURASGEOMETRICAS_P1P3RR4_TRIANGULO_H
#define EXTENSION_FIGURASGEOMETRICAS_P1P3RR4_TRIANGULO_H

#include "FiguraGeometrica.h"
#include <iostream>

class Triangulo: public FiguraGeometrica{
private:
    float base;
    float altura;
    float l1;
    float l2;
public:
    Triangulo();
    Triangulo(float base, float altura, float l1, float l2);
    virtual ~Triangulo() = default;

    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};


#endif //EXTENSION_FIGURASGEOMETRICAS_P1P3RR4_TRIANGULO_H