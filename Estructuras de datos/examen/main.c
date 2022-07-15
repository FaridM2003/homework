#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int main(){
    int alumnos,cont=0,media=0,varianza=0,moda;
    printf("Cuantos alumnos: " );
    scanf("%d",&alumnos);
    int calificaciones[alumnos];
    for (int i=0;i<alumnos;i++){
        calificaciones[i] = (rand() % 10) + 3;
        printf("Alumno %d: %d\n",i+1,calificaciones[i]);
        cont += calificaciones[i];
    }printf("\n");

    media = cont/alumnos;

    float desviacion  =0;
    for(int i = 0;i<alumnos;i++){
        varianza += pow((calificaciones[i]-media),2);
    }
    varianza =  varianza/alumnos-1;
    desviacion = sqrt(varianza);
    printf("Media aritmetica: %d\n",media);
    printf("varianza: %d\n",varianza);
    printf("desviacion: %.1f\n",desviacion);
    int contador[alumnos];
    for(int i=0; i<alumnos; i++){
            contador[i]=0;
            for(int j=0; j<alumnos; j++){
                if(calificaciones[i]==calificaciones[j])
                contador[i]++;
                }}
    int ar= 0;
    for(int i=0; i<alumnos; i++){
            for(int j=0; j<alumnos; j++){
        if (contador[i]>contador[j]){
            ar= i;
        }
            }
    }
    printf("moda:%d",calificaciones[ar]);

    return 0;
}
