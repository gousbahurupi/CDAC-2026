#include<iostream>
using namespace std;
inline double cToF(double c){
    return (c*9/5)+32;
}

inline double fToC(double f){
    return (f-32)*5/9;
}

inline int myMin(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}

inline double simpleintrest(double p, double r, double t){
    return (p*r*t)/100;
}

inline double amount(double p, double r, double t){
    return p;
}

int main(){
    int f,c,p,r,t,a,b;
    cout<<"Enter Temprature in Celsious: ";
    cin>>c;
    cout<<"Temprature in Fahrenheit: "<<cToF(c)<<endl;
    cout<<"Enter Temprature in Fahrenheit: ";
    cin>>f;
    cout<<"Temprature in Celsious: "<<fToC(f)<<endl;
    cout<<"Enter any two value: ";
    cin>>a>>b;
    cout<<myMin(a,b)<<" is min value."<<endl;
    cout<<"Enter p r t: ";
    cin>>p>>r>>t;
    cout<<"Simple intrest: "<<simpleintrest(p,r,t)<<endl;
    cout<<"amount: "<<amount(p,r,t)<<endl;
}