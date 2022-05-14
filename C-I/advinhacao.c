#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Imprime cabecalho  do nosso jogo.
    printf("*********************************** \n");
    printf("* Bem vindo ao jogo da ADVINHAÇÃO * \n");
    printf("*********************************** \n");
    
    int numeroSecreto = 42;
    int chute; 

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
   
    printf("\nSeu chute foi %d \n", chute);




    return 0;
}
