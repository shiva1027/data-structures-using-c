#include <stdio.h>
#include <string.h>
int main()
{
char str [100];
int l;
printf ("\n :Enter any string: \n");
gets (str);
l=strlen(str);
printf(" length = %d \n",l);
return 0;
}