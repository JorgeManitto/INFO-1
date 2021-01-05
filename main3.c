#include <stdio.h>
#include<stdlib.h>
struct dato {
    float mult;
    float div;
    float mod;
};

struct dato matematica (short a,short b);

int main()
{
    short a,b,c;
    struct dato X;
   printf("introduzca num:\n");
   scanf("%hi",&a);
   printf("introduzca num:\n");
   scanf("%hi",&b);



   X=matematica(a,b);
   printf("multiplicacion=%.2f\n",X.mult);
   printf("Division=%.2f\n",X.div);
   printf("Modulo=%.2f\n",X.mod);
    return 0;
}

struct dato matematica (short a,short b){
    struct dato R;
    R.mult=a*b;
    R.div=(float)a/b;
    R.mod=a%b;
    return (R);
}
