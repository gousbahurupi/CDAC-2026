#include <stdio.h>
#include <conio.h>
#include <math.h>
int bus[35][4] = {0};
void bookSeat(int sn){
    int col=(sn-1)%4;
    int row=sn/4;
    if(bus[row][col]==0){
        bus[row][col]=1;
        printf("\nSeat booked successful!");
    }
    else{
        printf("\nSeat alredy booked!");
    }
}

void checkAvalable(){
    for(int i=0;i<35;i++){
        for(int j=0;j<4;j++){
            if(bus[i][j]==0){
                printf("%d ",(i*4)+1+j);
            }
        }
    }
}

void main()
{
    int ch, f=1,sn=0;
    up:
    printf("\n---------------(BUS BOOKING SYSTEM)---------------");
    printf("\n1. book a seat\n2. check abalable seat\n3. exit\nEnter choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter seat number: ");
        scanf("%d",&sn);
        bookSeat(sn);
        break;
    case 2:
        printf("\nAvalable seats: ");
        checkAvalable();
        break;
    case 3:
        f=0;
        break;
    default:
        printf("\nenter correct choice! ");
    }

    if(f){
        goto up;
    }
}