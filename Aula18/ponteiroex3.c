#include<stdio.h>
#include<stdlib.h>
int main(){

    int *p, *p1, x=10, y=10;
    p = &x;
    p1 = &y;
    if(*p == *p1)
        printf("Ponteiros iguais\n");
    else
        printf("Ponteiros diferentes\n");

    if(p == p1)
            printf("Ponteiros iguais\n");
    else
        printf("Ponteiros diferentes\n");

    system("pause");
    return (0);
}
