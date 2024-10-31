#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include "Onibus.hpp"

using namespace std;

class Empresa {
    private:
        int numOnibus;
        Onibus* onibus[20];

    public:
        Empresa();

        bool adicionar_onibus(const string& placa, int capacidadeMaxima);
        Onibus* busca_onibus(const string& placa);
        void imprimir_estado();
};

#endif