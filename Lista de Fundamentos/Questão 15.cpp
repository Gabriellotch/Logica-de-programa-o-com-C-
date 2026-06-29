//Questão 15 – Orçamento de pintura
//Uma empresa de pintura calcula o custo com base na área e no preço por 
//metro quadrado.
//Leia a largura e altura da parede e o preço por metro quadrado. 
//Exiba o valor total.

#include <stdio.h>
int main()
{
float base, alt, prec;

printf("Base da parede: ");
scanf("%f",&base);
printf("Altura da parede: ");
scanf("%f",&alt);

prec = base * alt;

printf ("\nO preco final: %.2f", prec);	
	return 0;
}
