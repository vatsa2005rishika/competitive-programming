
//given a sorted array and a number x count how many times x occurs in the array
#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
    int a[5];
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int num;
    cout<<"Enter the number to find its frequency:";
    cin >> num;
    int frequency = 0;
    for(int i = 0; i < 5; i++) {   
        if(a[i] == num) {
            frequency++; // Increment frequency if current element matches num
        }
    }
    cout << "Frequency of " << num << ": " << frequency << endl;
    return 0;
}
