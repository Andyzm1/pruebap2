#include <stdio.h>
#include <string.h>
/*funciones de movimiento y comprobacion*/
int maze[5][5]={
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};
int i=5, j=5;
int imprimirmat(){
    int fila, columna;
    char x;
    for (fila = 0; fila < i; fila++) {
        for (columna = 0; columna < j; columna++) {
            if (maze[0][0]==0)
            {
                printf("x", maze[0][0]);
            }
            
            printf("%d", maze[fila][columna]);
        }
        printf("\n");
    }
    return 0;
}   