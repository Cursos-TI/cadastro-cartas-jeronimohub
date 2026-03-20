#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1 = 'A';
    char Codigo1[] = "A01";
    char Nomedacidade1[] = "São Paulo";
    int Populacao1 = 12325000;
    float Area1 = 11521.11;
    float Pib1 = 699.28;
    int Numerodepontosturisticos1 = 50;

    char Estado2 = 'B';
    char Codigo2[] = "B02";
    char Nomedacidade2[] = "São Paulo";
    int Populacao2 = 12325000;
    float Area2 = 11521.11;
    float Pib2 = 699.28;
    int Numerodepontosturisticos2 = 50;

  // Área para entrada de dados
    printf("Estado1: %c \n", Estado1);
    printf("Codigo1: %s \n", Codigo1);
    printf("Nomedacidade1: %s \n", Nomedacidade1);
    printf("Populacao1: %d \n", Populacao1);
    printf("Area1: %f Km² \n", Area1);
    printf("Pib1: %f bilhões de reais \n", Pib1);
    printf("Numerodepontosturisticos1: %d \n \n", Numerodepontosturisticos1 );

    printf("Estado2: %c \n", Estado2);
    printf("Codigo2: %s \n", Codigo2);
    printf("Nomedacidade2: %s \n", Nomedacidade2);
    printf("Populacao2: %d \n", Populacao2);
    printf("Area2: %f Km² \n", Area2);
    printf("Pib2: %f bilhões de reais \n", Pib2);
    printf("Numerodepontosturisticos2: %d \n", Numerodepontosturisticos2);

  //Área para exibição dos dados da cidade

return 0;
} 
