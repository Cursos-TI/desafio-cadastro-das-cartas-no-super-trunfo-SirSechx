#include <stdio.h>
int main(){
   
          printf("------Super Trunfo - Países------\n\n");

    //declaração de variaveis da primeira carta
    int população, turistico;
    float area, pib;
    char* estado, nome[20], codigo[10];
    
    
         printf("Cadastre a primeira carta\n\n");
         printf("Digite a Inicial do Estado(A a H): ");
         scanf("%c", &estado);

         printf("Digite o Código da Cidade(ex:A01,C03,E04): ");
         scanf("%s", &codigo);

         printf("Digite o Nome da Cidade: ");
         scanf("%s", nome);
    
         printf("Digite a População: ");
         scanf("%i", &população);
     
         printf("Digite a Área da Cidade: ");
         scanf("%f", &area);

         printf("Digite o PIB(Em bilhões de reais): ");
         scanf("%f", &pib);

         printf("Digite o número de Pontos Turísticos: ");
         scanf("%i", &turistico);
    
    //declarção das variaveis da segunda carta
    int  Turistico, População;
    float Area, Pib;
    char* Estado, Codigo[10], Nome[20];
    
         printf("\n\nCadastre a segunda carta\n\n");
         getchar();//limpando buffer

         printf("Digite a inicial de um Estado (A a H): ");
         scanf("%c", &Estado);

         getchar();//limpando o buffer
         printf("Digite o Código da Cidade(ex:A01,C03,E04): ");
         scanf("%s", &Codigo);

         printf("Digite o nome da Cidade: ");
         scanf("%s", Nome);

         printf("Digite a População: ");
         scanf("%i", &População);

         printf("Digite a Área da Cidade (Em km²): ");
         scanf("%f", &Area);

         printf("Digite o PIB(Em bilhões de reais): ");
         scanf("%f", &Pib);

         printf("Digite o número de Pontos Turísticos: ");
         scanf("%i", &Turistico);

    //Exibição da primeira carta
         printf("\nPrimeira Carta:\n");
         printf("Estado: %c\n", estado);
         printf("Código da Carta: %s\n", codigo);
         printf("Nome da Cidade: %s\n", nome);
         printf("População: %i \n", população);
         printf("Área: %.2f km²\n", area);
         printf("PIB: %.2f Bilhões de Reais\n", pib);
         printf("Pontos Turísticos: %i\n", turistico);

    //Exibição da segunda carta
         printf("\nSegunda carta:\n");
         printf("Estado: %c\n", Estado);
         printf("Código da Carta: %s\n", Codigo);
         printf("Nome da Cidade: %s\n", Nome);
         printf("População: %i\n", População);
         printf("Área: %.2f km²\n", Area);
         printf("PIB: %.2f Bilhões de Reais\n", Pib);
         printf("Numero de Pontos Turísticos: %i\n", Turistico);

         
     return 0;




    } 
     


