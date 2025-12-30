#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size for dynamic double array: ";
    cin>>size;

    double* arr = new double[size]; 

    for(int i=0; i<size; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i]; 
    }

    cout<<"Array elements: ";
    for(int i=0; i<size; i++) cout<<arr[i]<<" "; 

    delete[] arr; 

    cout<<"\nMemory freed."<<endl;

    return 0;
}