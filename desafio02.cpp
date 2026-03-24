#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> minhaLista;

    // Preencha a lista com números inteiros
    minhaLista.push_back(10);
    minhaLista.push_back(20);
    minhaLista.push_back(30);

    // Calcule a soma dos elementos
    int soma = 0;
    int mult = 1;
    for (auto elemento : minhaLista) {
        soma += elemento;
        mult *= elemento;
    }

    cout << "A soma dos elementos da lista é: " << soma << endl;
    cout << "A multiplicação dos elementos da lista é: " << mult << endl;

    return 0;
}
