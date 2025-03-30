#include <stdio.h>
 int main(){

   //Definições de váriaveis.

   char estado1, estado2, codigo1[50], codigo2[50], cidade1[50], cidade2[50]; 
   int populacao1, populacao2, pontosT1, pontosT2;
   float area1, area2, PIB1, PIB2;

   printf("\n====== *Bem Vindo ao Super Trunfo!* =======\n");
   printf("\nNesse jogo iremos criar duas cartas, por favor responda o questionario para gerar as suas cartas.\n");

   //Entrada de dados carta 1
   printf("\nEscolha uma letra de 'A' a 'H' para representar o estado da sua carta: ");
   scanf(" %c", &estado1);
   printf("Escolha um número de '01' a '07' para criar o codigo de sua carta: ");
   scanf("%s", codigo1);
   printf("Escolha uma cidade: ");
   scanf("%s", cidade1);
   printf("Qual seria a população da cidade? ");
   scanf("%d", &populacao1);
   printf("Qual seria o tamanho da cidade? ");
   scanf("%f", &area1);
   printf("Qual seria o PIB para a carta? ");
   scanf("%f", &PIB1);
   printf("Qual seria quantidade de pontos turisticos para a carta? ");
   scanf("%d", &pontosT1);


   printf("\n====== Agora vamos criar a segunda carta  ======\n");


   //Entrada de dados carta 2
   printf("\nEscolha uma letra de 'A' a 'H' que seja diferente da seleção anterior: ");
   scanf(" %c", &estado2);
   printf("Escolha um número de '01' a '07' diferente do selecionado anteriormente: ");
   scanf("%s", codigo2);
   printf("Escolha uma cidade diferente da selecionada anteriormente: ");
   scanf("%s", cidade2);
   printf("Qual seria a população da cidade escolhida? ");
   scanf("%d", &populacao2);
   printf("Qual seria o PIB da cidade escolhida? ");
   scanf("%f", &PIB2);
   printf("Qual seria o tamanho dessa cidade? ");
   scanf("%f", &area2);
   printf("Qual seria a quantidade de pontos turisticos para essa cidade? ");
   scanf("%d", &pontosT2);

   printf("\n========= Cartas criadas!==========\n");

   //Leitura da carta 1
   printf("\nCarta: %s\n", codigo1);
   printf("Estado: %c\n", estado1);
   printf("Codigo: %c%s\n", estado1, codigo1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("População: %d Habitantes\n", populacao1);
   printf("PIB: R$%.2f Mil\n", PIB1);
   printf("Area: %.2f km²\n", area1);
   printf("Quantidade de pontos turisticos: %d\n", pontosT1);

   //Leitura da carta 2
   printf("\nCarta: %s\n", codigo2);
   printf("Estado: %c\n", estado2);
   printf("Codigo: %c%s\n", estado2, codigo2);
   printf("Nome da cidade: %s\n",cidade2);
   printf("População: %d\n", populacao2);
   printf("PIB: R$%.2f Mil\n", PIB2);
   printf("Area: %.2f km²\n",area2);
   printf("Quantidade de pontos turísticos: %d\n", pontosT2); 

    return 0;
}
