#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float media, n1, n2;
	
	printf("Calcular média IFCE\n");
	
	printf("Nota da N1: ");
	scanf("%f", &n1);
	
	printf("Nota da N2: ");
	scanf("%f", &n2);
	
	media = (n1*2 + n2*3)/5;
	
	printf("Média Final: %1.3f", media);
	
	system("pause");
	return 0;
}
