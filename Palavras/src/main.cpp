#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#define SUCESSO 0

using namespace std;

int main(int argc, char ** argv){
    map<string , int> count;
    
    string fileName;
    cin >> fileName;

    ifstream in(fileName, fstream::in);
    if (!in.is_open()) return 1;

    string word;

    while(in >> word){ //pega uma palavra do arquivo de entrada
        for(unsigned int i = 0; i < word.length(); i++){
            if(!isalnum(word[i])) word[i] = ' ';//limpa a palavra
            else word[i] = tolower(word[i]);//transforma em minusculo
        }

        string cleanWord;
        istringstream stream(word);//transforma a palavra agora limpa (só alfanum e minuscula) e transforma em entrada 

        while(stream >> cleanWord){//pega cada palavra (separado por espaço)
            count[cleanWord]++; //incrementa a contagem da palavra
        }
    }

    in.close();

    for (auto pair : count) {
        cout << pair.first << " " << pair.second << endl;
    }

    return SUCESSO;
}