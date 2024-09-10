#include<time.h>
#include<stdio.h>

int main ()
{
time_t seconds;

seconds = time(&seconds);
printf("Segundos desde 1 de Janeiro 1970 = %ld\n", seconds);

return(0);
}
