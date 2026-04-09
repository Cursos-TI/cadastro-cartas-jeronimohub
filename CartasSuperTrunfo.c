#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1 = 'A';
    char Codigo1[] = "A01";
    char Nomedacidade1[] = "Rio de Janeiro";
    unsigned long int Populacao1 = 12325000;
    float Area1 = 1521.11;
    float Pib1 = 699.28;
    int Numerodepontosturisticos1 = 50;
    float divisao  = Populacao1 / Area1;
    float cdpib =  Pib1 / Populacao1;
    float superpoder = Populacao1 + Area1 + Pib1 + Numerodepontosturisticos1 + divisao + cdpib;



    

    char Estado2 = 'B';
    char Codigo2[] = "B02";
    char Nomedacidade2[] = "São Paulo";
    unsigned long int Populacao2 = 6748000;
    float Area2 = 1200.25;
    float Pib2 = 300.50;
    int Numerodepontosturisticos2 = 30;
    float divisao2 = Populacao2 / Area2;
    float cdpib1 =  Pib2 / Populacao2;
    float superpoder1 = Populacao2 + Area2 + Pib2 + Numerodepontosturisticos2 + divisao2 + cdpib1;
    


  // Área para entrada de dados
    printf("Carta1\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Nome da Cidade: %s \n", Nomedacidade1);
    printf("População: %lu \n", Populacao1);
    printf("Área: %.2f Km² \n", Area1);
    printf("PIB: %.2f bilhões de reais \n", Pib1);
    printf("Número de Pontos Turísticos1: %d \n", Numerodepontosturisticos1 );
    printf("Densidade Populacional: %.2f hab/km²\n", divisao);
    printf("PIB per Capita: %f reais\n", cdpib);
    printf("Super Poder: %f \n\n", superpoder);


    printf("Carta2\n");
    printf("Estado: %c \n", Estado2);
    printf("Código2: %s \n", Codigo2);
    printf("Nome da Cidade2: %s \n", Nomedacidade2);
    printf("População: %lu \n", Populacao2);
    printf("Área2: %.2f Km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", Pib2);
    printf("Número de Pontos Turísticos: %d \n", Numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", divisao2);
    printf("PIB per Capita: %f reais\n", cdpib1);
    printf("Super Poder: %f \n\n", superpoder1);

    printf("População1 > População2: %d\n", Populacao1 > Populacao2);
    printf("Área1 > Área2: %d\n", Area1 > Area2);
    printf("PIB1 > PIB2: %d\n", Pib1 > Pib2);
    printf("Número de Pontos Turísticos1 > Número de Pontos Turísticos2: %d\n", Numerodepontosturisticos1 > Numerodepontosturisticos2);
    printf("Densidade Populacional1 > Densidade Populacional2: %d\n", divisao < divisao2);
    printf("PIB per Capita1 > PIB per Capita2: %d\n", cdpib > cdpib1);
    printf("Super Poder1 > Super Poder2: %d\n", superpoder > superpoder1);

  //Área para exibição dos dados da cidade

return 0;
} 
