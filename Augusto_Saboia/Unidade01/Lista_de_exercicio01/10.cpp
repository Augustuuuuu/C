#include <stdio.h>
/*11. Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela o
numero informado e na linha de baixo o dobro deste n�mero da seguinte forma:
Numero -> X
Dobro deste numero -> Y*/ 
int main(){
	float num;
	printf("Digite um valor: "); scanf("%f", &num);
	printf("Numero -> %0.2f\nDobro deste numero -> %0.2f", num, num+num);
}
