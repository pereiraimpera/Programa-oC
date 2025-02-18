#include <stdio.h>

int main(){
    int idade = 26;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 63.3;
    char opcao ='E';
    char nome[20] = "Eron";

    printf("O nome é: %s\n", nome);
    printf("A idade é: %d\n",idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opcao é: %c\n", opcao);

    /*
    printf(“%formato1 %formato2”, variável1, variável2);

    %d: Imprime um inteiro no formato decimal
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão
    %e: Imprime um número de ponto flutuante na notação científica
    %c: Imprime um único caractere
    %s: Imprime uma cadeia (string) de caracteres
   
    */
}