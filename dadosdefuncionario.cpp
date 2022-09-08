#include <stdio.h>
#include <math.h>
#define ROLO 50

int main(){
	char nome[100];
	char sexo; 
	int mt,ht;
	float vp, s;
	
	printf("digite o nome: ");
	scanf("%s", &nome);
	printf("digite o numero da matricula: ");
	scanf("%d", &mt);
	
/*	printf("digite o sexo: ");
	scanf("%c", &sexo);*/
	
	printf("digite o numero de horas trabalhadas: ");
	scanf("%d", &ht);
	printf("digite o valor de horas trabalhadas: ");
	scanf("%f", &vp);
	
	s=ht*vp;
	
	printf("funcionarios: %s\n", nome);
	printf("Numero de matricula: %d\n", mt);
	printf("Horas trabalhadas: %d\n", ht);
	printf("valor por hora: %.2f\n", vp);
	printf("----------------------------------\n");
	printf("Salario: %.2f\n", s);
		
	return 0;
}
