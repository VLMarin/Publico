#include <stdio.h> 

int main()
{
 // Zona de Declaración de Variables del Programa principal
 int numero;
 printf ("Escribe un numero: \n");
 scanf ("%d",&numero);
 if ((numero %2) ==0)
 printf ("El numero es par\n");
 else
 printf ("El numero es impar\n");
 return 0; // Valor de retorno al S.O.
} 
