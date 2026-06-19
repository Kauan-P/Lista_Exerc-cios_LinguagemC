#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-51 - Contagem regressiva de 10 até 1");	
printf("\n *************************************************** \n");

 int i = 10; 
 
 
 do{
 	printf("\n %d", i);
 	i--;
 	
 } while(i>0);




}
