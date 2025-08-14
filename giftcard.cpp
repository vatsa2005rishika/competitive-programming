#include<iostream>
using namespace std;
int main(){
    int list[10]={25, 50, 75, 100, 125, 150, 175, 200, 225, 250};
    int sum=0;
    int giftcard=0;
    int count=0;
    cout<<"Enter the gift card amount: ";
    cin>>giftcard;
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(list[i] + list[j] == giftcard && i != j&& count<2) {
                sum++;
                count++;
                cout << "Combination found: " << list[i] << " + " << list[j] << " = " << giftcard << endl;
            }
        }
    }
}