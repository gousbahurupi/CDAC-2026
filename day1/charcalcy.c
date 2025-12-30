#include<stdio.h>
#include<conio.h>

void main(){
    float h,w,rm,lm,tm,bm,ps;
    int db;
    printf("Enter hieght of paper: ");
    scanf("%f",&h);
    printf("Enter width of paper: ");
    scanf("%f",&w);
    printf("Enter right margin: ");
    scanf("%f",&rm);
    printf("Enter left margin: ");
    scanf("%f",&lm);
    printf("Enter top margin: ");
    scanf("%f",&tm);
    printf("Enter bottom margin: ");
    scanf("%f",&bm);
    printf("Enter point size of charecter: ");
    scanf("%f",&ps);
    printf("Enter 1 for double line space: ");
    scanf("%f",&db);

    

    float aw=w-lm-rm;
    float ah=h-tm-bm;
    
    float ncr=(aw*72)/ps;
    float nl=(ah*72)/ps;
    if(db==1){
        nl/=db;
    }

    printf("\nnumber of charector in row: %f",ncr);
    printf("\nnumber lines: %f",nl);
}