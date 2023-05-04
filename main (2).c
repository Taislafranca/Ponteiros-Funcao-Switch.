#include <stdio.h>

int main()
{   int var1, var2;
    int *p1,*p2;
    
    p1 = &var1;
    p2 = &var2;

    printf("digite o primeiro numero: ");
    scanf("%d", p1);
    printf("digite o segundo  numero: ");
    scanf("%d", p2);
    
    printf("\na soma de %d + %d= %d \n: ",*p1,*p2, (*p1 + *p2));

    printf("\na subtração de %d - %d= %d \n: ",*p1,*p2, (*p1 - *p2));

    printf("\na multiplicação de %d * %d= %d \n: ",*p1,*p2, (*p1 * *p2));

    printf("\na soma de %d / %d= %d \n: ",*p1,*p2, (*p1 / *p2));


    

    return 0;
}
