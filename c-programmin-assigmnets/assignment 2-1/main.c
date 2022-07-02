#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arr[];

int main()
{
    int counter=0,result=0,num,i,z,copy1;
    printf("enter the number=");
    scanf("%d",&num);
    copy1=num;
    while(1){
    z=num%10;
    arr[counter]=z;
    if(num==0){
        break;
    }
    else{

    }
    counter+=1;
    num=(num-z)/10;


    }
    switch(counter){

    case 1:
    for(i=0;i<counter;i++){
        result=result+(pow(arr[i],counter));
    }
    if(copy1==result){
        printf("Armstrong number");
    }
    else{
        printf("not Armstrong number");
    }
    break;

     case 2:
    for(i=0;i<counter;i++){
        result=result+(pow(arr[i],counter));
    }
    if(copy1==result){
        printf("Armstrong number");
    }
    else{
        printf("not Armstrong number");
    }
    break;

      case 3:
    for(i=0;i<counter;i++){
        result=result+(pow(arr[i],counter));
    }
    if(copy1==result){
        printf("Armstrong number");
    }
    else{
        printf("not Armstrong number");
    }
    break;
      case 4:
    for(i=0;i<counter;i++){
        result=result+(pow(arr[i],counter));
    }
    if(copy1==result){
        printf("Armstrong number");
    }
    else{
        printf("not Armstrong number");
    }
    break;
    default://for anyother cases
    for(i=0;i<counter;i++){
        result=result+(pow(arr[i],counter));
    }
    if(copy1==result){
        printf("Armstrong number");
    }
    else{
        printf("not Armstrong number");
    }
    break;
    }
    return 0;
}
