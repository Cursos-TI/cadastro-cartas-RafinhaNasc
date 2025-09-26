#include <stdio.h>

int main(){
  char Estado[20] = "A";
  char CodigoCarta[20] = "A01";
  char NomeCidade[20] = "Goiania";
  int Populacao = 1456741;
  float Area = 729.29; //km²
  float PIB = 59000000; //bilhoes de reais
  int NumerosPontosTuristicos = 60;

 
  char estado[20] = "B";
  char codigocarta[20] = "B02";
  char nomecidade[20] = "Presidente Prudente";
  int populacao = 234706;
  float area = 560.63; //km²
  float pib = 14000000; //milhoes de reais
  int numerospontosturisticos = 20;

printf("Desafio Super Trunfo - Cidades\n");
printf("Tema 1 - Cadrasto das Cartas\n");
printf("\n");


printf("Carta 1\n");
printf("Estado: %s\n", Estado);
printf("Código da Carta: %s\n", CodigoCarta);
printf("Nome da Cidade: %s\n", NomeCidade);
printf("População (milhões): %.1d\n", Populacao);
printf("Área (km²): %.2f\n", Area);
printf("PIB (bilhões): %.2f\n", PIB);
printf("Numeros de Pontos Turísticos: %d\n", NumerosPontosTuristicos);
printf("\n");

printf("Carta 2\n");
printf("Estado: %s\n", estado);
printf("Código da Carta: %s\n", codigocarta);
printf("Nome da Cidade: %s\n", nomecidade);
printf("População (milhões): %.1d\n", populacao);
printf("Área (km²): %.2f\n", area);
printf("PIB (milhões): %.2f\n", pib);
printf("Numeros de Pontos Turísticos: %d\n", numerospontosturisticos);

return 0;
}
