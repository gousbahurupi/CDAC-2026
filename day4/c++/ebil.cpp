#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string name;
    float pr, cr;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter previous reading: ";
    cin >> pr;
    cout << "Enter current reading: ";
    cin >> cr;

    float units = cr - pr;
    float consumption_charge = 0, temp_units = units;

    if (temp_units > 0) {
        float slab1 = (temp_units > 100) ? 100 : temp_units;
        consumption_charge += slab1 * 4.28;
        temp_units -= slab1;
    }
    if (temp_units > 0) {
        float slab2 = (temp_units > 300) ? 300 : temp_units;
        consumption_charge += slab2 * 11.1;
        temp_units -= slab2;
    }
    if (temp_units > 0) {
        float slab3 = (temp_units > 500) ? 500 : temp_units;
        consumption_charge += slab3 * 15.38;
        temp_units -= slab3;
    }

    float fixed_charge = 125.00;
    float transmission_charge = 1.47 * units;
    float electricity_tax = ((consumption_charge + fixed_charge + transmission_charge) * 0.16);
    float total_bill = consumption_charge + fixed_charge + transmission_charge + electricity_tax;

    cout << "\n" << string(50, '-') << endl;
    cout << left << setw(30) << "Name: " << name << endl;
    cout << left << setw(30) << "Start Reading: " << pr 
         << setw(10) << "End Reading: " << cr << endl;
    cout << string(50, '-') << endl;
    
    cout << fixed << setprecision(2);
    cout << left << setw(35) << "Total Units Consumed" << " : " << right << setw(10) << (int)units << endl;
    cout << left << setw(35) << "Electricity consumption charge" << " : Rs. " << right << setw(8) << consumption_charge << endl;
    cout << left << setw(35) << "Fixed charge" << " : Rs. " << right << setw(8) << fixed_charge << endl;
    cout << left << setw(35) << "Transmission charge" << " : Rs. " << right << setw(8) << transmission_charge << endl;
    cout << left << setw(35) << "Electricity Charge(16%)" << " : Rs. " << right << setw(8) << electricity_tax << endl;
    cout << string(50, '-') << endl;
    cout << left << setw(35) << "Total" << " : Rs. " << right << setw(8) << total_bill << endl;

    return 0;
}