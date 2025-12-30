#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float sp, bp, nos, tur, nsp, nbp, bb, sb, tb, st, stt, sd, rc, tt, p;
    cout<<"*******************Stock calculation!*******************";

    //inputs
    cout<<"\nEnter no of stock: ";
    cin>>nos;
    cout<<"Enter Baying price: ";
    cin>>bp;
    cout<<"Enter selling price: ";
    cin>>sp;

    //calculation
    nsp=sp*nos;
    nbp=bp*nos;
    tur=nsp+nbp;

    bb=(nsp/100)*0.03;
    sb=(nbp/100)*0.03;
    tb=bb+sb;


    st=(tb/100)*10.36;
    stt=(nsp/100)*0.025;
    sd=(tur/100)*0.002;
    rc=(tur/100)*0.004;
    tt=tb+st+stt+sd+rc;
    p= nsp-nbp-tt;
    cout<<right<<setw(70)<<setfill('_')<<" ";
    cout<<"\n"<<right<<setw(45)<<setfill(' ')<<"Share Trading Statement"<<endl;
    cout<<right<<setw(70)<<setfill('_')<<" "<<endl;
    cout<<right<<"Selling Price"<<setw(27)<<setfill('.')<<"Rs"<<right<<setw(10)<<setfill(' ')<<" "<<nsp<<endl;
    cout<<right<<"Purchase Price"<<setw(26)<<setfill('.')<<"Rs"<<right<<setw(10)<<setfill(' ')<<" "<<nbp<<endl;
    cout<<right<<"Total Brokerage"<<setw(25)<<setfill('.')<<"Rs"<<right<<setw(10)<<setfill(' ')<<" "<<tb<<endl;
    cout<<right<<"Security Transaction Tax"<<setw(16)<<setfill('.')<<"Rs"<<right<<setw(10)<<setfill(' ')<<" "<<st<<endl;
    cout<<right<<"Stamp Duty"<<setw(30)<<setfill('.')<<"Rs"<<right<<setw(10)<<setfill(' ')<<" "<<sd<<endl;
    cout<<right<<"Regulatory Charges"<<setw(22)<<setfill('.')<<"Rs"<<right<<setw(10)<<setfill(' ')<<" "<<rc<<endl;
    cout<<right<<"Total taxes"<<setw(29)<<setfill('.')<<"Rs"<<right<<setw(10)<<setfill(' ')<<" "<<tt<<endl;
    cout<<right<<setw(70)<<setfill('_')<<" "<<endl;
    cout<<right<<"Profit"<<setw(34)<<setfill('.')<<"Rs"<<right<<setw(10)<<setfill(' ')<<" "<<p<<endl;
    return 0;
}