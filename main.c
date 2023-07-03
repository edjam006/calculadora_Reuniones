#include <stdio.h>
#include <stdlib.h>

int main (void){
     int anio, mes, dia, a, y, m, d, menu;
     
printf("Bienvenidos queridos trabajadores, el siguiente programa es para que conozcan de manera automatica las fechas de las reuniones, las cuales seran el primer lunes de cada trimestre.\n La primera opcion les solicita ingresar el año del cual quieren conocer las reuniones.\n La segunda opcion puede ser seleccionada cuando ya no tengan ninguna consulta.\n");
do {
    
    printf("1. Calcular las fechas de las reuniones trimestrales de todo el año\n");
    printf("2. Salir\n");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        mes= 1;
        do {
        printf("Ingrese el año\n");
        scanf("%d", &anio);
        if (anio <= 0){
            printf ("El año ingresado no es correcto\n");
        }
        } while (anio <= 0);
        do {
            for(dia = 1; dia <= 7; dia++) { 
                a = (14 - mes) / 12;
                y = anio - a;
                m = mes + 12 * a - 2;
                d = (dia + y + y/4 - y/100 + y/400 + (31*m)/12) % 7;
                if(d == 1) { 
                    printf("La reunion es el: 0%d/%0d/%d\n", dia, mes, anio);
                    break;
                }
            }
                mes += 3;
        }while (mes <= 10);
        break;
    case 2:
        printf("Saliendo, esperamos haberte ayudado\n");
        break;
    default:
        printf("La opcion ingresada no es correcta\n");
        break;
    }
    
} while (menu != 2);
    return 0;
}





