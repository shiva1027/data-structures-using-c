#include<stdio.h>
#include<string.h>
void main(){
   char source[45],destination[50];
   printf("Enter the source string : \n");
   gets(source);
   printf("Enter the destination string : \n");
   gets(destination);
   strcat(source,destination);
   printf("The modified destination string :");
   puts(source);
}