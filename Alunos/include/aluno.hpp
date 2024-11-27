#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno{
    private:
        string _nome;
        int _matricula;
        vector<int> _notas;

    public:
        Aluno(const string& nome, int matricula);

        string getNome();
        int getMatricula();
        vector<int> getNotas();

        void addNota(int nota);

        double calcMedia();
        int maxNota();
        int minNota();
};
#endif
