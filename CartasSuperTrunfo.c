#include <stdio.h>
 int main(){
  
   //Inserindo as váriaveis.
   char estado1, estado2, codigo1[50], codigo2[50], cidade1[50], cidade2[50]; 
   unsigned long int populacao1, populacao2;
   int pontosT1, pontosT2, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
   float area1, area2, PIB1, PIB2, densidade1, densidade2, percapita1, percapita2, super1, super2;



   printf("\n====== *Bem Vindo ao Super Trunfo!* =======\n");
   printf("\nNesse jogo iremos criar duas cartas, por favor responda o questionario para gerar as suas cartas.\n");

   //Solicitando ao usuarios dados para criação da carta1.
   printf("\nEscolha uma letra de 'A' a 'H' para representar o estado da sua carta: ");
   scanf(" %c", &estado1);
   printf("Escolha um número de '01' a '07' para criar o codigo de sua carta: ");
   scanf("%s", codigo1);
   printf("Escolha uma cidade: ");
   scanf("%s", cidade1);
   printf("Qual seria a população da cidade? ");
   scanf("%lu", &populacao1);
   printf("Qual seria o tamanho da cidade? ");
   scanf("%f", &area1);
   printf("Qual seria o PIB da cidade? ");
   scanf("%f", &PIB1);
   printf("Qual seria quantidade de pontos turisticos para a cidade? ");
   scanf("%d", &pontosT1);

   //calculo para densidade PIB per capita e Super Poder carta 1
   densidade1 = (float) populacao1 / area1;
   percapita1 = (float) (PIB1 / populacao1);
   super1 = (float) populacao1 + area1 + PIB1 + pontosT1 + percapita1 + (1/densidade1);


   printf("\n====== Agora vamos criar a segunda carta  ======\n");

   //Solicitando usuario dados para criação da carta 2.
   printf("\nEscolha uma letra de 'A' a 'H' que seja diferente da seleção anterior: ");
   scanf(" %c", &estado2);
   printf("Escolha um número de '01' a '07' diferente do selecionado anteriormente: ");
   scanf("%s", codigo2);
   printf("Escolha uma cidade diferente da selecionada anteriormente: ");
   scanf("%s", cidade2);
   printf("Qual seria a população da cidade escolhida? ");
   scanf("%lu", &populacao2);
   printf("Qual seria o PIB da cidade escolhida? ");
   scanf("%f", &PIB2);
   printf("Qual seria o tamanho dessa cidade? ");
   scanf("%f", &area2);
   printf("Qual seria a quantidade de pontos turisticos para essa cidade? ");
   scanf("%d", &pontosT2);

   //calculo para densidade, PIB per capita e Super Poder carta 2
   densidade2 = (float) populacao2 / area2;
   percapita2 = (float) (PIB2 / populacao2);
   super2 = (float) populacao2 + area2 + PIB2 + pontosT2 + percapita2 + (1/densidade2);

   printf("\n========= Cartas criadas!==========\n");

   //Iprimindo carta 1
   printf("\nCarta: %s\n", codigo1);
   printf("Estado: %c\n", estado1);
   printf("Codigo: %c%s\n", estado1, codigo1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("População: %u Habitantes\n", populacao1);
   printf("PIB: R$%.2f Milhões de reais\n", PIB1);
   printf("Area: %.2f km²\n", area1);
   printf("Quantidade de pontos turisticos: %d\n", pontosT1);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
   printf("PIB per Capita: %.2f Mil reias\n", percapita1);
   printf("Super Poder: %.2f\n", super1);

   //Imprimindo carta 2
   printf("\nCarta: %s\n", codigo2);
   printf("Estado: %c\n", estado2);
   printf("Codigo: %c%s\n", estado2, codigo2);
   printf("Nome da cidade: %s\n",cidade2);
   printf("População: %u\n", populacao2);
   printf("PIB: R$%.2f Milhões de reais\n", PIB2);
   printf("Area: %.2f km²\n",area2);
   printf("Quantidade de pontos turísticos: %d\n", pontosT2);
   printf("Densidade Populacional: %.2f Hab/km²\n", densidade2);
   printf("PIB per Capita: %.2f Mil reias\n", percapita2);
   printf("Super Poder: %.2f\n", super2);

   //comparação de cartas.
   resultado1 = populacao1 > populacao2;
   resultado2 = PIB1 > PIB2;
   resultado3 = area1 > area2;
   resultado4 = pontosT1 > pontosT2;
   resultado5 = densidade1 < densidade2;
   resultado6 = percapita1 > percapita2;
   resultado7 = super1 > super2;
   
   //imprimento resultado da comparação onde 1 e verdadeiro e 0 falso.
   printf("\n========= Comparado as cartas =========\n");
   printf(" 1=verdade e 0=falso\n");
   printf("\nPopulação: carta 1 (%lu) é maior que a carta 2 (%lu)? %d\n",populacao1, populacao2, (resultado1));
   printf("PIB: carta 1 (%.2f) é maior que a carta 2 (%.2f)? %d\n",PIB1, PIB2, (resultado2));
   printf("Area: carta 1 (%.2f) é maior que a carta 2 (%.2f)? %d\n",area1, area2, (resultado3));
   printf("Pontos Turisticos: carta 1 (%d) é maior que a carta 2 (%d)? %d\n",pontosT1, pontosT2, (resultado4));
   printf("Densidade Populacional: carta 1 (%.2f) é menor que a carta 2 (%.2f)? %d\n",densidade1, densidade2, (resultado5));
   printf("PIB per capita: carta 1 (%.2f) é maior que a carta 2 (%.2f)? %d\n",percapita1, percapita2, (resultado6));
   printf("Super Poder: carta 1 (%.2f) é maior que a carta 2 (%.2f)? %d\n",super1, super2, (resultado7));
  
 return 0;
}
