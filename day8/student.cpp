#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;
    const float max_marks = 1000;
    string Grade;

public:
    Student(int r, string n, float m) : rollNo(r), name(n), marks(m)
    {
        float p = (marks / max_marks) * 100;

        if (p > 90)
        {
            Grade = "O";
        }
        else if (p > 80)
        {
            Grade = "A+";
        }
        else if (p > 70)
        {
            Grade = "A";
        }
        else if (p > 60)
        {
            Grade = "B+";
        }
        else if (p > 50)
        {
            Grade = "B";
        }
        else if (p > 40)
        {
            Grade = "C";
        }
        else
        {
            Grade = "Better luck next time!";
        }
    }

    void DisplayOutput()const
    {
        cout << "\n*************STUDENT DETAILS*************";
        cout << "\nRollno: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
    }

    string getGrade() const
    {
        return Grade;
    }
};

int main()
{
    Student s(1, "Rohit", 999);
    s.DisplayOutput();
    cout << "\nGrade: " << s.getGrade();
}