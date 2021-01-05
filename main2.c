#include <stdio.h>
//--------------------------------------------------------------------
int main(void){
   int i, *pi;
   pi=&i;
   *pi=45;
   printf("valor de i:%d\n",i);
    i=30;

   printf("valor dsp:%d\n",*pi);




    return 0;}
