#include <stdio.h>
#include <math.h>

int main(){
	float bs,ex,rs;
	printf("Digite o valor da base: ");
	scanf("%f", &bs);
	printf("Digite o valor do expoente: ");
	scanf("%f", &ex);
	
	rs=pow(bs,ex);
	
	
	printf("resultado: %f", rs);
	
}
