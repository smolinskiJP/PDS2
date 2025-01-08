#ifndef VETOR_H
#define VETOR_H

#include <iostream>

using namespace std;

template <typename T>
class Vetor{
    private:
        T * _vector;
        int _size;
        int _lastPos;

    public:
        Vetor(int size){
            this->_vector = new T[size];
            this->_size = size;
            this->_lastPos = 0;
        };

        Vetor(const Vetor& vector_a) {
            this->_vector = new T[vector_a._size];
            this->_size = vector_a._size;
            this->_lastPos = vector_a._lastPos;

            for(int i = 0; i < this->_lastPos; i++) this->_vector[i] = vector_a._vector[i];
        };

        ~Vetor(){
            delete[] this->_vector;
        };

        void SetElemento(int pos, T element){
            if(pos >= 0 && pos < this->_size) this->_vector[pos] = element;
        };

        T GetElemento(int pos) {
            if(pos >= 0 && pos < this->_size) return this->_vector[pos];
            return 0;
        };

        void AdicionaElemento(T element){
            if(this->_lastPos < this->_size) this->_vector[_lastPos++] = element;
        };

        void Imprime(){
            for(int i = 0; i < _lastPos; i++) std::cout << this->_vector[i] << " ";
            std::cout << std::endl;
        };
};

#endif