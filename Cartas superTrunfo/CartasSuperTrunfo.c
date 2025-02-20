# include <stdio.h>

int main(){

    //Variáveis Carta 1
     int populacao1, turisticos1;
     float area1, pib1;
     char est1[3];
     char codcarta1[20];
     char cidade1[50];

     //Variáveis Carta 2
     int populacao2, turisticos2;
     float area2, pib2;
     char est2[3];
     char codcarta2[20];
     char cidade2[50];

     // Apresentação do Inicial     
     printf("Bem Vindos ao Jogo Super-Trunfo\n");
     printf("-----------------------------\n");
     printf("-----------------------------\n"); 

     //cadastrando Carta 1
     printf("Carta SuperTrunfo\n");
     printf("Digite a letra do Estado: ");
     scanf("%s", &est1); //inserindo letra do estado
     printf("Digite o Código da Carta: ");
     scanf("%s", &codcarta1); //código da carta
     printf("Digite o Nome da Cidade: ");
     scanf("%s", &cidade1); //Nome da Cidade
     printf("Digite a População da Cidade: ");
     scanf("%d", &populacao1); // População
     printf("Digite a Área (em Km²): ");
     scanf("%f", &area1); //Áreal em km²
     printf("Digite o PIB: ");
     scanf("%f", &pib1); // Inserindo PIB
     printf("Número de Pontos Turísticos: ");
     scanf("%d", &turisticos1); // Pontos Turísticos

     printf("-----------------------------\n"); //Espaçamento para impressão

     //Impriminto Dados da Primeira Carta
     printf("Estado: %s\n", &est1);
     printf("Código da Carta:  %s\n", &codcarta1);
     printf("Nome da Cidade:  %s\n", &cidade1);
     printf("População:  %d\n", &populacao1);
     printf("Área em km²:  %f\n", &area1);
     printf("PIB em R$:  %fR$\n", &pib1);
     printf("Pontos Turísticos:  %d\n", &turisticos1);


     printf("-----------------------------\n");//Espaçamento para impressão
     printf("-----------------------------\n"); //Espaçamento para impressão

     //cadastrando Carta 2
     printf("Carta SuperTrunfo\n");
     printf("Digite a letra do Estado: ");
     scanf("%s", &est2); //inserindo letra do estado
     printf("Digite o Código da Carta: ");
     scanf("%s", &codcarta2); //código da carta
     printf("Digite o Nome da Cidade: ");
     scanf("%s", &cidade2); //Nome da Cidade
     printf("Digite a População da Cidade: ");
     scanf("%d", &populacao2); // População
     printf("Digite a Área (em Km²): ");
     scanf("%f", &area2);
     printf("Digite o PIB: ");
     scanf("%f", &pib2); // Inserindo PIB
     printf("Número de Pontos Turísticos: ");
     scanf("%d", &turisticos2); // Pontos Turísticos

     //Impriminto Dados da Segunda Carta
     printf("Estado: %s\n", &est2);
     printf("Código da Carta:  %s\n", &codcarta2);
     printf("Nome da Cidade:  %s\n", &cidade2);
     printf("População:  %d\n", &populacao2);
     printf("Área em km²:  %f\n", &area2);
     printf("PIB em R$:  %fR$\n", &pib2);
     printf("Pontos Turísticos:  %d\n", &turisticos2);


}