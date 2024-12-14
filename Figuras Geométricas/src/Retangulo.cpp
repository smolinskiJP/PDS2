#include "Retangulo.hpp"
#include <iostream>

void Retangulo::Desenha() {
    std::cout << this->_centro.getX() << " " << this->_centro.getY() << " RETANGULO" << std::endl;
}

float Retangulo::CalculaArea() {
    return this->_altura * this->_base;
}