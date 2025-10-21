#include <stdio.h>
int main(){

  //Primeiro vou separar as variaveis para as cartas.

  char estado1, estado2;
  char codigo1[20], codigo2[20], cidade1[20], cidade2[20];

  unsigned long int populacao1, populacao2;

  int turismo1, turismo2;

  float superPoder1, superPoder2;
  float area1, area2, pib1, pib2;
  float pibc1, pibc2, densidade1, densidade2;


  //Irei pegar as informaçoes dos estados com o usuário.

  printf("Olá tudo bem contigo? Vamos cadastrar suas primeiras cartas?\n");
  printf("Por favor digite uma letra de 'A' a 'H' que represente o primeiro estado do qual você escolheu:\n");
  scanf(" %c", &estado1);
  printf("Agora uma letra de 'A' a 'H' que represente o segundo estado do qual você escolheu:\n");
  scanf(" %c", &estado2);

  //Obtendo o codigo das cartas.

  printf("Ótimo! Agora me diga um código de dois numeros (ex: 01, 02 etc.) do primeiro estado:\n");
  scanf(" %s", codigo1);
  printf("Agora um código de dois numeros do segundo estado?\n");
  scanf(" %s", codigo2);

  //Obtendo a cidade.

  printf("Agora me fale qual vai ser a cidade do primeiro estado? (no lugar do espaço use '.' ou '_')\n");
  scanf(" %s", cidade1);
  printf("E a cidade do segundo estado qual vai ser?\n");
  scanf(" %s", cidade2);

  // Coletando a população com o usuário.

  printf("Qual diga a população da primeira cidade? (somente numeros ex: 25000)\n");
  scanf("%lu", &populacao1);
  printf("E o da população da segunda cidade?\n");
  scanf("%lu", &populacao2);

  // Coletando a área com o usuário.

  printf("Qual a área da primeira cidade? (somente numros e ponto ex: 25.000)\n");
  scanf(" %f", &area1);
  printf("E a área da segunda cidade?\n");
  scanf(" %f", &area2);

  // Coletando o PIB com o usuário.

  printf("Agora preciso do PIB (Produto Interno Bruto) da primeira cidade:\n");
  scanf(" %f", &pib1);
  printf("E o PIB da segunda cidade?\n");
  scanf(" %f", &pib2);

  // Coletando o numero de pontos turisticos com o usuário.

  printf("Qual o número de pontos turísticos da primeira cidade?\n");
  scanf(" %d", &turismo1);
  printf("E o número de pontos turísticos da segunda cidade?\n");
  scanf(" %d", &turismo2);

  //declarando valor as variaveis para calculos
  pibc1 = pib1 / populacao1;
  pibc2 = pib2 / populacao2;
  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;

  //Agora irei mostrar as cartas para o usuário.

  printf("\n\n***Parabéns! Suas duas cartas foram concluídas com sucesso.\nAqui estão as cartas que você cadastrou:***\n\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", turismo1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: R$ %.2f\n\n", pibc1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", turismo2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: R$ %.2f\n\n", pibc2);

  //calculando o super poder das cartas

  populacao1 = populacao1 > populacao2;
  populacao2 = populacao2 > populacao1;

  area1 = area1 > area2;
  area2 = area2 > area1;

  pib1 = pib1 > pib2;
  pib2 = pib2 > pib1;

  turismo1 = turismo1 > turismo2;
  turismo2 = turismo2 > turismo1;

  pibc1 = pibc1 > pibc2;
  pibc2 = pibc2 > pibc1;

  densidade1 = densidade1 / 1;
  densidade2 = densidade2 / 1;

  superPoder1 = populacao1 + area1 + pib1 + turismo1 + pibc1 + densidade1;
  superPoder2 = populacao2 + area2 + pib2 + turismo2 + pibc2 + densidade2;
  
  superPoder1 = superPoder1 > superPoder2;
  superPoder2 = superPoder2 > superPoder1;

  //fazendo a comparaçao entre as cartas com base nos dados obtidos.

  printf("***Comparação das cartas***\n");
  printf("População: Carta 1 venceu? %d\n", (populacao1 > populacao2));
  printf("Área: Carta 1 venceu? %d\n", (area1 > area2));
  printf("PIB: Carta 1 venceu? %d\n", (pib1 > pib2));
  printf("Pontos Turísticos: Carta 1 venceu? %d\n", (turismo1 > turismo2));
  printf("Densidade Populacional: Carta 2 venceu? %d\n", (densidade1 < densidade2));
  printf("PIB per Capita: Carta 1 venceu? %d\n", (pibc1 > pibc2));
  printf("Super Poder: Carta 1 venceu? %d\n", (superPoder1 > superPoder2));

  printf("\n\n***Obrigado por usar nosso sistema de cartas Super Trunfo! Divirta-se jogando!***\n\n");

return 0;
} 