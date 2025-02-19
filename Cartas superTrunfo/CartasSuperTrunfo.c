# include <stdio.h>

int main(){

    //Variáveis Carta 1
     int populacao, turisticos;
     float area, pib;
     char est;
     char codcarta[20];
     char cidade[50];

     //cadastrando Carta 1
     printf("Carta SuperTrunfo\n");
     printf("Digite a letra do Estado: ");
     scanf("%s", &est); //inserindo letra do estado
     printf("Digite o Código da Carta: ");
     scanf("%s", &codcarta); //código da carta
     printf("Digite o Nome da Cidade: ");
     scanf("%s", &cidade); //Nome da Cidade
     printf("Digite a População da Cidade: ");
     scanf("%d", &populacao); // População
     printf("Digite a Área (em Km²): ");
     scanf("%f", &area);
     printf("Digite o PIB: ");
     scanf("%f", &pib); // Inserindo PIB
     printf("Número de Pontos Turísticos: ");
     scanf("%d", &turisticos); // Pontos Turísticos




}