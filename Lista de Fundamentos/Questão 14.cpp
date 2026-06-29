
 //Questão 14 – Calculando o IMC
//Uma clínica deseja calcular o Índice de Massa Corporal de seus pacientes.
//Leia o peso e a altura de uma pessoa 
//e calcule o IMC: IMC = peso / (altura * altura).

#include <stdio.h>
int main (){
	float peso, altu, imc;
	
	printf("Peso: ");
	scanf("%f",&peso);
	printf("Altura: ");
	scanf("%f",&altu);
	
	imc = peso / (altu * altu);
	
	printf("O IMC vale: %.2f",imc);
	
	return 0;
}

