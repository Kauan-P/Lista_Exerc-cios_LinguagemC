#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-47 - Tabuada de um número");	
printf("\n *************************************************** \n");

	int i, res, num;
	
	 printf("Informe um numero: ");
	 scanf("%d", &num);
	
	
	i = 0;
	
	do{
		res = num * i;
		printf("\n %d x %d = %d", num, i, res);
		i++;
		
		
	}while(i<=10);


}
