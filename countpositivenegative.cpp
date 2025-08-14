#include<iostream>
using namespace std;
int main() {
    int a[10];
    cout << "Enter 10 integers: ";
    for(int i = 0; i < 10; i++) {
        cin >> a[i];
    }  
    int countPositive = 0, countNegative = 0;
    for(int i = 0; i < 10; i++) { 
        if(a[i] > 0) {
            countPositive++; // Increment count for positive numbers
        } else if(a[i] < 0) {
            countNegative++; // Increment count for negative numbers
        }
    }
    cout << "Count of positive numbers: " << countPositive << endl;
    cout << "Count of negative numbers: " << countNegative << endl;
    return 0;
}