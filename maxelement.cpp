#include<iostream>
using namespace std;
int main() {
    int a[5];
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int maxElement = a[0]; // Initialize with the first element
    for(int i = 1; i < 5; i++) { // Start from the second element
        if(a[i] > maxElement) {
            maxElement = a[i]; // Update maxElement if current element is greater
        }
    }
    cout << "Maximum element: " << maxElement << endl;
    return 0;
}