#include <stdio.h>
/*14. Escreva um programa que solicite ao usu�rio dois n�meros reais e ao final apresente na
tela o produto dos dois n�meros informados da seguinte forma: "O produto dos numeros N
e X corresponde a Y"*/ 
int main(){
	int num1, num2;
	printf("Digite um valor: "); scanf("%d", &num1);
	printf("Digite um valor: "); scanf("%d", &num2);
	printf("O produto dos numeros %d e %d correspondem a %d", num1, num2, num1 * num2);
}
