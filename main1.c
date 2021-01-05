#include <stdio.h>

int main()
{
   int *pi,*pj;
   int i=74, j;
   pi=&i;
   pj=&j;

    pj=pi;
   printf("valor de pi:%p\n",pi);
   printf("valor de pj:%p\n",pj);
    printf("%d\n",pi);
   if(pi>pj)
        printf("pi es mayor\n");

   if (pi>0X300){
            printf("pi es mayor que 0x300\n");
   }
   else {
       printf("pi es menor que 0x300\n");
   }



if(pi==pj){
printf("son iguales\n");
}else {
printf("no son iguales\n");
}

    return 0;
}
