#include <stdio.h>
/*13. Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente
na tela a soma dos dois números informados da seguinte forma: "O numeros N e X
somados correspondem a Y"*/ 
int main(){
	int num1, num2;
	printf("Digite um valor: "); scanf("%d", &num1);
	printf("Digite um valor: "); scanf("%d", &num2);
	printf("Os numeros %d e %d somados correspondem a %d", num1, num2, num1+num2);
}
