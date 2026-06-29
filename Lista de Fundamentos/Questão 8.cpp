

//Questão 08 – Formatação de //valores
//Leia um número decimal e exiba //com duas casas decimais //usando printf.

#include <stdio.h>
int main () {
	
 float n1;
 
 printf("Numero: \n");
 scanf("%f", &n1);
 
 printf("O numero decimal: %.2f \n", n1);
 
 return 0;
}
