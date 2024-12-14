#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include "Ponto.hpp"

class FiguraGeometrica{
    protected:
        Ponto _centro;

    public:
        FiguraGeometrica(float c_x, float c_y) : _centro(Ponto(c_x, c_y)) {}
        virtual ~FiguraGeometrica() {}

        virtual void Desenha() {}
        virtual float CalculaArea() { return 0; }
};

#endif