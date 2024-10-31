#ifndef ONIBUS_HPP
#define ONIBUS_HPP

#include <string>

using namespace std;

class Onibus {
    private:
        string placa;
        int capacidadeMaxima;
        int lotacaoAtual;

    public:
        Onibus(const string& placa, int capacidadeMaxima);

        bool subir_passageiros(int numPassageiros);
        bool descer_passageiros(int numPassageiros);
        bool transfere_passageiros(Onibus* outro, int numPassageiros);
        void imprimir_estado();

        string getPlaca();
        int getLotacaoAtual();
        int getCapacidadeMaxima();
};

#endif