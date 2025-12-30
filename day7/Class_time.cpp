#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    Time() : hour(0), minute(0), second(0) {}

    Time(int h) : hour(h), minute(0), second(0) {}
    Time(int h, int m) : hour(h), minute(m), second(0) {}
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

    ~Time() {
        cout << "Time object destroyed." << endl;
    }

    void setHour(int h) { hour = h; }
    void setMinute(int m) { minute = m; }
    void setSecond(int s) { second = s; }

    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    void init_Time() {
        hour = minute = second = 0;
    }

    void accept_Input() {
        cout << "Enter Hour, Minute, and Second: ";
        cin >> hour >> minute >> second;
    }

    void display_Output() const {
        cout << setfill('0') << setw(2) << hour << ":"
             << setw(2) << minute << ":"
             << setw(2) << second << endl;
    }
};

int main() {
    Time t1(10, 30, 45);
    cout << "Time t1: ";
    t1.display_Output();

    Time t2;
    t2.accept_Input();
    cout << "You entered: ";
    t2.display_Output();

    return 0;
}