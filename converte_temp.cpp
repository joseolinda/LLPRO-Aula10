#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float tempc, tempf;
	
	printf("Converter Celcius em Fahrenheit\n");
	printf("Temperatura em Celcius: ");
	scanf("%f", &tempc);
	
	tempf = tempc * 1.8 + 32;
	printf("Resultado: %2.2f °F\n\n\n", tempf);
	
	system("pause");
	return 0;
}
