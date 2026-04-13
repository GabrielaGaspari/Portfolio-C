#include <stdio.h> // Biblioteca padrão para entrada e saída (printf, scanf)
#include <stdlib.h> // Biblioteca para funções do sistema (system)

// Definição do comando de limpar tela baseado no SO
#ifdef _WIN32
    #define CLEAR "cls"
#else
    #define CLEAR "clear"
#endif

// Declaração de variáveis
int main(){
    float a, b, resultado;
    char operacao;
    char continuar;    

    // Estrutura de repetição utilizando o Do While com o Switch
    do{
        system(CLEAR);
        
        printf("---CALCULADORA EM C---\n");
        printf("Escolha o sinal da operacao [ + | - | * | / ]: ");
        scanf(" %c", &operacao);

        printf("Digite o primeiro numero: ");
        scanf("%f", &a);
        printf("Digite o segundo numero: ");
        scanf("%f", &b);

        // Estrutura de decisão para escolher a operação matemática e realizar o calculo
        switch(operacao){
            case '+':
                resultado = a + b;
                printf("O resultado da soma deu: %.2f + %.2f = %.2f\n", a,  b, resultado);
                break;
            case '-':
                resultado = a - b;
                printf("O resultado da subtracao deu: %.2f - %.2f = %.2f\n", a, b, resultado);
                break;
            case '*':
                resultado = a * b;
                printf("O resultado da multiplicacao deu: %.2f * %.2f = %.2f\n", a, b, resultado);
                break;
            case '/':
                if(b != 0){
                    resultado = a / b;
                    printf("O resultado da divisao deu: %.2f / %.2f = %.2f\n", a, b, resultado);
                }else{
                    printf("Erro! Nao existe divisao por 0!\n");
                }
                break;
            default:
                printf("Digita uma opcao valida!\n");
        }
        printf("Deseja usar novamente? (s/n): ");
        scanf(" %c", &continuar);
    
    }while(continuar == 's' || continuar == 'S');
    
    printf("Obrigada por usar a Calculadora! \n");
    printf("Pressione Enter para sair...");
    
    getchar(); getchar(); // O primeiro getchar() captura o Enter da pergunta anterior, o segundo espera o usuário apertar Enter
    
    return 0; // Indica que o programa finalizou com sucesso
}