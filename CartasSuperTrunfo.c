#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // carta1
    char Estado1;
    char Codigo1[4];
    char Nomedacidade1[30];
    unsigned long int Populacao1;
    long double Area1;
    long double Pib1;
    int Numerodepontosturisticos1;
  

  // carta2
    char Estado2;
    char Codigo2[4];
    char Nomedacidade2[30];
    unsigned long int Populacao2;
    long double Area2;
    long double Pib2;
    int Numerodepontosturisticos2;


  // Área para entrada de dados
  // Cadastro da carta1
    printf("Cadastro da carta1: \n");
    printf("Digite o Estado: \n");
    scanf(" %c", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade1);

    printf("Digite a sua população: \n");
    scanf("%lu", &Populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%Lf", &Area1);
 
     printf("Digite o seu PIB:  \n");
    scanf("%Lf", &Pib1);

    printf("Digite o seu número de pontos turísticos: \n");
    scanf("%d", &Numerodepontosturisticos1);

    // Cadastro da carta2
    printf("Cadastro da carta2: \n");
    printf("Digite o Estado: \n");
     scanf(" %c", &Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade2);

    printf("Digite a sua população: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%Lf", &Area2);
 
     printf("Digite o seu PIB:  \n");
    scanf("%Lf", &Pib2);

     printf("Digite o seu número de pontos turísticos: \n");
    scanf("%d", &Numerodepontosturisticos2);

  //Área para exibição dos dados da cidade
    printf("Carta1\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", Codigo1);
    printf("Nome da Cidade: %s \n", Nomedacidade1);
    printf("População: %lu \n", Populacao1);
    printf("Área: %.2Lf Km² \n", Area1);
    printf("PIB: %.2Lf bilhões de reais \n", Pib1);
    printf("Número de Pontos Turísticos: %d \n", Numerodepontosturisticos1);

  // Cálculo da densidade populacional
    long double divisao  = Populacao1 / Area1;
    // cálculo do PIB per capita
    long double cdpib =  Pib1 / Populacao1;
    //Super poder da carta1
    long double superpoder = Populacao1 + Area1 + Pib1 + Numerodepontosturisticos1 + divisao + cdpib;
    printf("Densidade Populacional: %.2Lf hab/km² \n", divisao);
    printf("PIB per Capita: %Lf reais \n", cdpib);
    printf("Super Poder: %Lf \n \n", superpoder);

    printf("Carta2\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da Cidade: %s \n", Nomedacidade2);
    printf("População: %lu \n", Populacao2);
    printf("Área: %.2Lf Km² \n", Area2);
    printf("PIB: %.2Lf bilhões de reais \n", Pib2);
    printf("Número de Pontos Turísticos: %d \n", Numerodepontosturisticos2);

// Cálculo da densidade populacional
    long double divisao2 = Populacao2 / Area2;
    // cálculo do PIB per capita
    long double cdpib1 =  Pib2 / Populacao2;
    //Super poder da carta2
    long double superpoder1 = Populacao2 + Area2 + Pib2 + Numerodepontosturisticos2 + divisao2 + cdpib1;
    printf("Densidade Populacional: %.2Lf hab/km²\n", divisao2);
    printf("PIB per Capita: %Lf reais\n", cdpib1);
    printf("Super Poder: %Lf \n \n", superpoder1);

// Comparação das cartas

    printf("População1 > População2: %d\n", Populacao1 > Populacao2);
    printf("Área1 > Área2: %d\n", Area1 > Area2);
    printf("PIB1 > PIB2: %d\n", Pib1 > Pib2);
    printf("Número de Pontos Turísticos1 > Número de Pontos Turísticos2: %d\n", Numerodepontosturisticos1 > Numerodepontosturisticos2);
    printf("Densidade Populacional1 < Densidade Populacional2: %d\n", divisao < divisao2);
    printf("PIB per Capita1 > PIB per Capita2: %d\n", cdpib > cdpib1);
    printf("Super Poder1 > Super Poder2: %d \n \n", superpoder > superpoder1);

// Comparaão das cartas usando if e if-else
   //Atributo população
   printf("Atributo população:\n");
   if(Populacao1 > Populacao2){
    printf("Carta1 (%s) venceu!\n\n", Nomedacidade1);
   } else {
    printf("Carta2: (%s) venceu\n\n", Nomedacidade2);
   }

   //Atributo Área
   printf("Atributo Área:\n");
   if(Area1 > Area2){
    printf("Carta1 (%s) venceu!\n\n", Nomedacidade1);
   } else {
    printf("Carta2: (%s) venceu\n\n", Nomedacidade2);
   }

   //Atributo PIB
   printf("Atributo PIB:\n");
   if(Pib1 > Pib2){
    printf("Carta1 (%s) venceu!\n\n", Nomedacidade1);
   } else {
    printf("Carta2: (%s) venceu\n\n", Nomedacidade2);
   }

   //Atributo Pontos turísticos
   printf("Atributo Pontos Turísticos:\n");
   if(Numerodepontosturisticos1 > Numerodepontosturisticos2){
    printf("Carta1 (%s) venceu!\n\n", Nomedacidade1);
   } else {
    printf("Carta2: (%s) venceu\n\n", Nomedacidade2);
   }

   //Atributo Densidade populacional
   printf("Atributo  Densidade Populacional:\n");
   if(divisao > divisao2 ){
    printf("Carta1 (%s) venceu!\n\n", Nomedacidade1);
   } else {
    printf("Carta2: (%s) venceu\n\n", Nomedacidade2);
   }

   //Atributo PIB per capita
   printf("Atributo PIB Per Capita:\n");
   if(cdpib > cdpib1){
    printf("Carta1 (%s) venceu!\n\n", Nomedacidade1);
   } else {
    printf("Carta2: (%s) venceu\n\n", Nomedacidade2);
   }

   //Atributo Super poder
   printf("Atributo Super Poder:\n");
   if(superpoder > superpoder1){
    printf("Carta1 (%s) venceu!\n\n", Nomedacidade1);
   } else {
    printf("Carta2: (%s) venceu\n\n", Nomedacidade2);
   }

    return 0;
}