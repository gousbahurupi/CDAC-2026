#include <iostream>
#include <string.h>
using namespace std;
struct mydate{
    int dd,mm,yy;
    void initDate(int d=20,int m=12,int y=2025){
        dd=d;
        mm=m;
        yy=y;
    }
};

void acceptDateFromConsole(struct mydate *dt){
    cout<<"Enter Date in (dd mm yy) format: ";
    cin>>(*dt).dd>>(*dt).mm>>(*dt).yy;
}

void printDateOnConsole(struct mydate *dt){
    cout<<"Date in (dd/mm/yy) format: "<<(*dt).dd<<"/"<<(*dt).mm<<"/"<<(*dt).yy<<endl;
}

bool isLeapYear(struct mydate d){
    if(d.yy%400==0 || d.yy%4==0 && d.yy%100!=0){
        return true;
    }
    return false;
}

int main(){
    mydate d;
    d.initDate();
    printDateOnConsole(&d);
    acceptDateFromConsole(&d);
    printDateOnConsole(&d);
    if(isLeapYear(d)){
        cout<<"The year in date is Leap year!";
    }
    return 0;
}