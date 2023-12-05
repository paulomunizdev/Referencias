#include <iostream>

// Função que modifica o valor de uma variável usando referência
void modificarPorReferencia(int &x) {
    x = 20;
}

int main() {
    // Exemplo 1: Referência Simples
    int numero = 10;
    int &referenciaNumero = numero;

    std::cout << "Exemplo 1: Referência Simples" << std::endl;
    std::cout << "Numero: " << numero << std::endl;
    std::cout << "Referência: " << referenciaNumero << std::endl;

    // Exemplo 2: Modificando Valor por Referência
    std::cout << "\nExemplo 2: Modificando Valor por Referência" << std::endl;
    std::cout << "Antes da modificação: " << numero << std::endl;
    modificarPorReferencia(numero);
    std::cout << "Depois da modificação: " << numero << std::endl;

    // Exemplo 3: Referência Constante
    const double pi = 3.14;
    const double &refPi = pi;

    std::cout << "\nExemplo 3: Referência Constante" << std::endl;
    std::cout << "Valor de Pi: " << pi << std::endl;
    std::cout << "Referência para Pi: " << refPi << std::endl;

    return 0;
}
