#include<stdio.h>
#include<conio.h>

void main(){
    float n1,n2;
    printf("Enter number1 : ");
    scanf("%f",&n1);
    printf("Enter number2 : ");
    scanf("%f",&n2);

    printf("\n%f+%f=%f",n1,n2,n1+n2);
    printf("\n%f-%f=%f",n1,n2,n1-n2);
    printf("\n%f*%f=%f",n1,n2,n1*n2);
    if(n2==0.0f){
        printf("\nfor division number 2 should not be 0");
    }else{
        printf("%f/%f=%f",n1,n2,n1/n2);
    }
}