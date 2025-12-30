#include<stdio.h>
#include<conio.h>
#include <string.h>
struct mydate{
    int dd,mm,yy;
};

void acceptDateFromConsole(struct mydate *dt){
    printf("Enter Date in (dd mm yy) format: ");
    scanf("%d%d%d",&(*dt).dd,&(*dt).mm,&(*dt).yy);
}

void printDateOnConsole(struct mydate *dt){
    printf("Date in (dd/mm/yy) format: %d / %d / %d\n",(*dt).dd,(*dt).mm,(*dt).yy);
}

void initDate(struct mydate *dt,int d,int m, int y){
    (*dt).dd=d;
    (*dt).mm=m;
    (*dt).yy=y;
}

int main(){
    struct mydate d;
    initDate(&d,20,12,2025);
    printDateOnConsole(&d);
    acceptDateFromConsole(&d);
    printDateOnConsole(&d);
    return 0;
}