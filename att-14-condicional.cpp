#include <stdio.h>

int main(){
	int sem;
	
	printf("Digite a semana: ")
	scanf("%d", &sem);
	
	switch (sem) {
		case 1: printf("Domingo"); break;
		case 2: printf("Segunda"); break;
		case 3: printf("Terca"); break;
		case 4: printf("Quarta"); break;
		case 5: printf("Quinta"); break;
		case 6: printf("Sexta"); break;
		case 7: printf("Sabado"); break;
		default: pritnf("ERRO");

	}
	return (0);
	
}
