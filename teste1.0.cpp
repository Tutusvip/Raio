//um programa que pede a idd de a idd for menor do que 18 votla tudo até ser maior ou igual
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade;
	
	//scanf("%d", &idade);

	do{
		printf("DIgite a idade");
		scanf("%d", &idade);
	} while (idade <= 18);
	
	printf("idade valida", idade);
}

