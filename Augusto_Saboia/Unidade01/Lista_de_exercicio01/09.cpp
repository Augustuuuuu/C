#include <stdio.h>
/*10. Escreva um programa que solicite ao usu�rio o nome de uma verdura e uma fruta de sua
preferencia e ao final apresente na tela as informa��es digitadas pelo usu�rio da seguinte
forma: "Voce gosta de AAAAAAA e BBBBBBB" */ 
int main(){
	char fruta[20], verdura[20];
	printf("Digite o nome de uma fruta: "); scanf("%s", &fruta);
	printf("Digite o nome de uma verdura: "); scanf("%s", &verdura);
	printf("Voce gosta de %s e %s", fruta, verdura);
}
