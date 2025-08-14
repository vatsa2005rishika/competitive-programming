#include<iostream>
using namespace std;
int main() {
    int a[5];
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    } 
    cout<<"Enter the number to find a number greater than it: ";
    int num; 
    cin >> num;
    cout << "Elements greater than " << num << ": ";
    for(int i = 0; i < 5; i++) {
        if(a[i] > num) { // Check if the current element is greater than num
            cout << a[i] << " "; // Print the element if it is greater
        }
    }
}