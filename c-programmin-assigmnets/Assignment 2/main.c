#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,result;
    char oprt;

    printf("Enter number_1 \n");
    scanf("%f",&num1);
    printf("Enter the operator \n");
    scanf("%c",&oprt);
    if(oprt=='\n'){
        scanf("%c",&oprt);
    }
    else{}
    printf("Enter number_2 \n");
    scanf("%f",&num2);
    switch(oprt){
    case '+':

        result=num1+num2;
        printf("the result = %f",result);
        break;
    case '-':

        result=num1-num2;
        printf("the result = %f",result);
        break;
    case '*':

        result=num1*num2;
        printf("the result = %f",result);
        break;
    case '/':
        while(1){

        if(num2==0){
            printf("error choose any value except 0 \n");
            continue;
        }
        else{
            result=num1/num2;
            printf("the result = %f",result);
            break;
        }
        }
        break;

    default:

        break;




    }
    return 0;
}
