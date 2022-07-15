#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
struct almacen{
char provedor[50];
char ciudad[50];
int NumArt;
} pop[];

void ImprimirBasedeDatos(int);
int main() {
    int dato;
    printf("Limites de datos: ");
    scanf("%d",&dato);
     struct almacen pop[dato];

    for(int i=0;i < dato; i++){
       printf("Ponga el nombre del proveedor %d: ",i);
       scanf("%s",&pop[i].provedor);
        printf("Pon el nombre de la ciudad %d: ",i);
        scanf("%s",&pop[i].ciudad);
        printf("Pon el numero de articulos %d: ",i);
        scanf("%d",&pop[i].NumArt);
    } printf("\n");

    printf("Base de datos:\n");
    for(int i = 0 ; i < dato; i++){
        printf("%d: ",i);
        printf("%s: ", pop[i].provedor);
        printf("%s: ", pop[i].ciudad);
        printf("%d articulos\n", pop[i].NumArt);
    }
    bool activo=true;
    int a,b;
    while (activo){
    printf("\nQue quieres hacer: \n");
    printf("Informe de provedor[1]\n");
    printf("Actualizar nombre [2]\n");
    printf("Dar de baja[3]\n");
    printf("Terminar tarea[4]\n");
    printf("Si pones un dato que no, se apagara\n");
    printf("Dato: ");
    scanf("%d",&a);
    printf("\n");

    switch(a){
    case 1:
        printf("Mostrando datos de la base de dato: ");
        ImprimirBasedeDatos(dato);
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        activo = false;
        break;
    default:
        activo =false;
    }
    }return 0;

}

void ImprimirBasedeDatos(int limite){
    int datos;
    printf("Que dato necesita exactamente[numero]: ");
    scanf("%d",&datos);
        printf("%d: ",datos);
        printf("%s: ", pop[datos].provedor);
        printf("%s: ", pop[datos].ciudad);
        printf("%d articulos\n\n", pop[datos].NumArt);

}
