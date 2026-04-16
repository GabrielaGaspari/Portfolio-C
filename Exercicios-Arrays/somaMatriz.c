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


    //soma da matriz
    for (SOM = 0, L = 0; L < 50; L++){
        for (SOM = 0, C = 0; C < 50; C++){
            SOM += M[L][C];
    }}
        
    printf("Soma de elementos : %ld\n", SOM); 


    system("pause");
    return 0;
}