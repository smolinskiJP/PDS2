#include "Onibus.hpp"
#include "Empresa.hpp"
#include <iostream>
#include <sstream>
#define SUCESSO 0

using namespace std;

int main(int argc, char ** argv) {
    Empresa empresa;
    char op;
    bool flag = true;
    
    string placa1, placa2;
    int lotacao, numPessoas;
    Onibus * bus1 = nullptr;
    Onibus * bus2 = nullptr;

    while(flag){
        cin >> op;
        switch(op){
            case 'C':
                cin >> placa1 >> lotacao;
                if (empresa.adicionar_onibus(placa1, lotacao)) cout << "novo onibus cadastrado" << endl;
                else cout << "ERRO : onibus repetido" << endl;
                break;
            case 'S':
                cin >> placa1 >> numPessoas;
                bus1 = empresa.busca_onibus(placa1);
                if(bus1 == nullptr) cout << "ERRO : onibus inexistente" << endl;
                else if (bus1->subir_passageiros(numPessoas)) cout << "passageiros subiram com sucesso" << endl;
                else cout << "ERRO : onibus lotado" << endl;
                break;
            case 'D':
                cin >> placa1 >> numPessoas;
                bus1 = empresa.busca_onibus(placa1);
                if(bus1 == nullptr) cout << "ERRO : onibus inexistente" << endl;
                else if (bus1->descer_passageiros(numPessoas)) cout << "passageiros desceram com sucesso" << endl;
                else cout << "ERRO : faltam passageiros" << endl;
                break;
            case 'T':
                cin >> placa1 >> placa2 >> numPessoas;
                bus1 = empresa.busca_onibus(placa1);
                bus2 = empresa.busca_onibus(placa2);
                if(bus1 == nullptr || bus2 == nullptr) cout << "ERRO : onibus inexistente" << endl;
                else if(bus1->transfere_passageiros(bus2, numPessoas)) cout << "transferencia de passageiros efetuada" << endl;
                else cout << "ERRO : transferencia cancelada" << endl;
                break;
            case 'I':
                empresa.imprimir_estado();
                break;
            case 'F':
                flag = false;
                break;
            default: break;
        }
    }
    return SUCESSO;
}