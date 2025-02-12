
#include <stdio.h>

int main() {
int populacao1, pib1, pturisticos1, area1, salario; 
int populacao2, pib2, pturisticos2, area2, salario2;
int pontosjogador1 =0, pontosjogador2 =0, codigo, codigo2;
 

printf("Digite o codigo da cidade");
scanf("%s", &codigo);


printf("Cadastre suas cartas!!");
printf("Vamos começar com a Cidade do jogador n1!!\n");

printf("Digite a População\n");
scanf("%d", &populacao1);
pontosjogador1 += populacao1;

printf("Digite o PIB\n");
scanf("%d", &pib1);
pontosjogador1 += pib1;

printf("Digite a quantidade de pontos turísticos\n");
scanf("%d", &pturisticos1);
pontosjogador1 += pturisticos1;

printf("Digite a area\n");
scanf("%d", &area1);
pontosjogador1 += area1;

printf("Agora, vamos começar a cadastrar a cidade do jogador n2!!\n");
printf("Digite o codigo da segunda cidade");
scanf("%s", &codigo2);

printf("Digite a População\n");
scanf("%d", &populacao2);
pontosjogador2 += pontosjogador2;

printf("Digite o PIB\n");
scanf("%d", &pib2);
pontosjogador2 += pib2;

printf("Digite a quantidade de pontos turísticos\n");
scanf("%d", &pturisticos2);
pontosjogador2 += pturisticos2;

printf("Digite a area\n");
scanf("%d", &area2);
pontosjogador2 += area2;

printf("Vamos começar a jogar?\n");
if (populacao1 > populacao2){
 printf("A população da primeira Cidade é maior\n");
}else if (populacao2 >pontosjogador1 )
{
    printf("A população da segunda Cidade é maior\n");

}else{
    printf("As cidade tem a mesma quantidade de população\n");
}

if(area1 > area2){

printf("A area da Cidade do jogador n1 é maior\n");
}
else if (area2 > area1)
printf("A area da Cidade do jogador n2 é maior\n");
else{
    printf("As Cidades tem a mesma quantidade de area\n");
}

if (pib1 > pib2)
{
    printf("O PIB do jogador n1 é maior\n");
}else if (pib2 > pib1)
{
    printf("O PIB do jogador n2 é maior\n");
}else{
    printf("Os jogadores tem a mesma quantidade de PIB\n");
}

if(pturisticos1 > pturisticos2 )
{
    printf("O jogador n1 tem mais pontos turísticos\n");
}
else if (pturisticos2 > pturisticos1){
    printf("O jogador n2 tem mais pontos turisticos\n");
}
else {
    printf("Os jogadores tem a mesma quantidade de pontos turisticos\n");
}
if (pontosjogador1 > pontosjogador2)
{
    printf("O jogador n1 ganhou parabéns\n");
}else if (pontosjogador2 > pontosjogador1)
{
    printf("O jogdor n2 ganhou parabéns\n");
}
else{ 
    printf("Uau o jogo empatou parabéns\n");
}

return 0;
    




}


