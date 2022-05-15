#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    //Imprime cabecalho  do nosso jogo.
    printf("*********************************** \n");
    printf("* Bem vindo ao jogo da ADVINHAÇÃO * \n");
    printf("*********************************** \n");
    
    int numeroSecreto = 42;
    int chute; 

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
   
    printf("\nSeu chute foi %d \n", chute);

    int acertou = chute == numeroSecreto;
    printf("Acertou: %d\n", acertou);

    if (acertou)
    {
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador");
    } else {
        int maior = chute > numeroSecreto;
        if (maior)
        {
            printf("Seu chute foi maior que o número secreto.\n");
        }
        int menor = chute < numeroSecreto;
        if (menor)
        {
            printf("Seu chute foi menor que o número secreto.\n");
        }
        
    }
     

    return 0;
}
