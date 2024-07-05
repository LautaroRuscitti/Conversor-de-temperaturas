/*Crea un convertidor donde puedas pasar de grados a Fahrenheit*/
#include <stdio.h>
#include <stdlib.h>

void grados_A_Fahrenheit();
void Fahrenheit_A_grados();
void saludo();
void main()
{
    int opcion;
    do
    {
    printf("\n                       **Menu**           \n");
    printf("\n1:Pasar de grados celcius a Fahrenheit.");
    printf("\n2:Pasar de Fahrenheit a grados celcius.");
    printf("\nIngrese la opcion que desee: ");
    scanf("%d", &opcion);
    if (opcion == 1)
    {
        grados_A_Fahrenheit();
    }
    else if (opcion == 2)
    {
        Fahrenheit_A_grados();
    }
    else
        printf("\nOpcion equivocada.");
    } while (opcion != 1 && opcion !=2);
}

void grados_A_Fahrenheit()
{
    float grados;
    float Fahrenheit;
    printf("\nIngrese los grados que desee convertir: ");
    scanf("%f", &grados);
    Fahrenheit = grados * 9/5 + 32;
    printf("\n%0.1f == %0.1f",grados, Fahrenheit);
}

void Fahrenheit_A_grados()
{
    float Fahrenheit, grados;
    printf("\nIngrese los Fahrenheit que desea convertir: ");
    scanf("%f", &Fahrenheit);
    grados = (Fahrenheit -32) * 5/9;
    printf("\n%0.1f == %0.1f", Fahrenheit, grados);
}

void saludo()
{
    printf("Gracias por usar nuestro programa.");
}
