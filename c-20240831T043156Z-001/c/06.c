#include<stdio.h>
#define PI 3.14

int main()
{
    int p,r,n,ints;
    printf("enter p:-");
    scanf("%d",&p);

     printf("enter r:-");
    scanf("%d",&r);
    
     printf("enter n:-");
    scanf("%d",&n);

    ints = p* r* n/100;

    printf("\n p is = %d",p);
    printf("\n r is = %d",r);
    printf("\n n is = %d",n);
    printf("\n ints is = %d",ints);
    
    return 0;
}