#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    
    //Declarando variantes para a carta 1 e 2
    char Codigo1[10],Cidade1[20],Estado1[20], Codigo2[10],
     Cidade2[20],Estado2[20];
    float populacao1,populacao2;
    float area1,area2;
    float pib1,pib2;
    int ponto_turisticos1, pontos_turisticos2;
      

 
    


      //Função Printf ira mostrar oque esta escrito dentro das aspas
    printf("Bem vindo ao super-trufo!\n");
    
      /* O printf ira solicitar para o usuario algo, enquanto o scnaf ira pegar as informações solicitadas e guardar nas varianres 
      Exemplo:
      printf("Digite seu nome:");
      scanf("%s", &nome);
      Logo: Nome = nome digitado pelo usuario
      */
     printf ("Coloque os dados da carta 1 \n");
     printf ("Digite o nome do estado: \n");
     scanf ("%s", Estado1);
     printf("Digite o nome da cidade: \n");
     scanf("%s", Cidade1);
     printf("Digite o codigo do estado, sendo ele a primeira letra do estado junto de um numero de 01 a 04: \n");
     scanf("%s", Codigo1);
     printf("Digite a população da cidade: \n");
     scanf("%f", &populacao1);
     printf("Digite a areá por km² da cidade: \n");
     scanf ("%f", &area1);
     printf("Digite o PIB da cidade: \n");
     scanf("%f", &pib1);
     printf("Digite a quantidade de pontos turisticos da cidade: \n");
     scanf("%d", &ponto_turisticos1);
    
     printf("\n Agora vamos por os dados da carta 2! \n");
      
     //Coletando dados carta 2

     printf("Digite o nome do Estado: \n");
     scanf("%s", Estado2);
     printf("Digite o nome da cidade: \n");
     scanf("%s",Cidade2);
     printf("Digite o codigo do estado, sendo a primeira letra do estado junto de um codigo de 01 a 04: \n");
     scanf("%s", Codigo2);
     printf("Digite a população da cidade: \n");
     scanf("%f",&populacao2);
     printf("Digite a area por km² da cidade: \n");
     scanf("%f",&area2);
     printf("Digite o PIB da cidade \n");
     scanf("%f",&pib2);
     printf("Digite a quantidade de pontos turisticos da cidade \n");
     scanf("%d",&pontos_turisticos2);
    
  
      
     //Iremos exibir os dados das cartas um por linha usando o "\n"
     printf("\nAgora vamos ver as cartas! \n");
     
     //variaveis do pib per capita e da densidade das cartas


     float densidade1 = (float) populacao1 / area1;
     float densidade2 = (float) populacao2 / area2;
     float pibper1 =(float) pib1 / populacao1;
     float pibper2 = (float) pib2 / populacao2;
     

     //exibindo carta 1

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Codigo: %s\n", Codigo1);
    printf("População: %f\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", ponto_turisticos1);
    printf ("Densidade Populacional: %f hab/km²\n", densidade1);
    printf("PIB per Capita: %f reais\n", pibper1);
   
    //exibindo carta 2

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Codigo: %s\n", Codigo2);
    printf("População: %f\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf ("Densidade Populacional: %f hab/km²\n", densidade2);
    printf("PIB per Capita: %f reais\n", pibper2);

    
 


    
    
    
    

    return 0;
}