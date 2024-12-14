#include "Triangulo.hpp"
#include <iostream>

void Triangulo::Desenha() {
    std::cout << this->_centro.getX() << " " << this->_centro.getY() << " TRIANGULO" << std::endl;
}

float Triangulo::CalculaArea() {
    return (this->_base * this->_altura) / 2.0;
}