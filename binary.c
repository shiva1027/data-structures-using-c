#include<stdio.h>
int main()
{
int c,first,last,middle,n,search,array[100];
printf("enter no.of elements :\n");
scanf("%d",&n);
printf("enter %d integers :\n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
printf("enter the value to find :\n");
scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
if(array[middle]==search)
{
printf("%d is found at location %d",search,middle+1);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("not found! %d is not found present in the list.\n",search);
return 0;
}