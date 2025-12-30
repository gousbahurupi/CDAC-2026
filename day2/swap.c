#include<stdio.h>
#include<conio.h>
void swap_value(float n1, float n2){
    float temp=n1;
    n1=n2;
    n2=temp;
    printf("\nnumber1 : %f",n1);
    printf("\nnumber2 : %f",n2);
}
void swap_address(float *no1,float *no2){
    float temp=*no1;
    *no1=*no2;
    *no2=temp;
}
void main(){
    float n1,n2;
    printf("Enter number1 : ");
    scanf("%f",&n1);
    printf("Enter number2 : ");
    scanf("%f",&n2);
    printf("\nSwap by value:");
    swap_value(n1,n2);
    swap_address(&n1,&n2);
    printf("\nSwap by address:");
    printf("\nnumber1 : %f",n1);
    printf("\nnumber2 : %f",n2);
}

