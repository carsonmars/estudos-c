#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt-br");

    // Imprime cabecalho  do nosso jogo.
    printf("*********************************** \n");
    printf("* Bem-vindo ao jogo da ADVINHACAO * \n");
    printf("*********************************** \n");

    int numeroSecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    while(ganhou == 0)
    {
        printf("Tentativa %d de %d.\n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d \n", chute);
        
        // Evitar chute de números negativos
        if (chute < 0)
        {
            printf("Voce não pode chutar numeros negativos!\n");
            // Faz o código ir direto para a próxima interação;
            //Parecido com o Break;
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if (acertou)
        {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador.\n");
            // Faz o código parar aqui;
            ganhou = 1;
        }
        else if (maior)
        {
            printf("Seu chute foi maior que o numero secreto.\n");
        }
        else
        {
            printf("Seu chute foi menor que o numero secreto.\n");
        }
        tentativas++;
    }

    printf("\n");
    printf("Fim de jogo!\n");
    printf("Voce acertou em %d", tentativas-1);

    return 0;
}
// Projeto Finalizado.