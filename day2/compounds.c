#include<stdio.h>
#include<conio.h>
#include<math.h>
//p,r,n,q
void main(){
    float data[4][4];
    for(int i=0;i<4;i++){
        printf("data for row %d\n",i);
        printf("Enter principale amt : ");
        scanf("%f",&data[0][i]);
        printf("Enter rate of intrust : ");
        scanf("%f",&data[1][i]);
        printf("Enter number of years : ");
        scanf("%f",&data[2][i]);
        printf("Enter Q: ");
        scanf("%f",&data[3][i]);
    }
    printf("\np\tr\tn\tq\tcom\n");
    for(int i=0;i<4;i++){
        printf("\n%f\t%f\t%f\t%f\t%f\n",data[0][i],data[1][i],data[2][i],data[3][i],data[0][i]*pow((1+(data[1][i]/100)/data[3][i]),data[3][i]*data[2][i]));
    }

}