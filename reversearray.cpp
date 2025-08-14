#include<iostream>
using namespace std;
int main() {
    int a[5];
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    // Reverse the array
    for(int i = 0; i < 5 / 2; i++) {
        int temp = a[i];
        a[i] = a[5 - 1 - i];
        a[5 - 1 - i] = temp;
    }
    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}