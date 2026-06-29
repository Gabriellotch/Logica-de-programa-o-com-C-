//3-/Peça ao usuário que informe a letra inicial da rua, bairro, cidade, estado e 
//os dígitos do CEP separadamente. Exiba o endereço formatado com 
//printf.

#include <stdio.h>
int main (){
	char rua = 0, bairro = 0, cidade = 0, uf = 0;
	int cep;
	printf("Qual rua você mora?: \n ");
	scanf("%c", &rua);
	printf("E que bairro?: \n");
	scanf("%c",&bairro);
	printf("Cidade: \n");
	scanf("%c",& cidade);
	printf("Que estado?: \n");
	scanf("%c",&uf);
	printf("Qual cep?: ");
	scanf("%d",&cep);
	
	printf("Você mora na rua, %c", rua);
	printf("no bairro, %c", bairro); 
	printf("na cidade %c", cidade);
	printf("estado %c \n",uf );
	printf("Cep: %d ?", cep);
	
	return 0;
}
