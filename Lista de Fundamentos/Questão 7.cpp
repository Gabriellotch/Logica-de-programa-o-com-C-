//Questão 07 – Mensagem personalizada
//Leia a letra inicial do nome de uma 
//pessoa e uma mensagem curta (como um 
//número ou símbolo). Exiba: 
//“Mensagem para [letra]: [mensagem]”.

#include <stdio.h>
int main()
{
char l, ni;

printf("Inssira a letra: \n ");	
scanf(" %c", &l);
printf("Inssira uma mensagem aletoria: \n ");
scanf(" %c", &ni);
printf("\n letra : %c, Mensagem aleatoria: %c ", l, ni);

	return 0;
}
