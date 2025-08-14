#include<iostream>
using namespace std;
int main() {
    int a[8];
    cout << "Enter 8 integers: ";
    for(int i = 0; i < 8; i++) {    
        cin >> a[i];
    }
    cout << "Even indices elements: ";
    for(int i = 0; i < 8; i += 2) { // Loop through even indices
        cout << a[i] << " "; // Print element at even index
    }   
}