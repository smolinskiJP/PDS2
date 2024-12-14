#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.hpp"

class Circulo : public FiguraGeometrica {
    private:
        float _raio;
    public:
        Circulo(float x, float y, float r) : FiguraGeometrica(x, y), _raio(r) {}

        void Desenha() override;
        float CalculaArea() override;
};

#endif