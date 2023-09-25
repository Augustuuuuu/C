#include <stdio.h>
int main(){
	int n;
	printf("Digite um valor real: "); scanf("%f", &n);
	if (n < 10){
		printf("O valor eh menor que DEZ.");
	}
	else if (n > 10){
		printf("O valor eh maior que DEZ.");
		
	}
	else{
		printf("O valor é igual a DEZ.");
	}
}

