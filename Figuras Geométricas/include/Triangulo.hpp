#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.hpp"

class Triangulo : public FiguraGeometrica {
    private:
        float _base, _altura;
    public:
        Triangulo(float x, float y, float b, float h) : FiguraGeometrica(x, y), _base(b), _altura(h) {}

        void Desenha() override;
        float CalculaArea() override;
};

#endif