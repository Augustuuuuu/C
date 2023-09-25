#include <stdio.h>
/* 7. Escreva um programa que solicite ao usuário um número inteiro e um número real e ao final
apresente na tela os dois números informados formatando com duas casas decimais
somente o número real da seguinte forma: "Voce informou os numeros N e X.YY" */
int main(){
	int num1; float num2;
	printf("Digite um numero inteiro: "); scanf("%d", &num1);
	printf("Digite um numero real: "); scanf("%f", &num2);
	printf("Voce informou os numeros %d e %0.2f", num1, num2);
}
