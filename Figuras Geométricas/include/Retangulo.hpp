#ifndef RETANGULO_H
#define RETANGULO_H

#include "FiguraGeometrica.hpp"

class Retangulo : public FiguraGeometrica {
    private:
        float _base, _altura;
    public:
        Retangulo(float x, float y, float b, float h) : FiguraGeometrica(x, y), _base(b), _altura(h) {}

        void Desenha() override;
        float CalculaArea() override;
};

#endif