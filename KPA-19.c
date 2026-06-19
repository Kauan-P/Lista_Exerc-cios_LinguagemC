
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-19 - Ordem crescente (três números)");	
printf("\n **************************************************** \n");

	
int num1, num2, num3, maior, menor, meio;

printf("Digite o valor do primeiro número: ");
scanf("%d",&num1);

printf("Digite o valor da segundo número: ");
scanf("%d",&num2);

printf("Digite o terceiro número: ");
scanf("%d",&num3);

if(num1 < num2 && num1 < num3){
	
	menor = num1;
	
} else if(num2 < num3 && num2 < num1){
	
	menor = num2;
	
} else {
	
	menor = num3;
	
} 


 	
 if(num1 > num2 && num1 > num3){
 	
 	maior = num1;
 	
} else if(num2 > num3 && num2 > num1){

	maior = num2;
	
} else {
	
	maior = num3;
	
}
	
meio = num1 + num2 + num3 - maior - menor;

printf("\n %d, \n %d, \n %d", menor, meio, maior );
	
}
