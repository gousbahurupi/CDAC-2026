#include<iostream>

using namespace std;
int main(){
    int num,num2=0,mul=1;
    cout<<"enter number: ";
    cin>>num;
    for(int i=1;i<6;i++){
        if(!(num%10==9)){
            num2=(num2)+(num%10*mul)+mul;
        }
        mul*=10;
        num/=10;
    }

    cout<<"Added num="<<num2;
    return 0;
}