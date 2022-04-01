#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

//VER NO ELIMINAR DATOS
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();
void ejercicio11();
void ejercicio12();
void ejercicio13();
void ejercicio14();
void ejercicio15();
void ejercicio16();
void ejercicio17();
void ejercicio18();
int main()
{
    int ejercicio;
    do
    {
        do
        {
            printf("EJERCICIOS                                                 INGRESAR");
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
        if(ejercicio!=0)
        {
            printf("\nEJERCICIO %i\n\n",ejercicio);
        }
        switch(ejercicio)
        {
            case 1:
            {
                ejercicio1();
            }
            break;
            case 2:
            {
                ejercicio2();
            }
            break;
            case 3:
            {
                ejercicio3();
            }
            break;
            case 4:
            {
                ejercicio4();
            }
            break;
            case 5:
            {
                ejercicio5();
            }
            break;
            case 6:
            {
                ejercicio6();
            }
            break;
            case 7:
            {
                ejercicio7();
            }
            break;
            case 8:
            {
                ejercicio8();
            }
            break;
            case 9:
            {
                ejercicio9();
            }
            break;
            case 10:
            {
                ejercicio10();
            }
            break;
            case 11:
            {
                ejercicio11();
            }
            break;
            case 12:
            {
                ejercicio12();
            }
            break;
            case 13:
            {
                ejercicio13();
            }
            break;
            case 14:
            {
                ejercicio14();
            }
            break;
            case 15:
            {
                ejercicio15();
            }
            break;
            case 16:
            {
                ejercicio16();
            }
            break;
            case 17:
            {
                ejercicio17();
            }
            break;
            case 18:
            {
                ejercicio18();
            }
            break;
        }
    }
    while(ejercicio!=0);
    printf("\nTP1 TERMINADO\n");
    printf("\nVersion 2.1\n");
    return 0;
}
void ejercicio1()
{
    //Cargar desde el teclado una pila DADA con 5 elementos.
    //Pasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.
    Pila dada;
    inicpila(&dada);
    printf("Ingrese los elementos de la pila:\n\n");
    leer(&dada);
    printf("\n");
    leer(&dada);
    printf("\n");
    leer(&dada);
    printf("\n");
    leer(&dada);
    printf("\n");
    leer(&dada);
    printf("\n");
    Pila aux1;
    inicpila(&aux1);
    apilar(&aux1,desapilar(&dada));
    apilar(&aux1,desapilar(&dada));
    apilar(&aux1,desapilar(&dada));
    printf("La pila aux1 es:");
    mostrar(&aux1);
    Pila aux2;
    inicpila(&aux2);
    apilar(&aux2,desapilar(&dada));
    apilar(&aux2,desapilar(&dada));
    printf("La pila aux2 es:");
    mostrar(&aux2);
}
void ejercicio2()
{
    //Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
    //Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.
    char continuar;
    Pila origen,destino;
    inicpila(&origen);
    inicpila(&destino);
    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&origen);
        printf("Desea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("La pila origen es:");
    mostrar(&origen);
    while(!pilavacia(&origen))
    {
        apilar(&destino,desapilar(&origen));
    }
    printf("La pila destino es:");
    mostrar(&destino);
}
void ejercicio3()
{
    //Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.
    char continuar;
    Pila dada,distintos,aux;
    inicpila(&dada);
    inicpila(&distintos);
    inicpila(&aux);

    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&dada);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("La pila cargada por el usuario es:");
    mostrar(&dada);
    while(!pilavacia(&dada))
    {
        if(tope(&dada)!=8)
        {
            apilar(&distintos,desapilar(&dada));
        }
        else
        {
            apilar(&aux,desapilar(&dada));
        }
    }
    printf("La pila cargada por el usuario sin los 8 es:");
    mostrar(&distintos);
}
void ejercicio4()
{
    //Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
    //Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.
    char continuar;
    Pila origen,destino,aux;
    inicpila(&origen);
    inicpila(&destino);
    inicpila(&aux);
    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&origen);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("La pila cargada por el usuario es:");
    mostrar(&origen);
    while(!pilavacia(&origen))
    {
        apilar(&aux,desapilar(&origen));
    }
    while(!pilavacia(&aux))
    {
        apilar(&destino,desapilar(&aux));
    }
    printf("La copia de la pila cargada por el usuario es:");
    mostrar(&destino);
}
void ejercicio5()
{
    //Cargar desde el teclado la pila DADA.
    //Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella, pero en orden inverso.
    char continuar;
    Pila dada,aux1,aux2;
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);
    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&dada);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("La pila dada por el usuario es:");
    mostrar(&dada);
    while(!pilavacia(&dada))
    {
        apilar(&aux1,desapilar(&dada));
    }
    while(!pilavacia(&aux1))
    {
        apilar(&aux2,desapilar(&aux1));
    }
    while(!pilavacia(&aux2))
    {
        apilar(&dada,desapilar(&aux2));
    }
    printf("La pila dada por el usuario en orden inverso es:");
    mostrar(&dada);
}
void ejercicio6()
{
    //Pasar el primer elemento (tope) de la pila DADA a su última posición (base), dejando los restantes elementos en el mismo orden.
    char continuar;
    Pila dada,aux1,aux2;
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);
    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&dada);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("La pila dada por el usuario es:");
    mostrar(&dada);
    apilar(&aux1,desapilar(&dada));
    while(!pilavacia(&dada))
    {
        apilar(&aux2,desapilar(&dada));
    }
    apilar(&dada,desapilar(&aux1));
    while(!pilavacia(&aux2))
    {
        apilar(&dada,desapilar(&aux2));
    }
    printf("La pila dada por el usuario pasando el tope a la base es:");
    mostrar(&dada);
}
void ejercicio7()
{
    //Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes elementos en el mismo orden.
    char continuar;
    Pila dada,aux1,aux2;
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);
    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&dada);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("La pila dada por el usuario es:");
    mostrar(&dada);
    while(!pilavacia(&dada))
    {
        apilar(&aux1,desapilar(&dada));
    }
    apilar(&aux2,desapilar(&aux1));
    while(!pilavacia(&aux1))
    {
        apilar(&dada,desapilar(&aux1));
    }
    apilar(&dada,desapilar(&aux2));
    printf("La pila dada por el usuario pasando la base a el tope es:");
    mostrar(&dada);
}
void ejercicio8()
{
    //Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.
    char continuar;
    Pila mazo,jugador1,jugador2;
    inicpila(&mazo);
    inicpila(&jugador1);
    inicpila(&jugador2);
    printf("Ingrese las cartas del mazo:\n\n");
    do
    {
        leer(&mazo);
        printf("\nDesea ingresar otra carta?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("Mazo:\n");
    mostrar(&mazo);
    while(!pilavacia(&mazo))
    {
        apilar(&jugador1,desapilar(&mazo));
        if(!pilavacia(&mazo))
        {
            apilar(&jugador2,desapilar(&mazo));
        }
    }
    printf("Jugador 1:");
    mostrar(&jugador1);
    printf("Jugador 2:");
    mostrar(&jugador2);
}
void ejercicio9()
{
    //Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
    char continuarA,continuarB;
    Pila pilaA,pilaB,auxA,auxB;
    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&auxA);
    inicpila(&auxB);
    printf("Ingrese los elementos de la pila A:\n\n");
    do
    {
        leer(&pilaA);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuarA);
        printf("\n");
    }
    while(continuarA!='n');
    printf("Ingrese los elementos de la pila B:\n\n");
    do
    {
        leer(&pilaB);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuarB);
        printf("\n");
    }
    while(continuarB!='n');
    printf("La pila A es:");
    mostrar(&pilaA);
    printf("La pila B es:");
    mostrar(&pilaB);
    while(!pilavacia(&pilaA)&&!pilavacia(&pilaB))
    {
        apilar(&auxA,desapilar(&pilaA));
        apilar(&auxB,desapilar(&pilaB));
    }
    if(!pilavacia(&pilaA))
    {
        printf("La pila A tiene mas elementos\n\n");
    }
    else
    {
        if(!pilavacia(&pilaB))
        {
            printf("La pila B tiene mas elementos\n\n");
        }
        else
        {
            printf("Las pilas tienen la misma cantidad de elementos\n\n");
        }
    }
}
void ejercicio10()
{
    //Comparar las pilas A y B, evaluando si son completamente iguales (en cantidad de elementos, valores que contienen y posición de los mismos).
    //Mostrar por pantalla el resultado.
    char continuarA,continuarB;
    Pila pilaA,pilaB,auxA,auxB;
    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&auxA);
    inicpila(&auxB);
    printf("Ingrese los elementos de la pila A:\n\n");
    do
    {
        leer(&pilaA);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuarA);
        printf("\n");
    }
    while(continuarA!='n');
    printf("Ingrese los elementos de la pila B:\n\n");
    do
    {
        leer(&pilaB);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuarB);
        printf("\n");
    }
    while(continuarB!='n');
    while((tope(&pilaA)==tope(&pilaB))&&!pilavacia(&pilaA)&&!pilavacia(&pilaB))
    {
        apilar(&auxA,desapilar(&pilaA));
        apilar(&auxB,desapilar(&pilaB));
    }
    if(!pilavacia(&pilaA)||!pilavacia(&pilaB))
    {
        printf("Las pilas no son iguales\n\n");
    }
    else
    {
        printf("Las pilas son iguales\n\n");
    }
}
void ejercicio11()
{
    //Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.
    char continuar;
    int ultimo;
    Pila modelo,dada,aux1,aux2;
    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);
    printf("Ingrese el valor del tope de la pila modelo: ");
    scanf("%i",&ultimo);
    printf("\n");
    apilar(&modelo,ultimo);
    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&dada);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("El tope de la pila modelo es: %i\n\n",tope(&modelo));
    printf("La pila dada por el usuario es:");
    mostrar(&dada);
    while(!pilavacia(&dada))
    {
        if(tope(&dada)==tope(&modelo))
        {
            apilar(&aux2,desapilar(&dada));
        }
        else
        {
            apilar(&aux1,desapilar(&dada));
        }
    }
    while(!pilavacia(&aux1))
    {
        apilar(&dada,desapilar(&aux1));
    }
    printf("La pila dada por el usuario sin los elementos iguales al valor del tope de la pila modelo es: ");
    mostrar(&dada);
}
void ejercicio12()
{
    //Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los elementos que existan en MODELO.
    char continuar1,continuar2;
    Pila modelo,dada,aux,modeloAux,eliminados;
    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&modeloAux);
    inicpila(&eliminados);
    printf("Ingrese los elementos de la pila modelo:\n\n");
    do
    {
        leer(&modelo);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar2);
        printf("\n");
    }
    while(continuar2!='n');
    printf("Ingrese los elementos de la pila dada:\n\n");
    do
    {
        leer(&dada);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar1);
        printf("\n");
    }
    while(continuar1!='n');
    printf("La pila modelo es:");
    mostrar(&modelo);
    printf("La pila dada es:");
    mostrar(&dada);
    while(!pilavacia(&modelo))
    {
        while(!pilavacia(&dada))
        {
            if(tope(&dada)==tope(&modelo))
            {
                apilar(&eliminados,desapilar(&dada));
            }
            else
            {
                apilar(&aux,desapilar(&dada));
            }
        }
        apilar(&modeloAux,desapilar(&modelo));
        while(!pilavacia(&aux))
        {
            apilar(&dada,desapilar(&aux));
        }
    }
    printf("La pila dada sin los elementos de la pila modelo es:");
    mostrar(&dada);
}
void ejercicio13()
{
    //Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores o iguales que el tope de LIMITE a la pila MAYORES, y los elementos que sean menores a la pila MENORES.
    char continuar;
    int ultimo;
    Pila dada,limite,mayores,menores,mayoresAux,menoresAux;
    inicpila(&dada);
    inicpila(&limite);
    inicpila(&mayores);
    inicpila(&menores);
    inicpila(&mayoresAux);
    inicpila(&menoresAux);
    printf("Ingrese el valor del tope de la pila limite: ");
    scanf("%i",&ultimo);
    printf("\n");
    apilar(&limite,ultimo);
    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&dada);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    printf("El tope de la pila limite es: %i\n\n",tope(&limite));
    printf("La pila dada por el usuario es:");
    mostrar(&dada);
    while(!pilavacia(&dada))
    {
        if(tope(&dada)<tope(&limite))
        {
            apilar(&menoresAux,desapilar(&dada));
        }
        else
        {
            apilar(&mayoresAux,desapilar(&dada));
        }
    }
    while(!pilavacia(&menoresAux))
    {
        apilar(&menores,desapilar(&menoresAux));
    }
    while(!pilavacia(&mayoresAux))
    {
        apilar(&mayores,desapilar(&mayoresAux));
    }
    printf("La pila con los elementos mayores o igueales al tope de la pila limite es:");
    mostrar(&mayores);
    printf("La pila con los elementos menores al tope de la pila limite es:");
    mostrar(&menores);
}
void ejercicio14()
{
    //Determinar si la cantidad de elementos de la pila DADA es par. Si es par, pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR.
    char continuar;
    int paridad;
    Pila dada,aux,comparacion,par,impar;
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&comparacion);
    inicpila(&par);
    inicpila(&impar);
    apilar(&comparacion,-98929);
    //Numero elegido arbitrariamente que es probable que el usuario no elija
    printf("Ingrese los elementos de la pila:\n\n");
    do
    {
        leer(&dada);
        printf("\nDesea ingresar otro elemento?\ns = SI\nn = NO\nRespuesta: ");
        fflush(stdin);
        scanf("%c",&continuar);
        printf("\n");
    }
    while(continuar!='n');
    while(!pilavacia(&dada))
    {
        if(tope(&aux)==tope(&comparacion))
        {
            paridad=1;
            apilar(&aux,desapilar(&dada));
        }
        else
        {
            paridad=0;
            apilar(&aux,desapilar(&dada));
            apilar(&comparacion,tope(&dada));
        }
    }
    if(paridad==1)
    {
        printf("La pila dada es par\n");
        apilar(&par,tope(&aux));
        printf("\nLa pila par es:");
        mostrar(&par);
    }
    else
    {
        printf("La pila dada es impar:\n");
        apilar(&impar,tope(&aux));
        printf("\nLa pila impar es:");
        mostrar(&impar);
    }
}
void ejercicio15()
{
    //¿Cuál es la condición del siguiente ciclo? ¿Cuándo finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas):
    //IMAGEN
    printf("*IMAGEN*\n\nwhile(!pilavacia(&Pila1))\n{\n    apilar(&Pila2, desapilar(&Descarte))\n}\n\n*FIN IMAGEN*\n");
    //IMAGEN
    printf("\nLa condicion es si la pila Pila1 esta vacia o no\n");
    printf("\nEl ciclo no termina porque !pilavacia(&Pila1) no se altera nunca dentro del ciclo\n");
}
void ejercicio16()
{
    //¿Que realiza el siguiente código escrito en lenguaje C (Pila1, Aux y Result son pilas):
    //IMAGEN
    printf("*IMAGEN*\n\nwhile (!pilavacia(&Pila1))\n{\n    if (tope(&Pila1)==5)\n    {\n        apilar (&Aux, desapilar(&Pila1));\n        apilar (&Result, desapilar(&Aux));\n    }\n}\n\n*FIN IMAGEN*\n");
    //IMAGEN
    printf("\nMientras la Pila1 no este vacia, dentro del ciclo while se evalua si el tope de Pila1 es igual a 5.\n");
    printf("\nSi es verdadero, desapila Pila1 y apila en Aux; y luego desapila Aux y apila en Result; y termina el ciclo.\n");
    printf("\nSi es falso, termina el ciclo.\n");
    printf("\nSe vuelve a ejecutar el ciclo.\n");
    printf("\nSalvo que todos los elementos de la Pila1 sean 5, en algun momento el tope sera un numero distinto a 5.\n");
    printf("\nAsi, el if no entrara al verdadero, por lo que nunca se desapilara la Pila1, y el tope siempre sera distinto.\n");
    printf("\nAlli, el ciclo while se ejecutara infinitamente puesto que la Pila1 nunca se vaciara.\n");
}
void ejercicio17()
{
    //Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos elementos que preceden al valor 5 (elementos entre el tope y el valor 5).
    //No se asegura que exista algún valor 5”, se realizó el siguiente programa:

    // este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos que preceden el valor 5

    //IMAGEN

    //a. ¿Resuelve el problema planteado?
    //b. ¿Cuáles son los errores que encuentra?
    //c. Reescribir el código para que resuelva adecuadamente el problema planteado.
    //d. Indicar los componentes del programa.


}
void ejercicio18()
{
    //Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):

    //IMAGEN

    //a. ¿Cuál es la condición del ciclo? Explique con sus palabras
    //b. ¿Cuales son los posibles estados de ambas pilas al finalizar el ciclo?


}



