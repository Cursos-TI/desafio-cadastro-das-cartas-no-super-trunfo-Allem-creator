#include <stdio.h>
#include<string.h>

char estado1, estado2, codigo1[50], codigo2[50], cidade1[50], cidade2[50]; 
unsigned long int populacao1, populacao2;
int pontosT1, pontosT2, opcao1, opcao2, resultado1, resultado2;
float area1, area2, PIB1, PIB2, densidade1, densidade2, percapita1, percapita2, super1, super2, soma1, soma2;
float atributoA1, atributoA2, atributoB1, atributoB2;
int pontoscarta1 = 0, pontoscarta2 = 0;

int criacao(){

   printf("\n====== *Bem Vindo ao Super Trunfo!* =======\n");
   printf("\nNesse jogo iremos criar duas cartas, por favor responda o questionario para gerar as suas cartas.\n");

   //Solicitando ao usuarios dados para criação da carta1.
   printf("\nEscolha uma letra de 'A' a 'H' para representar o estado da sua carta: ");
   scanf(" %c", &estado1);
   printf("Escolha um número de '01' a '07' para criar o codigo de sua carta: ");
   scanf("%s", codigo1);
   getchar();

   printf("Escolha uma cidade: ");
   fgets(cidade1, 50, stdin);
   cidade1[strcspn(cidade1, "\n")] = 0;

   printf("Qual seria a população da cidade? ");
   scanf("%u", &populacao1);
   printf("Qual seria o tamanho da cidade? ");
   scanf("%f", &area1);
   printf("Qual seria o PIB da cidade? ");
   scanf("%f", &PIB1);
   printf("Qual seria quantidade de pontos turisticos para a cidade? ");
   scanf("%d", &pontosT1);

   //calculo para densidade PIB per capita e Super Poder carta 1
   densidade1 = (float) populacao1 / area1;
   percapita1 = (float) (PIB1 / populacao1) * 10000;
   super1 = (float) populacao1 + area1 + PIB1 + pontosT1 + percapita1 + (1/densidade1);


   printf("\n====== Agora vamos criar a segunda carta  ======\n");

   //Solicitando usuario dados para criação da carta 2.
   printf("\nEscolha uma letra de 'A' a 'H' que seja diferente da seleção anterior: ");
   scanf(" %c", &estado2);
   printf("Escolha um número de '01' a '07' diferente do selecionado anteriormente: ");
   scanf("%s", codigo2);
   getchar();
   
   printf("Escolha uma cidade diferente da selecionada anteriormente: ");
   fgets(cidade2, 50, stdin);
   cidade2[strcspn(cidade2, "\n")] = 0;

   printf("Qual seria a população da cidade escolhida? ");
   scanf("%u", &populacao2);
   printf("Qual seria o PIB da cidade escolhida? ");
   scanf("%f", &PIB2);
   printf("Qual seria o tamanho dessa cidade? ");
   scanf("%f", &area2);
   printf("Qual seria a quantidade de pontos turisticos para essa cidade? ");
   scanf("%d", &pontosT2);

   //calculo para densidade PIB per capita e Super Poder carta 2
   densidade2 = (float) populacao2 / area2;
   percapita2 = (float) (PIB2 / populacao2) * 10000;
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
}
int comparacao()
{

   //Comparando Atributos.
   printf("\n========= Comparando Atributos =========\n");
   printf("\n1. População.\n");
   printf("2. Área.\n");
   printf("3. PIB.\n");
   printf("4. Número de Pontos Turísticos.\n");
   printf("5. Densidade Demográfica.\n");
   printf("\nEscolha o primeiro atributo: ");
   scanf("%d", &opcao1);
  
   switch (opcao1)
   {
   case 1:
      atributoA1 = populacao1;
      atributoA2 = populacao2;
      printf("\nPopulação.\n");

      resultado1 = atributoA1 > atributoA2? 1 : 0;
      break;
   case 2:
      atributoA1 = area1;
      atributoA2 = area2;
      printf("Área.\n");

      resultado1 = atributoA1 > atributoA2? 1 : 0;
      break;
   case 3:
      atributoA1 = PIB1;
      atributoA2 = PIB2;
      printf("PIB.\n");

      resultado1 = atributoA1 > atributoA2? 1 : 0;
      break;
   case 4:
      atributoA1 = pontosT1;
      atributoA2 = pontosT2;
      printf("Número de Pontos turisricos.\n");

      resultado1 = atributoA1 > atributoA2? 1 : 0;
      break;
   case 5:
      atributoA1 = densidade1;
      atributoA2 = densidade2;
      printf("Densidade demografica.\n");

      resultado1 = atributoA1 < atributoA2? 1 : 0;
      break;
   default:
      printf("\nOpção Invalida\n");
      break;

   }
   printf("\nSegundo Atributo");
   printf("\n1. População.\n");
   printf("2. Área.\n");
   printf("3. PIB.\n");
   printf("4. Número de Pontos Turísticos.\n");
   printf("5. Densidade Demográfica.\n");
   printf("\nEscolha o segundo atributo: ");   
   scanf("%d", &opcao2);

   if(opcao1 == opcao2)
   {
      printf("Os atribuitos escolhidos foram iguais.\n");
   }
   else
   {
      switch (opcao2)
      {
      case 1:
         atributoB1 = populacao1;
         atributoB2 = populacao2;
         printf("\nPopulação.\n");

         resultado2 = atributoB1 > atributoB2? 1 : 0;
         break;
      case 2:
         atributoB1 = area1;
         atributoB2 = area2;
         printf("\nÁrea.\n");

         resultado2 = atributoB1 > atributoB2? 1 : 0;
         break;
      case 3:
         atributoB1 = PIB1;
         atributoB2 = PIB2;
         printf("PIB\n.");

         resultado2 = atributoB1 > atributoB2? 1 : 0;
         break;
      case 4:
         atributoB1 = pontosT1;
         atributoB2 = pontosT2;
         printf("Pontos Turisticos.\n");

         resultado2 = atributoB1 > atributoB2? 1 : 0;
         break;
      case 5:
         atributoB1 = densidade1;
         atributoB2 = densidade2;
         printf("Densidade Demografica.\n");

         resultado2 = atributoB1 < atributoB2? 1 : 0;
         break;
      default:
         printf("\nOpção Invalida\n");
         break;
      }
   }
}
int soma()
{
   soma1 = atributoA1 + atributoB1;
   soma2 = atributoA2 + atributoB2;
}
int main()
{

   criacao();
   comparacao();
   soma();

   printf("\n=== Resultado ===\n");

   printf("\nCarta %s\n", codigo1);
   printf("Atributo 1: %.2f\n", atributoA1);
   printf("Atributo 2: %.2f\n", atributoB1);
   printf("Soma 1: %.2f\n", soma1);
   printf("\nCarta %s\n", codigo2);
   printf("Atributo 1: %.2f\n", atributoA2);
   printf("Atributo 2: %.2f\n", atributoB2);
   printf("Soma 2: %.2f\n", soma2);


   if (soma1 > soma2)
   {
      printf("\nCarta: %s venceu Carta: %s\n", codigo1, codigo2);
   }
   else if (soma1 < soma2)
   {
      printf("\nCarta: %s venceu Carta: %s\n", codigo2, codigo1);
   }
   else
   {
      printf("\nEmpate\n");
   }

   if (resultado1 == 1)
   {
      printf("Carta: %s venceu no primeiro atributo.\n", codigo1);
   }
   else if (resultado1 == 0)
   {
      printf("Carta: %s venceu no primeiro atributo.\n", codigo2);
   }
   else
   {
      printf("\nEmpate.\n");
   }
   if (resultado2 == 1)
   {
      printf("\nCarta: %s venceu no segundo atributo.\n", codigo1);
   }
   else if (resultado2 == 0)
   {
      printf("\nCarta: %s venceu no segundo atributo.\n", codigo2);
   }
   else
   {
      printf("\nEmpate.\n");
   }
   
}  

