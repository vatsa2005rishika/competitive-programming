#include <iostream>
using namespace std;
int main(){
    int a[5];
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    int sum=0;
    for(int i = 0; i < 5; i++){
        sum += a[i];
    }
    cout << "Sum of the integers: " << sum << endl;
    return 0;
}