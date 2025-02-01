#include <stdio.h>

int main() {
int populacao1, pib1, pturisticos1, area1; 
int populacao2, pib2, pturisticos2, area2;


printf("Cadastre suas cartas!!");
printf("Vamos começar com o primeiro país\n");

printf("Digite a População\n");
scanf("%d", &populacao1);

printf("Digite o PIB\n");
scanf("%d", &pib1);

printf("Digite a quantidade de pontos turísticos\n");
scanf("%d", &pturisticos1);

printf("Digite a area\n");
scanf("%d", &area1);

printf("Agora vamos cadastrar o segundo país!!\n");

printf("Digite a População\n");
scanf("%d", &populacao2);

printf("Digite o PIB\n");
scanf("%d", &pib2);

printf("Digite a quantidade de pontos turísticos\n");
scanf("%d", &pturisticos2);

printf("Digite a area\n");
scanf("%d", &area2);

printf("Vamos começar a jogar?\n");
if (populacao1 > populacao2){
 printf("A população do primeiro país é maior\n");
}else {
printf("A população do segundo país é maior\n");

}
if(area1 > area2){
printf("A area do primeiro país é maior");
}else {
printf("A area do segundo país é maior");
}
if (pib1 > pib2)
{
    printf("O pib do primeiro país é maior");
}else {
printf("O pib do segundo país e maior");

}





}