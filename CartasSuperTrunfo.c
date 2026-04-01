#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1 = 'A';
    char Codigo1[] = "A01";
    char Nomedacidade1[] = "Rio de Janeiro";
    int Populacao1 = 12325000;
    float Area1 = 1521.11;
    float Pib1 = 699.28;
    int Numerodepontosturisticos1 = 50;
    float divisao;
    divisao = Populacao1 / Area1;
    float cdpib;
    cdpib =  Pib1 / Populacao1;


    

    char Estado2 = 'B';
    char Codigo2[] = "B02";
    char Nomedacidade2[] = "São Paulo";
    int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float Pib2 = 300.50;
    int Numerodepontosturisticos2 = 50;
    float divisao2;
    divisao2 = Populacao2 / Area2;
    float cdpib1;
    cdpib1 =  Pib2 / Populacao2;
    


  // Área para entrada de dados
    printf("Carta1\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Nome da Cidade: %s \n", Nomedacidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f Km² \n", Area1);
    printf("PIB: %.2f bilhões de reais \n", Pib1);
    printf("Número de Pontos Turísticos1: %d \n", Numerodepontosturisticos1 );
    printf("Densidade Populacional: %.2f hab/km² \n ", divisao);
    printf("PIB per Capita: %f reais \n \n", cdpib);



    printf("Carta2\n");
    printf("Estado: %c \n", Estado2);
    printf("Código2: %s \n", Codigo2);
    printf("Nome da Cidade2: %s \n", Nomedacidade2);
    printf("População: %d \n", Populacao2);
    printf("Área2: %.2f Km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", Pib2);
    printf("Número de Pontos Turísticos: %d \n", Numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", divisao2);
    printf("PIB per Capita: %f reais \n \n", cdpib1);



  //Área para exibição dos dados da cidade

return 0;
} 
