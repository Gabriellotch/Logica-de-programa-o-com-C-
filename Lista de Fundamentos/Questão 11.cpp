
//Questão 11 – Cadastro simples de cliente
// Ao abrir um novo cadastro, é necessário armazenar o nome e a
// idade do cliente.

#include <stdio.h>
int main (){
	char n;
	int i;
	
	printf("Nome cliente: \n");
	scanf("%c",&n);
	printf("Idade: \n");
	scanf("%d",&i);
	
	printf("Nome: %c, Idade: %d ", n, i);

	
	return 0;

}
