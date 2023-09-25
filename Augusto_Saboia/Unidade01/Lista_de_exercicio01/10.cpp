#include <stdio.h>
/*11. Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela o
numero informado e na linha de baixo o dobro deste número da seguinte forma:
Numero -> X
Dobro deste numero -> Y*/ 
int main(){
	float num;
	printf("Digite um valor: "); scanf("%f", &num);
	printf("Numero -> %0.2f\nDobro deste numero -> %0.2f", num, num+num);
}
