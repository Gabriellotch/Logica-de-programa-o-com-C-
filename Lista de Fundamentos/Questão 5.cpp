//5- Solicite a primeira letra do nome e a primeira letra do sobrenome de um
//aluno, além da matrícula (número inteiro). Exiba os dados com uma frase
//como: “Aluno [N.S], matrícula [número]”.
 #include <stdio.h>
int main() {
char l, a;
int mat;

printf("Qual a primeira letra do seu nome?:" );
scanf(" %c",&l);
printf("Qual a primeira letra do seu sobrenome?:" );
scanf(" %c",&a);
printf("Qual a matrícula?:"  );
scanf("%d",&mat);

printf("Aluno: %c %c, mat: %d", l, a, mat);

return 0;
}
