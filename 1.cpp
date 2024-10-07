#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#define SUCESSO 0
#define WORD_SIZE 5

using namespace std;

string getWord(string fileName){
    ifstream in(fileName, fstream::in);
    if (!in.is_open()) return "ERRO";

    int numWords;
    in >> numWords;

    int key;
    cin >> key;
    if(key > numWords || key < 1) return "ERRO";

    string word;
    for(int i = 0; i < key; i++){
        in >> word;
    }
    in.close();

    return word;
}

char hasLetter(string word, char letter, int pos){
    for(int i = 0; i < WORD_SIZE; i++){
        if(letter == word[i] && i == pos){
            return letter;
        }
        if(letter == word[i]) return tolower(letter);
    }
    return '*';
}

string addLetter(string str, char c){
    for(int i = 0; i < str.length(); i++) if(str[i] == c) return str;
    str.push_back(c);
    return str;
}

void playGame(string word){

    string trie, usedLetter = "(";
    char outWord[WORD_SIZE + 1];

    for(int j = 0; j < 5; j++){

        cin >> trie;

        for(int i = 0; i < WORD_SIZE; i++){
            outWord[i] = hasLetter(word, trie[i], i);
            if(outWord[i] == '*') usedLetter = addLetter(usedLetter, trie[i]);
        }

        outWord[WORD_SIZE] = '\0';
        
        cout << outWord << " " + usedLetter + ")" << endl;

        if(outWord == word){
            cout << "GANHOU!";
            return;
        }
    }

    cout << "PERDEU! " << word;
    return;
}

int main(int argc, char ** argv){

    string word = getWord("palavras.txt");
    if(word == "ERRO") return 1;

    playGame(word);

    return SUCESSO;
}