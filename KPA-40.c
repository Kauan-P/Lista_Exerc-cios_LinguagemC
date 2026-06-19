#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-40 - Tabuada com while");	
printf("\n **************************************************** \n");

 int i, res, num;

	
 	printf("Qual tabuada você quer ?");
 	scanf("%d", &num);
 	
 	i = 0;  
 	while(i<10){
 		i++;
 		res = num * i;
		 
		printf("\n %d x %d = %d", num, i, res);	
 	
 		
 		
	 }



}
