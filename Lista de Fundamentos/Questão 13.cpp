 //Questão 13 – Conversão de moedas
//Um turista precisa converter reais em dólares.
//Leia o valor em reais e a cotação do dólar. Exiba o valor convertido.
#include <stdio.h>
int main (){
	float r, d;
	
	printf("Valor em reais: ");
	scanf(" %f",&r);
	
	d = r / 5.23;
	
	printf("Valor em dolar: %.2f ", d);
	
	return 0;
}
