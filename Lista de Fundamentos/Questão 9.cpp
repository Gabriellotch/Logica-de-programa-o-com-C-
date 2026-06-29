
//Questão 09 – Nome completo caractere por caractere
//Durante o cadastro inicial, o sistema ainda não permite a entrada de 
//nomes completos via string. Por isso, o nome deve ser capturado letra 
//por letra. Crie um programa que solicite ao usuário a primeira letra 
//do nome, a segunda letra do nome, a primeira letra do sobrenome e a 
//segunda letra do sobrenome. Depois, exiba o nome completo concatenado 
//com printf, como por exemplo: “Nome completo: J o S i”.
//Dica: use variáveis do tipo char e scanf("%c", &variavel) para cada 
//letra.

#include <stdio.h>
int main () {
	
	char l, e, t, r;
	
	printf("Inssira a letra incial do nome: ");
	scanf(" %c", &l);
	printf("\nInssira a segunda letra do nome: ");
	scanf(" %c", &e);
	
	printf("\nInssira a letra incial do sobrenome: ");
	scanf(" %c", &t);
	printf("\nInssira a segunda letra do sobrenome:");
	scanf(" %c", &r);
	
	printf("\nO nome: %c %c  %c %c ", l, e, t, r);
	
	return 0;
}
