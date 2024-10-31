#include "Onibus.hpp"
#include <iostream>

using namespace std;

Onibus::Onibus(const string& placa, int capacidadeMaxima){
    this->placa = placa;
    this->capacidadeMaxima = capacidadeMaxima;
    this->lotacaoAtual = 0;
}

bool Onibus::subir_passageiros(int numPassageiros) {
    if (this->lotacaoAtual + numPassageiros > this->capacidadeMaxima) {
        return false;
    }
    this->lotacaoAtual += numPassageiros;
    return true;
}

bool Onibus::descer_passageiros(int numPassageiros) {
    if (this->lotacaoAtual - numPassageiros < 0) {
        return false;
    }
    this->lotacaoAtual -= numPassageiros;
    return true;
}

bool Onibus::transfere_passageiros(Onibus* outro, int numPassageiros){
    if (lotacaoAtual - numPassageiros < 0 || outro->getLotacaoAtual() + numPassageiros > outro->getCapacidadeMaxima()){
        return false;
    }
    this->descer_passageiros(numPassageiros);
    outro->subir_passageiros(numPassageiros);
    return true;
}

void Onibus::imprimir_estado(){
    cout << this->placa << " (" << this->lotacaoAtual << "/" << this->capacidadeMaxima << ")" << endl;
}

//Métodos GET
string Onibus::getPlaca(){
    return this->placa; 
}

int Onibus::getLotacaoAtual(){ 
    return this->lotacaoAtual;
}
int Onibus::getCapacidadeMaxima(){ 
    return this->capacidadeMaxima; 
}