#include <iostream>
#include <vector>
#include <iomanip>
#include <Retangulo.hpp>
#include <Triangulo.hpp>
#include <Circulo.hpp>

#define SUCESSO 0

using namespace std;

int main(int argc, char ** argv){

    vector<FiguraGeometrica*> figuras;
    char command;

    cin >> command;

    while(command != 'E'){
        if(command == 'R'){

            float x, y, base, altura;
            cin >> x >> y >> base >> altura;
            figuras.push_back(new Retangulo(x, y, base, altura));

        } else if(command == 'C'){

            float x, y, raio;
            cin >> x >> y >> raio;
            figuras.push_back(new Circulo(x, y, raio));

        } else if(command == 'T') {

            float x, y, base, altura;
            cin >> x >> y >> base >> altura;
            figuras.push_back(new Triangulo(x, y, base, altura));

        } else if(command == 'D'){

            for(auto i : figuras) i->Desenha();

        } else if(command == 'A'){

            float total = 0;
            for(auto i : figuras) total += i->CalculaArea();
            cout << fixed << setprecision(2) << total << endl;

        }
        cout << fixed << setprecision(0);
        cin >> command;
    }

    for(auto i : figuras) delete i;


    return SUCESSO;
}