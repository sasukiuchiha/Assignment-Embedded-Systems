#include <stdio.h>
#include <stdlib.h>
void swap(int *x,int *y);
int main()
{
    int x,y;
    printf("enter first number \n");
    scanf("%d",&x);
    printf("enter second number \n");
    scanf("%d",&y);
    swap(&x,&y);
    return 0;
}

void swap(int *x,int *y){

printf("before swaping \n");
printf("x = %d    y = %d\n",*x,*y);
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
printf("after  swaping \n");
printf("x = %d    y = %d\n",*x,*y);
}
