#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "aluno.hpp"

#define SUCESSO 0
#define FIM_NOTAS -1

using namespace std;

int main(int argc, char ** argv){

    vector<Aluno> alunos;
    string entrada;
    cin >> entrada;

    //pega os nomes dos alunos até o fim
    while(entrada != "END"){
        int matricula, nota;
        cin >> matricula >> nota;

        //cria o aluno com nome e matricula
        Aluno a(entrada, matricula);
        //enquanto a nota não for -1, adiciona no vector
        while(nota != -1){
            a.addNota(nota);
            cin >> nota;
        }
        alunos.push_back(a);

        cin >> entrada;
    }

    //algoritmo para ordenar os alunos pelo nome
    sort(alunos.begin(), alunos.end(), [](Aluno& a, Aluno& b){
        return a.getNome() < b.getNome(); 
    });

    for(Aluno al : alunos){
        cout << al.getMatricula() << " ";
        cout << al.getNome();
        for(int nota : al.getNotas()) cout << " " << nota;
        cout << endl << fixed << setprecision(2) << al.calcMedia() << " ";
        cout << al.maxNota() << " ";
        cout << al.minNota() << endl;
    }

    return SUCESSO;
}