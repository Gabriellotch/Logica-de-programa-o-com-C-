//2- Solicite a primeira letra do nome e a primeira letra do sobrenome de um 
//aluno, além da matrícula (número inteiro). Exiba os dados com uma frase 
//como: “Aluno [N.S], matrícula [número]”

#include <stdio.h>
int main(){
	char aluno_nome;
	int matricola_aluno = 0;
	
	printf("Qual é o nome do aluno?: ");
	scanf("%c", & aluno_nome);
	printf("Qual é a matricola desse aluno? ");
	scanf("%d", &matricola_aluno);
	
	printf("Nome: %c \n", aluno_nome);
	printf("Matricula: %d", matricola_aluno);
	
return 0;
	
}
