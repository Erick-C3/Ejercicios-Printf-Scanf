#include <stdio.h>

const int CANT_MESES = 12; 



// el costo se calcula para 1 año

int main(){

	int cantMascotas = 0;
	float pesoBolsa = 0;
	float costoBolsa = 0;


	printf("Ingrese cantidad de mascotas\n");
	// formato para el tipo de dato entero: %i
	scanf("%i", &cantMascotas);

	printf("Ingrese el peso de la bolsa en kg\n");
	// formato para el tipo de dato real: %f
	scanf("%f", &pesoBolsa);

	//printf("cantMascotas: %i y pesoBolsa: %.2f \n", cantMascotas, pesoBolsa );

	printf("Ingrese precio de la bolsa\n");
	scanf("%f", &costoBolsa);

	//printf("cantMascotas: %i, pesoBolsa: %.2f y costoBolsa: %.1f \n", cantMascotas, pesoBolsa, costoBolsa );


	printf("Con una bolsa de Pedigree de %.2f kg ", pesoBolsa);
	printf("para %i mascotas ", cantMascotas);
	printf("se gasta en un anio: %.1f $\n", costoBolsa * CANT_MESES * cantMascotas );

	

	return 0;
}