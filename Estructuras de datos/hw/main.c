#include<stdio.h>
#define lim 20
int main(){
  int arreglo[lim];

  printf("Arreglo desordenado:\n");
  for(int i=0;i<lim;i++){
     arreglo[i]=rand()%20+1;
     printf("%d ",arreglo[i]);
    }printf("\n");


for(int i=0;i<lim;i++){
 for(int j=i+1;j<lim;j++){
   if(arreglo[i]>arreglo[j]){
        int a=arreglo[i];
        arreglo[i]=arreglo[j];
        arreglo[j]=a;
        }
        }
}

int i,j,k,number=lim;
for(i=0; i < number;i++){
    for(j= i+1; j < number;j++){
        if(arreglo[i]== arreglo[j]){
            for(k=j;k < number;k++){
            arreglo[k]=arreglo[k+1];
            }
                    j--;
                    number--;
        }
    }
}
printf("Arreglo sin repetidos:\n");
        for(int i=0;i<number;i++){
            printf("%d ",arreglo[i]);
            }printf("\n");
return 0;



}
