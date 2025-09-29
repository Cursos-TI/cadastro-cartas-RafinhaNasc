#include <stdio.h>

int main(){
  char Estado[20] = "A";
  char CodigoCarta[20] = "A01";
  char NomeCidade[20] = "Goiania";
  unsigned long int Populacao = 1456741;
  float Area = 729.29;
  float PIB = 59000000;
  int NumerosPontosTuristicos = 60;
  float DensidadePopulacional = Populacao/Area; 
  float PIBperCapita = (float) PIB/Populacao;
  float SuperPoder = Populacao + Area + PIB + PIBperCapita + (1/DensidadePopulacional) 
  + NumerosPontosTuristicos;

 
  char estado[30] = "B";
  char codigocarta[30] = "B02";
  char nomecidade[30] = "Presidente Prudente";
  unsigned long int populacao = 234706;
  float area = 560.63; 
  float pib = 14000000; 
  int numerospontosturisticos = 20;
  float densidadepopulacional = populacao/area; 
  float pibpercapita = (float) pib/populacao; 
  float superpoder = populacao + area + pib + pibpercapita + (1/densidadepopulacional)
  + numerospontosturisticos;

  

printf("Desafio Super Trunfo - Cidades\n");
printf("Tema 1 - Cadrasto das Cartas\n");
printf("\n");

printf("Carta 1\n");
printf("Estado: %s\n", Estado);
printf("Código da Carta: %s\n", CodigoCarta);
printf("Nome da Cidade: %s\n", NomeCidade);
printf("População (milhões): %.lu\n", Populacao);
printf("Área (km²): %.2f\n", Area);
printf("PIB (bilhões) %.2f\n", PIB);
printf("Numeros de Pontos Turísticos: %d\n", NumerosPontosTuristicos);
printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
printf("Pib per Capita: R$ %.2f\n", PIBperCapita);
printf("Super Poder: %.2f\n", SuperPoder);
printf("\n");

printf("Carta 2\n");
printf("Estado: %s\n", estado);
printf("Código da Carta: %s\n", codigocarta);
printf("Nome da Cidade: %s\n", nomecidade);
printf("População (milhões): %.lu\n", populacao);
printf("Área (km²): %.2f\n", area);
printf("PIB (milhões): %.2f\n", pib);
printf("Numeros de Pontos Turísticos: %d\n", numerospontosturisticos);
printf("Densidade Populacional (hab/km²): %.2f\n", densidadepopulacional);
printf("Pib per Capita: R$ %.2f\n", pibpercapita);
printf("Super Poder: %.2f\n", superpoder);
printf("\n");

printf("Comparação entre as Cartas\n");

int resultado;

resultado = Populacao > populacao;
resultado = Area > area;
resultado = PIB > pib;
resultado = NumerosPontosTuristicos > numerospontosturisticos;
resultado = DensidadePopulacional > densidadepopulacional;
resultado = PIBperCapita > pibpercapita;
resultado = SuperPoder > superpoder;
printf("\n");

printf("População: Carta1 venceu, %d\n", resultado);
printf("Area: Carta1 venceu. %d\n", resultado);
printf("PIB: Carta1 venceu, %d\n", resultado);
printf("Pontos turisticos: Carta1 venceu, %d\n", resultado);
printf("Densidade Populacional: Carta2 venceu, %d\n", resultado);
printf("PIB PerCapita: Carta1 venceu, %d\n", resultado);
printf("Super Poder: Carta1 venceu, %d\n", resultado);

return 0;
}
