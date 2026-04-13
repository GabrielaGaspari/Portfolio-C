#include <stdio.h> 
#include <stdlib.h>

int main() { 
 /* Declarações */ 
 int T[50]; /* Vetor de entrada  */ 
 int N;     /* dimensão */ 
 int I;     /* índice atual */ 
 long SOM;  /* soma de elementos - tipo long devido ao */ 
            /* tamanho previsível do resultado. */ 
 
 /* Entrada dos dados */ 
 printf("Dimensao do vetor (max.50) : "); 
 scanf("%d", &N ); 
 for (I=0; I<N; I++) 
    { 
     printf("Elemento %d : ", I + 1); 
     scanf("%d", &T[I]); 
    } 
  /* Impressão do Vetor */ 
 printf("Vetor de entrada :\n"); 
 for (I=0; I<N; I++) 
     printf("%d ", T[I]); 
 printf("\n"); 
  /* Cálculo da soma */ 
 for (SOM=0, I=0; I<N; I++) 
     SOM += T[I]; 
  /* Impressão de resultado */ 
 printf("Soma de elementos : %ld\n", SOM); 

 system("pause");
    return 0;
}