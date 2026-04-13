#include <stdio.h>
#include <stdlib.h>

int main(){

//declaração de variaveis
    int T[50];
    int I;
    int N;

//entrada do tamanho de dados do vetor
    printf("Escreva o tamanho do vetor (max:50): ");
    scanf("%d", &N);
    for(I = 0; I<N; I++){
        printf("Elemento %d: ", I + 1);
        scanf("%d", &T[I]);
    }

//Impressão do vetor
    printf("vetor de entrada: \n");
    for(I = 0; I<N; I++)
        printf("%d ", T[I]);
    printf("\n");


//Reogarnização em ordem inversa
    int inicio = 0;
    int fim = N - 1;
    int temp;

    while (inicio < fim){
        temp = T[inicio];
        T[inicio] = T[fim];
        T[fim] = temp;
        inicio++;
        fim--;
    }

    printf("Vetor resultante (invertido): \n");
    for(I = 0; I<N; I++)
        printf("%d ", T[I]);
    printf("\n");
    

    system("pause");
    return 0;
}

