#include <stdio.h>
#include <locale.h>
// Escreva um algoritmo que determine se um candidato a doa��o de sangue
// pode realizar a doa�ao com  base nos seguintes crit�rios
// ter no m�nimo 16 e no m�ximo 69
// ter no m�nimo 50kg
bool ValidarLimiteSuperior(int quantosAnos) {
	printf("\nPassei por aqui...\n");
	return(quantosAnos <= 69);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	float peso;
	printf("***** BEM-VINDO AO HEMOCENTRO DE BRAS�LIA *****");
	printf("\nDigite sua idade: "); scanf("%i", &idade);
	
	if (idade >= 16  & ValidarLimiteSuperior(idade)){
		printf("\nDigite seu peso: "); scanf("%f", &peso);
		if (peso >= 50){ 
		printf("Voc� est� qualificado a doar sangue!");}
		else{ 
		printf("Com %.2f KG voc� n�o pode doar sangue.", peso);}
		}
	else{ 
		printf("Infelizmente com %d anos voc� n�o pode doar sangue.", idade);
	}
}

