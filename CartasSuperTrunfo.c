#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //Declarando variantes para a carta 1
    char Codigo1[10];
    char Cidade1[20];
    int populacao1;
    char Estado1[20];
    float area1;
    float pib1;
    int ponto_turisticos1;


    //Declarando variantes para a carta 2
    char Codigo2 [10];
    char Cidade2[20];
    char Estado2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;


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
     scanf ("%s", &Estado1);
     printf("Digite o nome da cidade: \n");
     scanf("%s", &Cidade1);
     printf("Digite o codigo do estado, sendo ele a primeira letra do estado junto de um numero de 01 a 04: \n");
     scanf("%s", &Codigo1);
     printf("Digite a população da cidade: \n");
     scanf("%d", &populacao1);
     printf("Digite a areá por km² da cidade: \n");
     scanf ("%f", &area1);
     printf("Digite o PIB da cidade: \n");
     scanf("%f", &pib1);
     printf("Digite a quantidade de pontos turisticos da cidade: \n");
     scanf("%d", &ponto_turisticos1);
    
     printf("\n Agora vamos por os dados da carta 2! \n");
      
     //Coletando dados carta 2

     printf("Digite o nome do Estado: \n");
     scanf("%s",&Estado2);
     printf("Digite o nome da cidade: \n");
     scanf("%s",&Cidade2);
     printf("Digite o codigo do estado, sendo a primeira letra do estado junto um codigo de 01 a 04: \n");
     scanf("%s",&Codigo2);
     printf("Digite a população da cidade: \n");
     scanf("%d",&populacao2);
     printf("Digite a area por km² da cidade: \n");
     scanf("%f",&area2);
     printf("Digite o IB da cidade \n");
     scanf("%f",&pib2);
     printf("Digite a quantidade de pontos turisticos da cidade \n");
     scanf("%d",&pontos_turisticos2);
    
     //Iremos exibir os dados das cartas um por linha usando o "\n"
     printf("\nAgora vamos ver as cartas! \n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("Codigo: %s\n", Codigo1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", ponto_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Codigo: %s\n", Codigo2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);


    
 


    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}