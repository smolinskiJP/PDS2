#include "aluno.hpp"

#include <iostream>
#include <algorithm>

Aluno::Aluno(const string& nome, int matricula)
    : _nome(nome), _matricula(matricula) {}

string Aluno::getNome() { return this->_nome; }
int Aluno::getMatricula() { return this->_matricula; }
vector<int> Aluno::getNotas() { return this->_notas; }

void Aluno::addNota(int nota){
    this->_notas.push_back(nota);
}

double Aluno::calcMedia(){
    double total = 0.0;
    int tamanho = this->_notas.size();
    for (int v : this->_notas) total += v;
    return total / (tamanho * 1.0);
}

int Aluno::maxNota(){
    return *max_element(this->_notas.begin(), this->_notas.end());
}

int Aluno::minNota(){
    return *min_element(this->_notas.begin(), this->_notas.end());
}