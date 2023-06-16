#include <stdio.h>
#include <stdlib.h>
#include "maze.h"

int opciones(int op){
    switch (op)
    {
    case 1:
        imprimirmat();
        break;
    case 2:
        printf("Realizado por:\n Andres Zurita\n");
        break;
    case 3:
        printf("Gracias por jugar\n");
        exit(0);
    default:
        printf("Opcion invalida\n");
        break;
    }
}
int menu(){
    int op;
    while (op!=0)
    {
    printf("Bienvenido al juego del laberinto!\n 1. Jugar\n 2. Creditos\n 3. Salir\n");
    scanf("%d", &op);
    opciones(op);
    }    
    return 0;
}
int main(void){
    menu();    
}