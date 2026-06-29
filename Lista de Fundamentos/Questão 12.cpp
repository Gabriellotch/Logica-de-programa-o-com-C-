//12- Uma empresa deseja calcular o salário mensal de um funcionário com base nas 
//horas trabalhadas.
//Leia o valor da hora e a quantidade de horas trabalhadas. Exiba o salário total.

#include <stdio.h>
int main (){
	int qtdhoras_Trab;
	float valor_horas, salario;
	
	printf("Quantas horas O empregado trabalha: \n");
	scanf("%d", &qtdhoras_Trab);
	printf("Quanto ele recebe pela hora do trabalho: \n");
	scanf("%f", &valor_horas);
	
	salario = valor_horas * (qtdhoras_Trab * 30);
	
	printf("Salario?: %.2f \n", salario);
	
	return 0; 
}
