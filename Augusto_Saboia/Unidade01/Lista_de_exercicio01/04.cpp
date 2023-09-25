#include <stdio.h>

/* 4. Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente na
tela os dois números informados da seguinte forma: "Voce informou os numeros X e Y" */

int main(){
	int n1, n2;
	printf("Digite um valor inteiro: ");
	scanf("%i", &n1);
	printf("Digite outro valor inteiro: ");
	scanf("%i", &n2);
	printf("Voce informou os numeros %i  e %i", n1, n2);
}


