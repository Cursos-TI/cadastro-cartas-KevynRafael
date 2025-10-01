#include <stdio.h>
int main(){

  //Primeiro vou separar as variaveis para as cartas.

  char estado1, estado2;
  char codigo1[20], codigo2[20], cidade1[20], cidade2[20];
  int populacao1, populacao2, turismo1, turismo2;
  float area1, area2, pib1, pib2;

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
  scanf("%d", &populacao1);
  printf("E o da população da segunda cidade?\n");
  scanf("%d", &populacao2);

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

  //Agora irei mostrar as cartas para o usuário.

  printf("\n\nParabens suas duas cartasforam concluidas com sucesso\n Aqui estão as cartas que você cadastrou:\n\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%s\n", estado1, codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: R$ %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n\n", turismo1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%s\n", estado2, codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", turismo2);

  printf("\n\nObrigado por usar nosso sistema de cartas Super Trunfo! Divirta-se jogando!\n\n");

return 0;
} 