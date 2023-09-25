#include <stdio.h>
/*15. Refazer o programa 14 realizando as quatro operações aritméticas básicas*/ 
int main(){
	int num1, num2;
	printf("Digite um valor: "); scanf("%d", &num1);
	printf("Digite um valor: "); scanf("%d", &num2);
	
	printf("Os numeros %d e %d:", num1, num2); 
	printf("\nSoma -> %d", num1 + num2);
	printf("\nSubtracoo %d", num1 - num2); 
	printf("\nMultiplicacao %d", num1 * num2);
	printf("\nDivisao %d", num1 / num2);
						
}
