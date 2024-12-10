#include <iostream>
#include <list>
#define SUCESSO 0

class Classe{
    private:
        static int contador;
        static int proximoId;
        int id;

    public:
        Classe(int id){
            if(id < 0) this->id = id;
            contador++;
        }

        Classe() : id(++proximoId) {contador++;}

        ~Classe(){
            contador--;
        }

        int getId(){ return this->id; }
        static int getContador(){ return contador; }
        
        Classe* getPointer() { return this; }
};

using namespace std;
int Classe::contador = 0;
int Classe::proximoId = 0;

int main(int argc, char ** argv){
    list<Classe*> apontadores;
    char command;

    cin >> command;
    while(command != 'E') {
        if(command == 'A'){
            Classe* objeto = new Classe();
            apontadores.push_back(objeto);
            cout << objeto->getId() << " " << objeto->getPointer() << endl;
        }
        else if (command == 'C'){
            int id;
            cin >> id;
            if(id >= 0) cout << "ERRO" << endl;
            else{
                Classe* objeto = new Classe(id);
                apontadores.push_front(objeto);
                cout << objeto->getId() << " " << objeto->getPointer() << endl;
            }
        }
        else if (command == 'R'){
            if(apontadores.empty()) cout << "ERRO" << endl;
            else{
                Classe* objeto = apontadores.front();
                apontadores.pop_front();
                cout << objeto->getId() << " " << objeto->getPointer() << endl;
                delete objeto;
            }
        }
        else if (command == 'N'){
            cout << Classe::getContador() << endl;
        }
        else if (command == 'P'){
            int i;
            cin >> i;
            if (i < 1 || i > Classe::getContador()) cout << "ERRO" << endl;
            else{
                auto iterador = apontadores.begin();
                advance(iterador, i - 1);
                Classe* objeto = *iterador;
                cout << objeto->getId() << " " << objeto->getPointer() << endl;
            }
        }
        else if (command == 'L'){
            for(auto objeto : apontadores){
                cout << objeto->getId() << " " << objeto->getPointer() << endl;
            }
        }
        cin >> command;
    }

    for(int i = 0; i < Classe::getContador(); i++){
        Classe* objeto = apontadores.front();
        apontadores.pop_front();
        delete objeto;
    }

    return SUCESSO;

}