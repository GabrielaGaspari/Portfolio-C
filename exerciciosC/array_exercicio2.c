#include <stdio.h>
#include <stdlib.h>

int main(){

//declaração de variaveis
    int T[50];
    int N;
    int I;

    printf("Insira o tamanho do vetor (max: 50): ");
    scanf("%d", &N);
    for(I = 0; I<N; I++){
        printf("Elemento %d: ", I + 1);
        scanf("%d", &T[I]);
    }

//Impressão do vetor
    printf("Vetor de entrada: \n");
    for(I=0; I<N; I++)
        printf("%d ", T[I]); 
    printf("\n");

//remoção do valor 0 e compactação
    int J = 0;
    for(I=0; I<N; I++){
        if (T[I] != 0){
        T[J] = T[I];
        J++;
        }
    }
   
    N = J;
    printf("Vetor compactado e sem 0: ");
    for(I=0; I<N; I++)
        printf("%d ", T[I]);
    printf("\n");



    system("pause");
    return 0;
}