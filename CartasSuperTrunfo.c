#include <stdio.h>

int main(){

  //Primeiro vou separar as variaveis para as cartas.

  char estado1, estado2;
  char codigo1[20], codigo2[20], cidade1[20], cidade2[20];

  unsigned long int populacao1, populacao2;

  int turismo1, turismo2;
  int menu1, escolha;

  float superPoder1, superPoder2;
  float area1, area2, pib1, pib2;
  float pibc1, pibc2, densidade1, densidade2;

  //Adicionando menu principal

  printf("= MENU PRINCIPAL=\n\n");
  printf("Digite o numero referente ao que vc deseja:\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Regras\n");
  printf("3. Sair do Jogo\n");
  scanf("%d", &menu1);

  //estrutura de switch

    switch (menu1)
    {
        case 2:    
        printf("=REGRAS=\n\n");
        printf("A regra geral é: vence a carta com o maior valor no atributo escolhido.\n");
        printf("Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n\n");
        break;
        
        case 3:
        printf("Saindo do Jogo...\n");
        break;

        case 1:
        //Irei pegar as informaçoes dos estados com o usuário.
        printf("\nAgora vamos cadastrar suas primeiras cartas?\n");
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

        //mostrando as cartas.

        printf("\nCARTAS\n\n ");
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

        //Menu de escolha para comparação.

        printf("Qual atributo vc gostaria de comparar?\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Pib\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade demográfica\n");
        scanf("%d", &escolha);

        //Mostrando o vencedor final.
    
        switch (escolha)
            {
            case 1:
            if(populacao1 > populacao2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %lu!\n", cidade1, codigo1, populacao1);
            } else if(populacao1 < populacao2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %lu!\n", cidade2, codigo2, populacao2);
            } else {
            printf("As cartas empataram!\n");
            }
            break;
            
            case 2:
            if(area1 > area2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %.2f!\n", cidade1, codigo1, area1);
            } else if(area1 < area2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %.2f!\n", cidade2, codigo2, area2);
            } else {
            printf("As cartas empataram!\n");
            }
            break;

            case 3:
            if(pibc1 > pibc2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %.2f!\n", cidade1, codigo1, pibc1);
            } else if (pibc1 < pibc2)
            {
            printf("carta %s%s é a carta vencedora com o atributo de %.2f!\n", cidade2, codigo2, pibc2);
            } else {
            printf("As cartas empataram!\n");
            }
            break;

            case 4:
            if(turismo1 > turismo2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %d!\n", cidade1, codigo1, turismo1);
            } else if (turismo1 < turismo2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %d!\n", cidade2, codigo2, turismo2);
            } else {
            printf("As cartas empataram!\n");
            }
      
            break;

            case 5:
            if(densidade1 > densidade2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %.2f!\n", cidade1, codigo1, densidade1);
            } else if (densidade1 < densidade2)
            {
            printf("A carta %s%s é a carta vencedora com o atributo de %.2f!\n", cidade2, codigo2, densidade2);
            } else {
            printf("As cartas empataram!\n");
            }
            break;

        break;
    }
    }

  return 0;
}