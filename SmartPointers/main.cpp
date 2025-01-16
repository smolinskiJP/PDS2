#include <iostream>
#include <memory>
#define SUCESSO 0

using namespace std;

class Teste{
    private:
        int _valor;
    public:
        Teste() : _valor(0) {
            cout << "Construtor " << this->_valor << endl;
        };
        Teste(int valor) : _valor(valor) {
            cout << "Construtor " << this->_valor << endl;
        };
        ~Teste() {
            cout << "Destrutor " << this->_valor << endl;
        };

        int getValor() { return this->_valor; }
        void setValor(int valor) { this->_valor = valor; }
};


int main(int argc, char ** argv){

    int n;
    cin >> n;

    if(n % 2 == 0){
        for(int c = 1; c <= n; c++){
            Teste* teste1 = new Teste(c);
            unique_ptr<Teste> teste2 = unique_ptr<Teste>(new Teste(c));
            delete teste1; //essa linha está aqui para evitar memLeak no pc, a atividade pede para retirá-la
        }
    }
    else {
        shared_ptr<Teste> teste3 = shared_ptr<Teste>(new Teste());
        for(int c = 1; c <= n; c++){
            shared_ptr<Teste> teste4 = teste3;
            teste4->setValor(c);
        }
        cout << teste3.use_count() << endl;
    }

    return SUCESSO;
}