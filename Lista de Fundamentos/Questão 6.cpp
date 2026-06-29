
//6- Peça ao usuário que informe a letra inicial da marca, 
//do modelo e o ano do carro. Exiba os dados
 //em uma única linha como: “Veículo [marca]-[modelo]-[ano]”.

#include <stdio.h>
int main(){
	char modelo, marca;
	int ano;
	
	printf("Qual é o Marca?: ");
	scanf("%c", &marca);
	printf("Qual é o modelo?: ");
	scanf(" %c", &modelo);
	printf("Qual ano de  veiculo?: ");
	scanf(" %d", &ano);
	
	printf(" \n Marca: %c, Modelo: %c, Ano  do Veiculo: %d", marca, modelo, ano);
	
return 0;	
}
