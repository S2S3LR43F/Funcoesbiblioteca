#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
char *str;
char str1[20] = "ABCDEFG019874";
char str2[20] = "019874";

str = strstr(str1, str2);
printf("Substring %s\n", str);

return(0);
}
