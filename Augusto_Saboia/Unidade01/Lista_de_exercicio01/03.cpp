#include <stdio.h>
/* 3. Escreva um programa que solicite ao usu�rio um n�mero inteiro e ao final apresente na tela
o n�mero informado da seguinte forma: "Foi informado o valor: X" */

int main(){
	int numero;
	printf("Informe um numero inteiro: ");
	scanf("%i", &numero);
	printf("O valor informado foi: %i", numero);
}
