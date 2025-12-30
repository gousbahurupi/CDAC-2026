#include<stdio.h>
#include<conio.h>

void main(){
    float pr,cr;
    printf("Enter previous reading : ");
    scanf("%f",&pr);\
    printf("Enter current reading : ");
    scanf("%f",&cr);

    float units=cr-pr;
    printf("\ntotal units: %f", units);
    float total=0,unit=units;
    if(units!=0){
        if(units>=100){
            units-=100;
            total+=100*4.28;
        }
        else{
            total+=units*4.28;
            units=0;
        }
    }

    if(units!=0){
        if(units>=300){
            units-=300;
            total+=300*11.1;
        }
        else{
            total+=units*11.1;
            units=0;
        }
    }

    if(units!=0){
        if(units>=500){
            units-=500;
            total+=500*15.38;
        }
        else{
            total+=units*15.38;
            units=0;
        }
    }

    if(units!=0){
        if(units>=1000){
            units-=1000;
            total+=1000*17.68;
        }
        else{
            total+=units*17.68;
            units=0;
        }
    }

    if(units!=0){
        total+=units*19.50;
        units=0;
    }

    printf("\ntotal: %f", total);
    float fix=130,tc=1.47*unit;
    printf("\ntc: %f", tc);
    float ec=((total+fix+tc)/100)*16;
    printf("\nec: %f", ec);
    float totalamt=total+ec+fix+tc;

    printf("\nTotal Bill: %f",totalamt);

    
}