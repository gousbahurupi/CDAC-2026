#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
int main(){
    int ct,at,tp,cp,ap;
    float ga, dp, ad,ns;
    string mn;
    cout<<"Enter movie name: ";
    cin>>mn;
    cout<<"Enter number of child tickets and pirce: ";
    cin>>ct>>cp;
    cout<<"Enter number of adult tickets and pirce: ";
    cin>>at>>ap;
    cout<<"Enter donation amount per ticket(%): ";
    cin>>dp;
    ga=(ct*cp)+(at*ap);
    ad=(ga/100)*dp;
    ns=ga-ad;
    for(int i=0;i<25;i++)
    cout<<"_*";
    cout<<right<<"\nMovie name: "<<setw(21)<<setfill('.')<<" "<<right<<setw(7)<<setfill(' ')<<" "<<mn;
    cout<<right<<"\nNumber of Tickets Sold: "<<setw(9)<<setfill('.')<<" "<<right<<setw(7)<<setfill(' ')<<" "<<ct+at;
    cout<<fixed<<setprecision(2);
    cout<<right<<"\nGross Amount : "<<setw(20)<<setfill('.')<<" $ "<<right<<setw(7)<<setfill(' ')<<ga;
    cout<<right<<"\nPercent fo Gross Amount Donated: "<<right<<setw(7)<<setfill(' ')<<dp<<" %";
    cout<<right<<"\nAmount Donated: "<<setw(19)<<setfill('.')<<" $ "<<right<<setw(7)<<setfill(' ')<<ad;
    cout<<right<<"\nNet Sale: "<<setw(25)<<setfill('.')<<" $ "<<right<<setw(7)<<setfill(' ')<<ns;

}