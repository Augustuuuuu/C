#include <stdio.h>
#include <locale.h>
// Escreva um algoritmo que determine se um candidato a doação de sangue
// pode realizar a doaçao com  base nos seguintes critérios
// ter no mínimo 16 e no máximo 69
// ter no mínimo 50kg
bool ValidarLimiteSuperior(int quantosAnos) {
	printf("\nPassei por aqui...\n");
	return(quantosAnos <= 69);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	float peso;
	printf("***** BEM-VINDO AO HEMOCENTRO DE BRASÍLIA *****");
	printf("\nDigite sua idade: "); scanf("%i", &idade);
	
	if (idade >= 16  & ValidarLimiteSuperior(idade)){
		printf("\nDigite seu peso: "); scanf("%f", &peso);
		if (peso >= 50){ 
		printf("Você está qualificado a doar sangue!");}
		else{ 
		printf("Com %.2f KG você não pode doar sangue.", peso);}
		}
	else{ 
		printf("Infelizmente com %d anos você não pode doar sangue.", idade);
	}
}

