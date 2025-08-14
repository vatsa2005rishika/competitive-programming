#include<iostream>
using namespace std;
int main() {
    int a[5];
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    bool allEqual = true; // Flag to check if all elements are equal
    for(int i = 1; i < 5; i++) { // Start from the second element
        if(a[i] != a[0]) { // Compare with the first element
            allEqual = false; // If any element is not equal, set flag to false
            break; // No need to check further
        }
    }
    if(allEqual) {
        cout << "All elements are equal." << endl;
    } else {
        cout << "Not all elements are equal." << endl;
    }  
}