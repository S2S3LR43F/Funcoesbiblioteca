#include<stdio.h>
#include<Stdlib.h>

int main(){

int *pa = NULL;

int a = 20;
pa = &a;

printf("\n %d", *pa);
printf("\n %p \n", pa);
printf("\n %d \n", a);

*pa = 30;
printf("\n %d \n", *pa);
printf("\n %d \n", a);


float x = 15;
pa = &x;

printf("Conteudo apontado por p: %d \n", *pa);
printf("Conteudo apontado por p: %f \n", *pa);

system("pause");
return (0);

}
