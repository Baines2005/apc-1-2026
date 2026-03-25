#include <stdio.h> 

int main() {
    /* entrada de dados */

     char tecla_pressionada;
    
    printf("Pressione uma tecla: ");
    scanf("%c", &tecla_pressionada);

    printf("Voce pressionou a tecla %c\n", tecla_pressionada);

    int idade; 

    printf("informe a sua idade: ");
    scanf("%i", &idade);
     while(getchar() != '\n'); // limpa o buffer

     printf("Voce tem %i anos\n", idade);
    

    float preco;
    printf("Informe o preco da passagem: ");
    scanf("%f", &preco);
    while(getchar() != '\n'); // limpa o buffer

    printf("O preco da passagem eh %2.f\n", preco);

    return 0;
}