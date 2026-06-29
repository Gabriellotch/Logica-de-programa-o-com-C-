
 
//10- Para treinar a entrada de dados simples, o aluno deve 
//capturar o endereço do CETENS letra por letra.
//. Crie um programa que solicite ao usuário as seguintes 
//letras, uma por uma:
//. Primeira letra da rua
//. Primeira letra do bairro
//. Primeira letra da cidade
//. Primeira letra do estado
//. Dígitos do CEP (um por um, como caracteres)
//Depois, exiba o endereço completo com printf, como por 
//exemplo: “Endereço: R: [r], B: [b], C: [c], UF: [e], 
//CEP: [d1][d2][d3][d4][d5][d6][d7][d8]”
//Dica: use 4 variáveis char para as iniciais e 
//8 variáveis char para os dígitos do CEP.

#include <stdio.h>
int main (){
char r, b, c, u;
char d1, d2, d3, d4, d5, d6, d7, d8;


printf("Rua?: \n");
scanf(" %c",&r);
printf("Bairro?: \n");
scanf(" %c",&b);
printf("Cidade?: \n");
scanf(" %c",&c);
printf("Estado?: \n");
scanf(" %c",&u);

printf("ceep?: \n");
scanf(" %c",&d1);
printf("Continue digitando o ceep: \n");
scanf(" %c",&d2);
printf("Continue digitando o ceep: \n");
scanf(" %c",&d3);
printf("Continue digitando o ceep: \n");
scanf(" %c",&d4);
printf("Continue digitando o ceep: \n");
scanf(" %c",&d5);
printf("Continue digitando o ceep: \n");
scanf(" %c",&d6);
printf("Continue digitando o ceep: \n");
scanf(" %c",&d7);
printf("Continue digitando o ceep: \n");
scanf(" %c",&d8);

printf("Endereco: R: %c, B: %c, C: %c, E:%c , Ceep:  %c %c %c %c %c %c %c %c", r, b, c, u, d1, d2, d3, d4, d5, d6, d7, d8);

return 0;
}
