/// DATA: 06/03/2024
/// *** ALGORITMO DE ORDENACAO ***
///     *** INSERTION SORT ***

#include<iostream>

using namespace std;

int main(void){

    int vetor[]{3,7,5,2,9,6,8,1,4};

    cout << "VETOR INICIAL: ";

    for(auto x : vetor){
        cout << "[" << x << "] ";
    }

    cout << endl;

    for(int i = 1; i < size(vetor); i++){
        int j = i;
        while(j > 0){
            if(vetor[j-1] > vetor[j]){
                int aux = vetor[j-1];
                vetor[j-1] = vetor[j];
                vetor[j] = aux;
            }
            j--;
        }
    }

    cout << "\nVETOR ORDENADO: ";
    for(auto x : vetor){
        cout << "[" << x << "] ";
    }
    cout << endl;

    return 0;
}
