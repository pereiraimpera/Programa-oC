#include <stdio.h>

int main(){
    int idade = 26;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 63.3;
    char opcao ='E';
    char nome[20] = "Eron";

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s", nome);

    /*
    printf(“%formato1 %formato2”, variável1, variável2);
    scanf(''formato'', &variavel);

    %d: Imprime um inteiro no formato decimal
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão
    %e: Imprime um número de ponto flutuante na notação científica
    %c: Imprime um único caractere
    %s: Imprime uma cadeia (string) de caracteres
   
    */
}