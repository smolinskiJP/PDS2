#include <iostream>
#include <vector>
#include <stdexcept>

class NegativeResultException : std::exception {
    private:
        int _valor;
    public:
        NegativeResultException(int v) : _valor(v) {}

        virtual const char* what() const throw(){
            return "Erro: Resultado Negativo.";
        }

        int getValor() const {
            return this->_valor;
        }
};

int main() {
    std::vector<int> valores = {-20, -10, 0, 10, 20};

    try {
        int i;
        std::cin >> i;

        if(i >= valores.size() || i < 0) throw std::out_of_range("Erro: Parametro invalido");

        int resultado = valores.at(i);

        if (resultado < 0) throw NegativeResultException(resultado);
        if (resultado == 0) throw std::logic_error("Erro: O resultado nao deve ser zero.");

        std::cout << "Valor: " << resultado << std::endl;

    } catch (const NegativeResultException& e) {
        std::cout << e.what() << std::endl << e.getValor() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Erro: Parametro invalido" << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
