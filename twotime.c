#include<stdio.h>
int main()
{
int hr1,hr2,min1,min2,hr,min;
printf("\n Enter the first hr and min:");
scanf("\n%d\t%d",&hr1,&min1);
printf("\n Enter the second hr and mint:");
scanf("\n%d\t%d",&hr2,&min2);
hr=hr1-hr2;
min=min1-min2;
printf("\n%d\t%d",hr,min);
return 0;
}

