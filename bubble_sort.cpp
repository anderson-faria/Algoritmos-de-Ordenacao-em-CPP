/// DATA: 06/03/2024
/// *** ALGORITMO DE ORDENACAO ***
///       *** BUBBLE SORT ***

#include<iostream>

using namespace std;

int main(void){

    int vetor[]{3,7,5,2,9,6,8,1,4};

    cout << "VETOR INICIAL: ";

    for(auto x : vetor){
        cout << "[" << x << "] ";
    }

    cout << endl;

    for(int i = 0; i < size(vetor) - 1; i++){
        for(int j = 0; j < size(vetor) - i - 1; j++){
            if(vetor[j] > vetor[j+1]){
                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    cout << "\nVETOR ORDENADO: ";
    for(auto x : vetor){
        cout << "[" << x << "] ";
    }
    cout << endl;

    return 0;
}
