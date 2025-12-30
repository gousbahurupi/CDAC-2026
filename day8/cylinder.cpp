#include <iostream>
#include <string.h>
using namespace std;

class Cylinder{
private:
    int rad,height;
    const double pi=3.142;
public:
    Cylinder():rad(10),height(20){
    }
    Cylinder(int r,int h):rad(r),height(h){
    }

    int getRad(){
        return rad;
    }

    int getHeight(){
        return height;
    }

    void setRad(int rad){
        this->rad=rad;
    }

    void setHeught(int height){
        this->height=height;
    }

    double calculateVolume(){
        return pi*rad*rad*height;
    }
};

int main(){
    Cylinder c;
    cout<<"\nFor Object c Radious="<<c.getRad()<<" Height="<<c.getHeight();
    c.setHeught(20);
    c.setRad(40);
    cout<<"\nAfter Changing Object c Radious="<<c.getRad()<<" Height="<<c.getHeight();

    cout<<"\nVolume for object c: "<<c.calculateVolume();

    Cylinder c1(50, 70);
    cout<<"\nFor Object c1 Radious="<<c1.getRad()<<" Height="<<c1.getHeight();
    cout<<"\nVolume for object c1: "<<c1.calculateVolume();
    return 0;
}