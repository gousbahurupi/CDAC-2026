#include <iostream>
#include <string.h>
using namespace std;

class Employee{
private:
int emp_id;
string emp_name;
float emp_sal;
mutable float bonus;

public:
Employee(int id, string nm, float sal): emp_id(id), emp_name(nm),emp_sal(sal){}

void displayOutput() const{
    cout<<"\n*************Employee Details*************"<<endl;
    cout<<"Emp ID: "<<emp_id<<endl;
    cout<<"Emp Name: "<<emp_name<<endl;
    cout<<"Emp Salary: "<<emp_sal<<endl;
}

float getBonus(){
    bonus=emp_sal*2;
    return bonus;
}


};