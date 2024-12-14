#include "CIRCULO.hpp"
#include <iostream>
#include <math.h>

void Circulo::Desenha() {
    std::cout << this->_centro.getX() << " " << this->_centro.getY() << " CIRCULO" << std::endl;
}

float Circulo::CalculaArea() {
    return pow(this->_raio, 2) * 3.14159265358979323846f;
}