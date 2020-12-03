#include <stdio.h>

void ordenamiento (float * , short  );
int main(void)
{
   float numero[]={5,9,7,2,3,1,0,6,4,8};
   short i;
    short tam=10;
    ordenamiento(numero,tam);
    for (i=0;i<tam;i++){
        printf("%.2f\n",numero[i]);
    }

    return 0;
}
void ordenamiento(float *v, short tam){
    float auxliar;
    short i=0,no_ordenado,R=0;
    do{
        R++;
        no_ordenado=0;

        for(i=0;i<tam-R;i++){
            if(v[i]>v[i+1]){
                auxliar=v[i];
                v[i]=v[i+1];
                v[i+1]=auxliar;
                no_ordenado=1;
            }
        }

    }while(no_ordenado);

}
