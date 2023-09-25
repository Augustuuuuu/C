#include <stdio.h>
/*12. Reescrever o programa anterior apresentando o quadrado e o cubo do número informado*/ 
int main(){
	float num;
	printf("Digite um valor: "); scanf("%f", &num);
	printf("Numero -> %0.2f", num);
	printf("\nDobro -> %0.2f",num+num);
	printf("\nQuadrado -> %0.2f", num*num);
	printf("\nCubo -> %0.2f", num*num*num);
}
