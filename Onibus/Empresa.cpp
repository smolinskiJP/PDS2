#include "Empresa.hpp"
#include <iostream>

using namespace std;

Empresa::Empresa(){
    this->numOnibus = 0;
    for (int i = 0; i < 20; i++) {
        onibus[i] = nullptr;
    }
}

bool Empresa::adicionar_onibus(const string& placa, int capacidadeMaxima){
    if (this->busca_onibus(placa) != nullptr) { //já tem essa placa registrada
        return false;
    }
    if (this->numOnibus >= 20) { //capacidade máxima
        return false;
    }
    this->onibus[this->numOnibus++] = new Onibus(placa, capacidadeMaxima);
    return true;
}

Onibus* Empresa::busca_onibus(const string& placa){
    for (int i = 0; i < this->numOnibus; i++) {
        if (this->onibus[i] != nullptr && this->onibus[i]->getPlaca() == placa) {
            return onibus[i];
        }
    }
    return nullptr;
}

void Empresa::imprimir_estado(){
    for (int i = 0; i < this->numOnibus; i++) {
        if (this->onibus[i] != nullptr) {
            this->onibus[i]->imprimir_estado();
        }
    }
}