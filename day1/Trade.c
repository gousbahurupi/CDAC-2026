#include<stdio.h>
#include<conio.h>

void main(){
    float sp, bp, nos, tur, nsp, nbp, bb, sb, tb, st, stt, sd, rc, tt, p;
    printf("*******************Stock calculation!*******************");

    //inputs
    printf("\nEnter no of stock: ");
    scanf("%f", &nos);\
    printf("Enter Baying price: ");
    scanf("%f", &bp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    //calculation
    nsp=sp*nos;
    nbp=bp*nos;
    tur=nsp+nbp;

    bb=(nsp/100)*0.03;
    sb=(nbp/100)*0.03;
    tb=bb+sb;
    printf("\n total broeakrage: %f", tb);
    
    st=(tb/100)*10.36;
    printf("\n sel tax: %f", st);
    stt=(nsp/100)*0.025;
    printf("\n serv tax: %f", stt);
    sd=(tur/100)*0.002;
    printf("\n stamp: %f", sd);
    rc=(tur/100)*0.004;
    printf("\n rc: %f",rc );
    tt=tb+st+stt+sd+rc;
    p= nsp-nbp-tt;

    printf("\n tax=%f and profit: %f ",tt, nsp-nbp);
    printf("\n total profit: %f", p);
}