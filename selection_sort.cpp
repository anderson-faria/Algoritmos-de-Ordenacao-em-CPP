/// DATA: 06/03/2024
/// *** ALGORITMO DE ORDENACAO ***
///     *** SELECTION SORT ***

#include <iostream>

using namespace std;

int main (void){

    int vetor[]{3,8,2,5,7,9,4,1,6};

    cout << "VETOR INICIAL: ";

    for(auto x : vetor){
        cout << "[" << x << "] ";
    }

    cout << endl;

    for(int indiceAtual = 0; indiceAtual < size(vetor); indiceAtual++){
        int indiceMenor = indiceAtual;

        for(int indiceSeguinte = indiceAtual+1; indiceSeguinte < size(vetor); indiceSeguinte++){

            if(vetor[indiceSeguinte] < vetor[indiceMenor]){
                indiceMenor = indiceSeguinte;
            }
        }
        int troca = vetor[indiceAtual];
        vetor[indiceAtual] = vetor[indiceMenor];
        vetor[indiceMenor] = troca;
    }

    cout << "\nVETOR ORDENADO: ";
    for(auto x : vetor){
        cout << "[" << x << "] ";
    }
    cout << endl;

    return 0;
}
