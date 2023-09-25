#include <stdio.h>
/* 6. Escreva um programa que solicite ao usuário a temperatura em graus Celsius e ao final
apresente a temperatura correspondente em graus Farenheit. F = Celsius * 1.8 + 32 */
int main(){
	float temp;
	printf("Digite a temperatura em Graus Celsius: "); scanf("%f", &temp);
	printf("%0.2f Graus Celsius equivale à %0.2f Graus Fahrenheit: ", temp, (temp * 9/5) + 32);
}
