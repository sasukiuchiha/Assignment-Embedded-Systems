#include <stdio.h>
#include <stdlib.h>
void fibonacci(int i);
int num_term;
int arr[5000]={0,1};
int main()
{

    printf("enter the number of terms:");
    scanf("%d",&num_term);

    fibonacci(0);
    return 0;
}

void fibonacci(int i){
    if(i==(num_term)){
    }
    else{
    arr[i+2]=arr[i]+arr[i+1];
    printf("%d, ",arr[i]);
    fibonacci(i+1);
   }

    }



