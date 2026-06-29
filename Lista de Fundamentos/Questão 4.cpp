
//4- Leia a letra inicial do título, do autor e o ano de publicação. Exiba os 
//dados organizados em três linhas, como: Título: [letra] Autor: [letra] Ano: 
//[número]

#include <stdio.h>
int main (){
	char titulo;
	char autor;
	
	printf("Qual titulo você busca? \n");
	scanf(" %c", &titulo);
	printf("ta de qual autor? \n");
	scanf(" %c", &autor);
	printf("Aqui esta o livro  %c \n", titulo );
	printf("do autor %c \n", autor);

	return 0;	
}
