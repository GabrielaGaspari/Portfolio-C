#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Leitura da Matriz M
    int M[50][50];
    int L;
    int C;
    long SOM = 0;

    printf("Insira os numeros da matriz (50x50): \n");
    for (L = 0; L < 50; L++){

        //Acesso ou entrada dos 10 elementos da linha L
        for (C = 0; C < 50; C++)
            scanf("%d", &M[L][C]);

            //retorna linha
            printf("\n");
    }

   
    //Agora o print da matriz
    printf("A matriz de entrada: \n");
    for (L = 0; L < 50; L++){
        for (C = 0; C < 50; C++)
        printf("%d", M[L][C]);

        printf("\n");
    }


    //soma da linha
    for (SOM = 0, L = 0; L < 50; L++){
        SOM = 0;
        for (SOM = 0, C = 0; C < 50; C++){
            SOM += M[L][C];
        }   
    printf("Soma da Linha %d: %ld\n", L, SOM); 
    }

    //soma da coluna
    for (SOM = 0, C = 0; C < 50; C++){
        SOM = 0;
        for (SOM = 0, L = 0; L < 50; L++){
            SOM += M[L][C];
        }   
    printf("Soma da Coluna %d: %ld\n", C, SOM); 
    }

    system("pause");
    return 0;
}