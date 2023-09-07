#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float Vin = 0.0, VLed = 0.0, ILed = 0.0, R = 0.0;

int main(int argc, char *argv[]) {
	
	printf(" LED CALC 		v1.0 \n\n");
	printf(" Autor: Developer Bruno Henrique Nunes \n\n");
	
	printf("Digite o Valor de Vin (Volts): ");
	scanf("%f",&Vin);
	printf("\n\n");
	
	printf("Digite o Valor de VLed (Volts): ");
	scanf("%f",&VLed);
	printf("\n\n");
	
	printf("Digite o Valor de ILed (Ampere): ");
	scanf("%f",&ILed);
	printf("\n\n");
	
	R = (Vin-VLed)/ILed;
	
	printf("Vin = %.2f\n\n",Vin);
	printf("VLed = %.2f\n\n",VLed);
	printf("ILed = %.2f\n\n",ILed);
	printf("A Resistencia necessaria para o LED e de  %.2f Ohms",R);	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
