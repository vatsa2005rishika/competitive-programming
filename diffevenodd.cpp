#include<iostream>
using namespace std;
int main() {
    int a[10];
    cout << "Enter 10 integers: ";
    for(int i = 0; i < 10; i++) {  
        cin >> a[i];
    } 
    int sumEven = 0, sumOdd = 0;
    for(int i = 0; i < 10; i++) {
        if(a[i] % 2 == 0) {
            sumEven += a[i]; // Add to sum for even numbers
        } else {
            sumOdd += a[i]; // Add to sum for odd numbers
        }
    }
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    return 0;
}