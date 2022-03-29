#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

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
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Cargar desde el teclado una pila DADA con 5 elementos.
                //Pasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.
                Pila dada1;
                inicpila(&dada1);
                leer(&dada1);
                leer(&dada1);
                leer(&dada1);
                leer(&dada1);
                leer(&dada1);
                Pila aux11;
                inicpila(&aux11);
                apilar(&aux11,desapilar(&dada1));
                apilar(&aux11,desapilar(&dada1));
                apilar(&aux11,desapilar(&dada1));
                mostrar(&aux11);
                Pila aux21;
                inicpila(&aux21);
                apilar(&aux21,desapilar(&dada1));
                apilar(&aux21,desapilar(&dada1));
                mostrar(&aux21);
            }
            break;
            case 2:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
                //Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.
                int continuar2;
                Pila origen2;
                inicpila(&origen2);
                Pila destino2;
                inicpila(&destino2);
                do
                {
                    leer(&origen2);
                    printf("Desea continuar?\n1 = SI\n0 = NO\n");
                    scanf("%i",&continuar2);
                }
                while(continuar2!=0);
                mostrar(&origen2);
                while(!pilavacia(&origen2))
                {
                    apilar(&destino2,desapilar(&origen2));
                }
                mostrar(&destino2);
            }
            break;
            case 3:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.
                int continuar3;
                Pila dada3;
                inicpila(&dada3);
                Pila distintos3;
                inicpila(&distintos3);
                do
                {
                    leer(&dada3);
                    if(tope(&dada3)!=8)
                    {
                        apilar(&distintos3,tope(&dada3));
                    }
                    printf("\nDesea continuar?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar3);
                    printf("\n");
                }
                while(continuar3!=0);
                printf("\nLa pila cargada por el usuario es: \n");
                mostrar(&dada3);
                printf("La pila cargada por el usuario sin los 8s es: \n");
                mostrar(&distintos3);
            }
            break;
            case 4:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
                //Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.
                int continuar4;
                Pila origen4;
                inicpila(&origen4);
                Pila destino4;
                inicpila(&destino4);
                do
                {
                    leer(&origen4);
                    apilar(&destino4,tope(&origen4));
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar4);
                    printf("\n");
                }
                while(continuar4!=0);
                printf("\nLa pila cargada por el usuario es: \n");
                mostrar(&origen4);
                printf("La copia de la pila cargada por el usuario es: \n");
                mostrar(&destino4);
            }
            break;
            case 5:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Cargar desde el teclado la pila DADA.
                //Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella, pero en orden inverso.
                int continuar5;
                Pila dada5;
                inicpila(&dada5);
                Pila aux1_5;
                inicpila(&aux1_5);
                Pila aux2_5;
                inicpila(&aux2_5);
                do
                {
                    leer(&dada5);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar5);
                    printf("\n");
                }
                while(continuar5!=0);
                mostrar(&dada5);
                while(!pilavacia(&dada5))
                {
                    apilar(&aux1_5,desapilar(&dada5));
                }
                while(!pilavacia(&aux1_5))
                {
                    apilar(&aux2_5,desapilar(&aux1_5));
                }
                while(!pilavacia(&aux2_5))
                {
                    apilar(&dada5,desapilar(&aux2_5));
                }
                mostrar(&dada5);
            }
            break;
            case 6:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes elementos en el mismo orden.
                int continuar6;
                Pila dada6;
                inicpila(&dada6);
                Pila aux16;
                inicpila(&aux16);
                Pila aux26;
                inicpila(&aux26);
                do
                {
                    leer(&dada6);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar6);
                    printf("\n");
                }
                while(continuar6!=0);
                mostrar(&dada6);
                apilar(&aux16,desapilar(&dada6));
                while(!pilavacia(&dada6))
                {
                    apilar(&aux26,desapilar(&dada6));
                }
                apilar(&dada6,desapilar(&aux16));
                while(!pilavacia(&aux26))
                {
                    apilar(&dada6,desapilar(&aux26));
                }
                mostrar(&dada6);
            }
            break;
            case 7:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes elementos en el mismo orden.
                int continuar7;
                Pila dada7;
                inicpila(&dada7);
                Pila aux17;
                inicpila(&aux17);
                Pila aux27;
                inicpila(&aux27);
                do
                {
                    leer(&dada7);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar7);
                    printf("\n");
                }
                while(continuar7!=0);
                mostrar(&dada7);
                while(!pilavacia(&dada7))
                {
                    apilar(&aux17,desapilar(&dada7));
                }
                apilar(&aux27,desapilar(&aux17));
                while(!pilavacia(&aux17))
                {
                    apilar(&dada7,desapilar(&aux17));
                }
                apilar(&dada7,desapilar(&aux27));
                mostrar(&dada7);
            }
            break;
            case 8:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.
                int continuar8;
                Pila mazo8;
                inicpila(&mazo8);
                Pila jugador18;
                inicpila(&jugador18);
                Pila jugador28;
                inicpila(&jugador28);
                do
                {
                    leer(&mazo8);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar8);
                    printf("\n");
                }
                while(continuar8!=0);
                printf("Mazo:\n");
                mostrar(&mazo8);
                while(!pilavacia(&mazo8))
                {
                    apilar(&jugador18,desapilar(&mazo8));
                    if(!pilavacia(&mazo8))
                    {
                        apilar(&jugador28,desapilar(&mazo8));
                    }
                }
                printf("Jugador 1:\n");
                mostrar(&jugador18);
                printf("Jugador 2:\n");
                mostrar(&jugador28);
            }
            break;
            case 9:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
                int continuarA9,continuarB9;
                Pila pilaA9;
                inicpila(&pilaA9);
                Pila pilaB9;
                inicpila(&pilaB9);
                do
                {
                    leer(&pilaA9);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuarA9);
                    printf("\n");
                }
                while(continuarA9!=0);
                do
                {
                    leer(&pilaB9);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuarB9);
                    printf("\n");
                }
                while(continuarB9!=0);
        mostrar(&pilaA9);
        mostrar(&pilaB9);
                while(!pilavacia(&pilaA9)&&!pilavacia(&pilaB9))
                {
                    desapilar(&pilaA9);
                    desapilar(&pilaB9);
        mostrar(&pilaA9);
        mostrar(&pilaB9);
                }
                if(!pilavacia(&pilaA9))
                {
                    printf("La pila A tiene mas elementos\n");
                }
                else
                {
                    if(!pilavacia(&pilaB9))
                    {
                        printf("La pila B tiene mas elementos\n");
                    }
                    else
                    {
                        printf("Las pilas tienen la misma cantidad de elementos\n");
                    }
                }
            }
            break;
            case 10:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Comparar las pilas A y B, evaluando si son completamente iguales (en cantidad de elementos, valores que contienen y posición de los mismos).
                //Mostrar por pantalla el resultado.
                int continuarA10,continuarB10;
                Pila pilaA10;
                inicpila(&pilaA10);
                Pila pilaB10;
                inicpila(&pilaB10);
                do
                {
                    leer(&pilaA10);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuarA10);
                    printf("\n");
                }
                while(continuarA10!=0);
                do
                {
                    leer(&pilaB10);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuarB10);
                    printf("\n");
                }
                while(continuarB10!=0);
                while((tope(&pilaA10)==tope(&pilaB10))&&!pilavacia(&pilaA10)&&!pilavacia(&pilaB10))
                {
                    desapilar(&pilaA10);
                    desapilar(&pilaB10);
                }

                if(!pilavacia(&pilaA10)||!pilavacia(&pilaB10))
                {
                    printf("Las pilas no son iguales\n");
                }
                else
                {
                    printf("Las pilas son iguales\n");
                }
            }
            break;
            case 11:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.
                int continuar11,tope11;
                Pila modelo11;
                inicpila(&modelo11);
                Pila dada11;
                inicpila(&dada11);
                Pila aux_11;
                inicpila(&aux_11);
                printf("Ingrese el valor del tope de la pila modelo: ");
                scanf("%i",&tope11);
                printf("\n");
                apilar(&modelo11,tope11);
                do
                {
                    leer(&dada11);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar11);
                    printf("\n");
                }
                while(continuar11!=0);
                printf("El tope de la pila modelo es: %i\n",tope(&modelo11));
                mostrar(&dada11);
                while(!pilavacia(&dada11))
                {
                    if(tope(&dada11)==tope(&modelo11))
                    {
                        desapilar(&dada11);
                    }
                    else
                    {
                        apilar(&aux_11,desapilar(&dada11));
                    }
                }
                while(!pilavacia(&aux_11))
                {
                    apilar(&dada11,desapilar(&aux_11));
                }
                mostrar(&dada11);
            }
            break;
            case 12:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los elementos que existan en MODELO.
                int continuar12,continuar22;
                Pila modelo12;
                inicpila(&modelo12);
                Pila dada12;
                inicpila(&dada12);
                Pila aux_12;
                inicpila(&aux_12);
                Pila modeloAux12;
                inicpila(&modeloAux12);
                printf("Ingrese valores sin repetir para la pila modelo:\n\n");
                do
                {
                    leer(&modelo12);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar22);
                    printf("\n");
                }
                while(continuar22!=0);
                printf("Ingrese los valores de la pila dada:\n\n");
                do
                {
                    leer(&dada12);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar12);
                    printf("\n");
                }
                while(continuar12!=0);
                printf("La pila dada es:\n");
                mostrar(&dada12);
                while(!pilavacia(&dada12))
                {
                    while(!pilavacia(&modelo12))
                    {
                        if(tope(&dada12)==tope(&modelo12))
                        {
                            desapilar(&dada12);
                        }
                        apilar(&modeloAux12,desapilar(&modelo12));
                    }
                    while(!pilavacia(&modeloAux12))
                    {
                        apilar(&modelo12,desapilar(&modeloAux12));
                    }
                    apilar(&aux_12,desapilar(&dada12));
                }
                while(!pilavacia(&aux_12))
                {
                    apilar(&dada12,desapilar(&aux_12));
                }
                printf("La pila dada sin los elementos de la pila modelo es:\n");
                mostrar(&dada12);
            }
            break;
            case 13:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.
                int continuar13,tope13;
                Pila dada13;
                inicpila(&dada13);
                Pila limite13;
                inicpila(&limite13);
                Pila mayores13;
                inicpila(&mayores13);
                Pila menores13;
                inicpila(&menores13);
                Pila mayoresAux13;
                inicpila(&mayoresAux13);
                Pila menoresAux13;
                inicpila(&menoresAux13);
                printf("Ingrese el valor del tope de la pila limite: ");
                scanf("%i",&tope13);
                printf("\n");
                apilar(&limite13,tope13);
                do
                {
                    leer(&dada13);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar13);
                    printf("\n");
                }
                while(continuar13!=0);
                printf("El tope de la pila limite es: %i\n",tope(&limite13));
                mostrar(&dada13);
                while(!pilavacia(&dada13))
                {
                    if(tope(&dada13)<tope(&limite13))
                    {
                        apilar(&menoresAux13,desapilar(&dada13));
                    }
                    else
                    {
                        apilar(&mayoresAux13,desapilar(&dada13));
                    }
                }
                while(!pilavacia(&menoresAux13))
                {
                    apilar(&menores13,desapilar(&menoresAux13));
                }
                while(!pilavacia(&mayoresAux13))
                {
                    apilar(&mayores13,desapilar(&mayoresAux13));
                }
                printf("La pila mayores es:\n");
                mostrar(&mayores13);
                printf("La pila menores es:\n");
                mostrar(&menores13);
            }
            break;
            case 14:
            {
                printf("\nEJERCICIO %i\n\n",ejercicio);
                //Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR.
                int continuar14,par;
                Pila dada14;
                inicpila(&dada14);
                Pila aux14;
                inicpila(&aux14);
                Pila tope14;
                inicpila(&tope14);
                Pila par14;
                inicpila(&par14);
                Pila impar14;
                inicpila(&impar14);
                apilar(&tope14,987);
                do
                {
                    leer(&dada14);
                    printf("\nDesea ingresar un dato?\n1 = SI\n0 = NO\nRespuesta: ");
                    scanf("%i",&continuar14);
                    printf("\n");
                }
                while(continuar14!=0);
                while(!pilavacia(&dada14))
                {
                    if(tope(&aux14)==tope(&tope14))
                    {
                        par=1;
                        apilar(&aux14,desapilar(&dada14));
                    }
                    else
                    {
                        par=0;
                        apilar(&aux14,desapilar(&dada14));
                        apilar(&tope14,tope(&dada14));
                    }
                }
                if(par==1)
                {
                    printf("La pila dada es par\n");
                    apilar(&par14,tope(&aux14));
                    printf("\nLa pila par es:\n");
                    mostrar(&par14);
                }
                else
                {
                    printf("La pila dada es impar\n");
                    apilar(&impar14,tope(&aux14));
                    printf("\nLa pila impar es:\n");
                    mostrar(&impar14);
                }
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
    printf("\nVersion 1.6\n");
    return 0;
}
