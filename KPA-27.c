#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {

	setlocale(LC_ALL,"portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-27 - Tabuada de um número");	
printf("\n **************************************************** \n");

int res, num, i;
	
	printf("Qual a tabuada que você deseja? ");
	scanf("%d", &num);

for( i = 1; i <=10; i++){
	res = num * i;
	printf("\n %d x %d = %d", num, i, res);
	
}
	return 0;

}
