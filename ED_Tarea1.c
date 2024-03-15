#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_personaje{
char nombre[50];
int popularidad;
struct s_personaje *siguiente;
} *PERSONAJE;

typedef struct s_lista{
PERSONAJE primero;
int total;
} LISTA;

LISTA creaLista(){
    LISTA lst;
    lst.primero = NULL;
    lst.total = 0;
    return lst;
}

PERSONAJE crear(char *nombre, int popularidad){
    PERSONAJE pj;
    pj.nombre = nombre;
    pj.popularidad = popularidad;
    return pj;
}

LISTA agregarALista(LISTA lista, PERSONAJE nuevo){
    LISTA aux = lista;
    if(aux == NULL){
        lista.primero = nuevo;
        lista.cantidad += 1;
        return lista;
    }
    while(aux->siguiente != NULL){
        aux = aux->siguiente;
    }
    aux->siguiente = nuevo;
    lista.cantidad += 1;
    return lista;
}

void verPersonajes(LISTA lista){
    PERSONAJE aux = lista.primero;
    printf("Personajes: ");
    while(aux != null){
        printf("%s, ", aux->)
    }
}

/* Elimina un personaje de la lista, dada la ubicacion x (partiendo desde 1) */
LISTA elimina(LISTA lst, int x);
/* Elimina un personaje, dado su nombre */
LISTA eliminaPorNombre(LISTA lst, char *victima);
/* Crea y retorna una nueva lista intercambiando el orden de 2 personajes (ubicados en la posicion x LISTA intercambio(LISTA lista, int x, int y);
/* Inserta los elementos de lst_b en la lst_a luego de la ubicacion x */
LISTA insertar(LISTA lst_a, LISTA lst_b, int x);
/*Genera una lista considerando todos los personajes de lst cuya popularidad se encuentre entre los valores minimo y maximo*/
LISTA seleccion(LISTA lst, int minimo, int maximo);