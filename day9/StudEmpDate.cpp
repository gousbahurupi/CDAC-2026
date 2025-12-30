#include <iostream>
#include <string>

using namespace std;

class Date {
public:
    int day, month, year;
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}
    void display() { cout << day << "/" << month << "/" << year; }
};

class Employee {
    int emp_id;
    string dept;
    Date joiningDate; 
public:
    Employee(int id, string dpt, Date jd) : emp_id(id), dept(dpt), joiningDate(jd) {}
    void display() {
        cout << "Emp ID: " << emp_id << ", Dept: " << dept << ", Joined: ";
        joiningDate.display();
        cout << endl;
    }
};

class Student {
    int rollNo;
    float marks;
    string course;
    Date joining_date, end_date; 
public:
    Student(int r, float m, string c, Date start, Date end) 
        : rollNo(r), marks(m), course(c), joining_date(start), end_date(end) {}
    void display() {
        cout << "Roll: " << rollNo << ", Course: " << course << ", Duration: ";
        joining_date.display(); cout << " to "; end_date.display();
        cout << endl;
    }
};

int main() {

    Date d1(10, 5, 2022), d2(10, 5, 2024);
    Employee emp(101, "IT", d1);
    Student stu(1, 85.5, "CS", d1, d2);
    
    emp.display();
    stu.display();

    return 0;
}