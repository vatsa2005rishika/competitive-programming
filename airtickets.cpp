#include<iostream>
using namespace std;
int main(){
    int tickets[10]={2500, 5000, 7500, 1000, 1250, 1500, 1750, 2000, 2250, 3000};
    int sum=0;
    int giftcard=0;
    int count=0;
    cout<<"Enter your budget: ";
    cin>>giftcard;
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(tickets[i] + tickets[j] == giftcard && i != j&& count<2) {
                sum++;
                count++;
                cout << "Tickets found: " << tickets[i] << " + " << tickets[j] << " = " << giftcard << endl;
            }
        }
    }
}