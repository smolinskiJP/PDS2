#include "HeapInt.hpp"

HeapInt::HeapInt() : _valor(new int(0)) {}
HeapInt::HeapInt(int valor) : _valor(new int(valor)) {}
HeapInt::HeapInt(const HeapInt& heap_int) : _valor(new int(*heap_int._valor)) {}
HeapInt::~HeapInt() {
    delete this->_valor;
}

HeapInt& HeapInt::operator=(int valor) {
    *this->_valor = valor;
    return *this;
}

HeapInt& HeapInt::operator=(const HeapInt& heap_int) {
    *this->_valor = *heap_int._valor;
    return *this;
}

HeapInt HeapInt::operator+(const HeapInt& other) const {
    return HeapInt(*this->_valor + *other._valor);
}

HeapInt HeapInt::operator-(const HeapInt& heap_int) const {
    return HeapInt(*this->_valor - *heap_int._valor);
}

bool HeapInt::operator==(const HeapInt& heap_int) const {
    return *(this->_valor) == *(heap_int._valor);
}

ostream& operator<<(ostream& saida, const HeapInt& heap_int) {
    saida << *heap_int._valor;
    return saida;
}

istream& operator>>(istream& entrada, HeapInt& heap_int) {
    entrada >> *heap_int._valor;
    return entrada;
}