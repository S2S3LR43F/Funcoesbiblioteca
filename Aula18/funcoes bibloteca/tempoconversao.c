#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main() {
struct tm t;
t.tm_sec = 10;
t.tm_min = 30;
t.tm_hour = 18;
t.tm_mday = 25;
t.tm_mon = 2;
t.tm_year = 88;
t.tm_wday = 6;
puts(asctime(&t));
return(0);
}
