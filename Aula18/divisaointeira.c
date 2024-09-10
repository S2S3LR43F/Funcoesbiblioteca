#include<stdlib.h>
#include<stdio.h>

int main(){

div_t output;

output = div(27, 4);
printf("Quociente = %d\n", output.quot);
printf("Resto = %d\n", output.rem);

return 0;
}
