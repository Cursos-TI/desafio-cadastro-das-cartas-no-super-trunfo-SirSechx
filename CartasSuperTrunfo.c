#include <stdio.h>
int main(){
   
          printf("------Super Trunfo - Países------\n\n");

    //declaração de variaveis da primeira carta
    int populaçao1, turistico1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;
    char estado1;
    char nome1[50], codigo1[10];
    
    
         printf("Cadastre a primeira carta\n\n");
         printf("Digite a Inicial do Estado(A a H): ");
         scanf(" %c", &estado1);
         getchar();  

         printf("Digite o Código da Cidade(ex:A01,C03,E04): ");
         scanf(" %9s", codigo1);

         printf("Digite o Nome da Cidade: ");
         scanf(" %s", nome1);

         printf("Digite a População: ");
         scanf(" %i", &populaçao1);
         getchar();

         printf("Digite a Área da Cidade: ");
         scanf(" %f", &area1);

         printf("Digite o PIB(Em bilhões de reais): ");
         scanf(" %f", &pib1);

         printf("Digite o número de Pontos Turísticos: ");
         scanf(" %i", &turistico1);
         
         //Calculos da primeira carta
         densidade_populacional1 = (float)(populaçao1/area1);
         pib_per_capita1 = (float)(pib1 * 1000000000)/populaçao1;


    //declarção das variaveis da segunda carta
    int  turistico2, populaçao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;
    char estado2, codigo2[10], nome2[50];
    
         printf("\n\nCadastre a segunda carta\n\n");
         getchar();//limpando buffer

         printf("Digite a inicial de um Estado (A a H): ");
         scanf(" %c", &estado2);

         getchar();//limpando o buffer
         printf("Digite o Código da Cidade(ex:A01,C03,E04): ");
         scanf("%9s", codigo2);

         printf("Digite o nome da Cidade: ");
         scanf(" %s", nome2);

         printf("Digite a População: ");
         scanf("%i", &populaçao2);
    
         printf("Digite a Área da Cidade (Em km²): ");
         scanf("%f", &area2);

         printf("Digite o PIB(Em bilhões de reais): ");
         scanf("%f", &pib2);

         printf("Digite o número de Pontos Turísticos: ");
         scanf("%i", &turistico2);
         
         //Cauculos da segunda carta
         densidade_populacional2 = (float)(populaçao2/area2);
         pib_per_capita2 = (float)(pib2 * 1000000000)/populaçao2;


    //Exibição da primeira carta
         printf("\nPrimeira Carta:\n");
         printf("Estado: %c\n", estado1);
         printf("Código da Carta: %s\n", codigo1);
         printf("Nome da Cidade: %s\n", nome1);
         printf("População: %i \n", populaçao1);
         printf("Área: %.2f km²\n", area1);
         printf("PIB: %.2f Bilhões de Reais\n", pib1);
         printf("Pontos Turísticos: %i\n", turistico1);
         printf("Densidade Populacinal: %.3f Hab/km²\n", densidade_populacional1);
         printf("PIB per Capita: %.3f de Reais\n",pib_per_capita1);
   
     //Exibição da segunda carta
         printf("\nSegunda carta:\n");
         printf("Estado: %c\n", estado2);
         printf("Código da Carta: %s\n", codigo2);
         printf("Nome da Cidade: %s\n", nome2);
         printf("População: %i\n", populaçao2);
         printf("Área: %.2f km²\n", area2);
         printf("PIB: %.2f Bilhões de Reais\n", pib2);
         printf("Numero de Pontos Turísticos: %i\n", turistico2);
         printf("Densidade Populacinal: %.3f Hab/km²\n", densidade_populacional2);
         printf("PIB per Capita: %.3f de Reais\n", pib_per_capita2);
         
     return 0;




    } 
     


