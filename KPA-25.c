#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

	setlocale(LC_ALL,"portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-25 -  Notas e aprovação");	
printf("\n **************************************************** \n");


float nota1, nota2, nota3, nota4, media;

	printf("\n Informe o valor da primeira nota: ");
	scanf("%f",&nota1);
	
	printf("\n Informe o valor da segunda nota: ");
	scanf("%f", &nota2);

	printf ("\nInforme o valor da terceira nota: ");
	scanf("%f", &nota3);

	printf("\nInforme o valor da quarta nota: ");
	scanf("%f", &nota4);

media = (nota1+nota2+nota3+nota4)/4;

	printf("\n A media final do aluno foi: %.2f",media);

if(media >= 6){

	printf("\n O Aluno está aprovado!");	
 
} else if(media >= 5 && media < 6 ){

	printf("\n O Aluno está de recuperação!");

}else{
	
	printf("\n O Aluno está reprovado!");

}
}
