#include <stdio.h>
#define N 10
int main(void){
    int a[N];
    
    for(int i = 0; i < N; i++)
        do{
            printf("Ingrese el elemento a[%d]: ", i);
            scanf("%d", &a[i]);
        }while(!(a[i] >= 1 && a[i] <= 100));
    
    printf("Los elementos del arreglo son:\n");
    for(int i = 0; i < N; i++)
        printf("a[%d]:  %d\n", i, a[i]);
   
    return 0;
}
