#include<iostream>
using namespace std;
int main() {
    int a[5];
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int countEven = 0, countOdd = 0;
    for(int i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) {
            countEven++; // Increment count for even numbers
        } else {
            countOdd++; // Increment count for odd numbers
        }
    }
    cout << "Count of even numbers: " << countEven << endl;
    cout << "Count of odd numbers: " << countOdd << endl;
    return 0;
}