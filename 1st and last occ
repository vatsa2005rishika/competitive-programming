//find the 1st and last occurance of a given number in a sorted array//


#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    printf("Enter the number to find its frequency: ");
    int x;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            if (first == -1) first = i;
            last = i;
        }
    }
    if (first != -1) {
        cout << "First occurrence: " << first << endl;
        cout << "Last occurrence: " << last << endl;
        cout << "Frequency: " << last - first + 1 << endl;
    } else {
        cout << "Element not found." << endl;
    }
}
