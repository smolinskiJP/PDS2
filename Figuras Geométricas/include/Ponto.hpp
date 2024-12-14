#ifndef PONTO_H
#define PONTO_H

class Ponto{
    private:
        float _x, _y;
    public:
        Ponto(float x, float y) : _x(x), _y(y) {}
        float getY() { return this->_y; }
        float getX() { return this->_x; }
};

#endif