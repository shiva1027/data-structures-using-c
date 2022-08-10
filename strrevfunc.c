#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char str1[100];
printf ("Enter a string:");
gets (str1);
strrev (str1);
printf ("\n reversed string = %s", str1);
return 0;
}