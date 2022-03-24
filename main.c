#include <stdio.h>
#include <stdlib.h>

int ps();
int pcss();
int pcsc();
int pcr();
int main()
{
    int ejercicio;
    do
    {
        do
        {
            printf("\nEJERCICIOS                                                 INGRESAR");
            printf("\nEJERCICIO 1  ...................................................  1");
            printf("\nEJERCICIO 2  ...................................................  2");
            printf("\nEJERCICIO 3  ...................................................  3");
            printf("\nEJERCICIO 4  ...................................................  4");
            printf("\nEJERCICIO 5  ...................................................  5");
            printf("\nEJERCICIO 6  ...................................................  6");
            printf("\nEJERCICIO 7  ...................................................  7");
            printf("\nEJERCICIO 8  ...................................................  8");
            printf("\nEJERCICIO 9  ...................................................  9");
            printf("\nEJERCICIO 10 ................................................... 10");
            printf("\nEJERCICIO 11 ................................................... 11");
            printf("\nEJERCICIO 12 ................................................... 12");
            printf("\nEJERCICIO 13 ................................................... 13");
            printf("\nEJERCICIO 14 ................................................... 14");
            printf("\nEJERCICIO 15 ................................................... 15");
            printf("\nEJERCICIO 16 ................................................... 16");
            printf("\nEJERCICIO 17 ................................................... 17");
            printf("\nEJERCICIO 18 ................................................... 18\n");
            printf("\nIngrese el ejercicio: ");
            scanf("%i",&ejercicio);
        }
        while(ejercicio!=1 && ejercicio!=2 && ejercicio!=3 && ejercicio!=4 && ejercicio!=5 && ejercicio!=6 && ejercicio!=7 && ejercicio!=8 && ejercicio!=9 && ejercicio!=10 && ejercicio!=11 && ejercicio!=12 && ejercicio!=13 && ejercicio!=14 && ejercicio!=15 && ejercicio!=16 && ejercicio!=17 && ejercicio!=18 && ejercicio!=0);
        switch(ejercicio)
        {
            case 1:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Cargar desde el teclado una pila DADA con 5 elementos.
                //Pasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.

            }
            break;
            case 2:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
                //Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.

            }
            break;
            case 3:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.
            }
            break;
            case 4:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
                //Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.
            }
            break;
            case 5:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Cargar desde el teclado la pila DADA.
                //Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella, pero en orden inverso.
            }
            break;
            case 6:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes elementos en el mismo orden.
            }
            break;
            case 7:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes elementos en el mismo orden.
            }
            break;
            case 8:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.
            }
            break;
            case 9:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
            }
            break;
            case 10:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Comparar las pilas A y B, evaluando si son completamente iguales (en cantidad de elementos, valores que contienen y posición de los mismos).
                //Mostrar por pantalla el resultado.
            }
            break;
            case 11:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.
            }
            break;
            case 12:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los elementos que existan en MODELO.
            }
            break;
            case 13:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.
            }
            break;
            case 14:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR.
            }
            break;
            case 15:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //¿Cuál es la condición del siguiente ciclo? ¿Cuándo finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas):

                //IMAGEN
            }
            break;
            case 16:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //¿Que realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas):
                //IMAGEN
            }
            break;
            case 17:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos elementos que preceden al valor 5 (elementos entre el tope y el valor 5).
                //No se asegura que exista algún valor 5”, se realizó el siguiente programa:

                // este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos que preceden el valor 5

                //IMAGEN

                //a. ¿Resuelve el problema planteado?
                //b. ¿Cuáles son los errores que encuentra?
                //c. Reescribir el código para que resuelva adecuadamente el problema planteado.
                //d. Indicar los componentes del programa.

            }
            break;
            case 18:
            {
                printf("\nEJERCICIO %i\n",ejercicio);
                //Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):

                //IMAGEN

                //a. ¿Cuál es la condición del ciclo? Explique con sus palabras
                //b. ¿Cuales son los posibles estados de ambas pilas al finalizar el ciclo?

            }
            break;
        }
    }
    while(ejercicio!=0);
    printf("\nTP1 TERMINADO\n");
    printf("\nVersion 1.2\n");
    return 0;
}
