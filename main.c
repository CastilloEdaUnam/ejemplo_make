#include <stdio.h>
#include "conversion.h"
#include "impresion.h"
int main (void) {
   int kms;
   float millas;
   printf("\n\nConversión de kilómetros a millas\n");
   printf("---------------------------------\n\n");
   printf("Introduzca la cant. de kms a convertir: ");
   scanf("%i", &kms);
   millas = convertir(kms);
   imprimir_resultado(kms, millas);
   printf("\n\nAdios!\n\n");
   return 0;
}
