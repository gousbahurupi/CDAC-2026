#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string.h>
using namespace std;
class MyDate
{
    private:
    int dd, mm, yy;

    
    public:
    MyDate(int d,int m,int y){
        dd = d;
        mm = m;
        yy = y;
    }

    int getDate(){
        return dd;
    }

    int getMonth(){
        return mm;
    }

    int getYear(){
        return yy;
    }

    void setDate(int d){
        dd=d;
    }

    void setMonth(int m){
        mm=m;
    }

    void setYear(int y){
        yy=y;
    }

    void initDate(int d = 20, int m = 12, int y = 2025)
    {
        dd = d;
        mm = m;
        yy = y;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter Date in (dd mm yy) format: ";
        cin >> dd >> mm >> yy;
    }

    void printDateOnConsole()
    {
        cout << "Date in (dd/mm/yy) format: " << dd << "/" << mm << "/" << yy << endl;
    }

    bool isLeapYear()
    {
        if (yy % 400 == 0 || yy % 4 == 0 && yy % 100 != 0)
        {
            return true;
        }
        return false;
    }

    ~MyDate(){
        cout<<"The Date obj Distroid!";
    }
};

#endif 