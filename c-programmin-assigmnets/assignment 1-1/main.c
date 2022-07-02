#include <stdio.h>
int i[32];
int main()
{
    int decimal;
   printf("please enter a decimal number:");
   scanf("%d",&decimal);
   printf("the HEX_Decimal is:%X \n",decimal);
    for(int j=0;j<32;j++){
    if((decimal%2)==0){
            decimal=decimal/2;
            i[j]=0;
            if(decimal==1){
                i[j+1]=1;
                break;
            }

    }
    else if((decimal%2)==1){
        decimal=(decimal/2);
        i[j]=1;

    }
    else{

    }
    }
    printf("binary output is: ");
   for(int k=31;k>=0;k--){
    printf("%d",i[k]);}


    return 0;
}
