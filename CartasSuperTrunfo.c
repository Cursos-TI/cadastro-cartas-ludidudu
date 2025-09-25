        #include <stdio.h>

        int main() {
            char estado, codigo_carta[4], nome_cidade[30], estado2, codigo_carta2[4], nome_cidade2[30];
            int pontos_turisticos, pontos_turisticos2;
            unsigned long int populacao, populacao2;
            float area, pib, area2, pib2, densidade, densidade2, pib_percapita, pib_percapita2, densidade_invertida, densidade_invertida2;

            printf("******* CARTA 1 ********\n");
            printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados): ");
            scanf(" %c", &estado);

            printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
            scanf("%s", &codigo_carta);
            
            printf("Nome da Cidade: O nome da cidade: ");
            scanf("%s", &nome_cidade);

            printf("População: O número de habitantes da cidade: ");
            scanf("%u", &populacao);

            printf("Área (em km²): A área da cidade em quilômetros quadrados: ");
            scanf("%f", &area);

            printf("PIB: O Produto Interno Bruto da cidade: ");
            scanf("%f", &pib);

            printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade: ");
            scanf("%i", &pontos_turisticos); 

            printf("\n******* CARTA 2 ********\n");
            printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados): ");
            scanf(" %c", &estado2);

            printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
            scanf("%s", &codigo_carta2);
            
            printf("Nome da Cidade: O nome da cidade: ");
            scanf("%s", &nome_cidade2);

            printf("População: O número de habitantes da cidade: ");
            scanf("%u", &populacao2);

            printf("Área (em km²): A área da cidade em quilômetros quadrados: ");
            scanf("%f", &area2);

            printf("PIB: O Produto Interno Bruto da cidade: ");
            scanf("%f", &pib2);

            printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade: ");
            scanf("%i", &pontos_turisticos2); 

            densidade = populacao / area;
            pib_percapita = pib / populacao;
            densidade_invertida = area / populacao;
            float super_poder = (float) populacao + area + pib + pib_percapita + densidade_invertida + pontos_turisticos;

            densidade2 = populacao2/ area2;
            pib_percapita2 = pib2 / populacao2;
            densidade_invertida2 = area2 / populacao2;
            float super_poder2 = (float) populacao2 + area2 + pib2 + pib_percapita2 + densidade_invertida2 + pontos_turisticos2;

            printf("\nCARTA 1 ↓\n");
            densidade = populacao / area;
            pib_percapita = pib / populacao;
            printf("Estado: %c\n", estado);
            printf("Código: %s\n", codigo_carta);
            printf("Nome da cidade: %s\n", nome_cidade);
            printf("População: %u\n", populacao);
            printf("Área: %f\n", area);
            printf("PIB: %f\n", pib);
            printf("Número de pontos turísticos: %i\n", pontos_turisticos);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade);
            printf("PIB per Capita: %.2f reais\n", pib_percapita);

            printf("\nCARTA 2 ↓\n");    
            densidade2 = populacao2 / area2;
            pib_percapita2 = pib2 / populacao2;
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", codigo_carta2);
            printf("Nome da cidade: %s\n", nome_cidade2);
            printf("População: %u\n", populacao2);
            printf("Área: %f\n", area2);
            printf("PIB: %f\n", pib2);
            printf("Número de pontos turísticos: %i\n", pontos_turisticos2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per Capita: %.2f reais\n", pib_percapita2);
            
            printf("\nComparação de Cartas: \n");
            printf("População: Carta 1 venceu (%d)\n", (populacao > populacao2));
            printf("Área: Carta 1 venceu (%d)\n", (area > area2));
            printf("PIB: Carta 1 venceu (%d)\n", (pib > pib2));
            printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (pontos_turisticos > pontos_turisticos2));
            printf("Densidade Populacional: Carta 2 venceu (%d)\n", (densidade < densidade2));
            printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_percapita > pib_percapita2));
            printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder > super_poder2));

            return 0;
        }
