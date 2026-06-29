 //1- Crie um programa que solicite a letra inicial do nome do usuário com scanf 
//e depois exiba uma mensagem de boas-vindas com printf, utilizando essa 
//letra.
#include <stdio.h>
int main(){
	char nome;
	printf("Qual é o seu nome?: ");
	scanf("%c",&nome);
	printf("Seja ben vindo %c", nome);
return 0;
}
