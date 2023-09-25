#include <stdio.h>

// Elabore um programa que solicite ao usuário um número real e ao final
// imprima na tela se o número informado é maior que 10(dez)

int main(){
	float valor;
	printf("Informe um valor real: ");
	scanf("%f", &valor);
	if (valor > 10)
		printf("O valor informado eh maior que dez!");

}	
