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


//separação
    int TPOS[50], TNEG[50];
    int posCount = 0;
    int negCount = 0;

    for(I=0; I<N; I++){
        if(T[I] > 0){
            TPOS[posCount] = T[I];
            posCount++;
        }
        else if(T[I] < 0){
            TNEG[negCount] = T[I];
            negCount++;
        }
        
    }

//exibição dos valores organizados

    printf("Valores Positivos: ");
    for(I=0; I<posCount; I++)
        printf("%d ", TPOS[I]);
    printf("\n");

    printf("Valores Negativos: ");
    for(I=0; I<negCount; I++)
        printf("%d ", TNEG[I]);
    printf("\n");


    system("pause");
    return 0;
}

