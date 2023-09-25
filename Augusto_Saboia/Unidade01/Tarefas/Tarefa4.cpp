#include <stdio.h>
int main(){
	float Temp, Conversao;
	printf("Digite [1] para converter para Celsius. \nDigite [2] para converter para Fahrenheit.\nDigite: ");
	scanf("%f", &Conversao);
	if (Conversao == 2){
		printf("Digite a temperatura em Graus Celsius: "); scanf("%f", &Temp);
		printf("A temperatura em graus Fahrenheit: %.2f ", (9 * Temp + 160) / 5);}
	else if (Conversao == 1){
		printf("Digite a temporatura em Fahrenheit: "); scanf("%f", &Temp);
		printf("A temperatura em graus Celsius: %.2f", (Temp - 32) * 5 / 9);
	}
}

