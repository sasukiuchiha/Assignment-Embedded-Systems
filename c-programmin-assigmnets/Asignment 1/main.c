#include <stdio.h>


int main()
{
    int num;

    printf("Enter the number \n");
    scanf("%d",&num);

    if((num&1)==1){
        printf("The number is odd =  1 \nThe number is even = 0 \n");

    }
    else if((num&1)==0){
        printf("The number is odd =  0 \nThe number is even = 1 \n");}
    else{

    }



    return 0;
}
