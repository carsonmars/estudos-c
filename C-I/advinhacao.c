#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TENTATIVAS 5

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt-br");

    // Imprime cabecalho  do nosso jogo.
    printf("*********************************** \n");
    printf("* Bem-vindo ao jogo da ADVINHACAO * \n");
    printf("*********************************** \n");

    int numeroSecreto = 42;
    int chute;

    for (int i = 1; i <= TENTATIVAS; i++)
    {
        printf("Tentativa %d de %d.\n", i, TENTATIVAS);
        printf("Qual e o seu chute? ");
        scanf("%d", &chute);
        printf("\nSeu chute foi %d \n", chute);
        if (chute < 0)
        {
            printf("Voce não pode chutar numeros negativos!\n");
            i--;
            // Faz o código ir direto para a próxima interação;
            continue;
        }

        int acertou = chute == numeroSecreto;
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;

        if (acertou)
        {
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo, voce e um bom jogador.\n");
            // Faz o código parar aqui;
            break;
        }
        else if (maior)
        {
            printf("Seu chute foi maior que o numero secreto.\n");
        }
        else
        {
            printf("Seu chute foi menor que o numero secreto.\n");
        }
    }

    printf("\n");
    printf("Fim de jogo!\n");

    return 0;
}
