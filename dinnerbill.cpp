#include<iostream>
using namespace std;
int main(){
    int prices[10]={250, 500, 750, 100, 125, 150, 175, 200, 225, 300};
    string items[10]={"naan","rice","mutton","chicken","fish","paneer","ice cream","mojito","pizza","pasta"};
    int sum=0;
    int amount=0;
    int count=0;
    cout<<"Enter the total amount you have: ";
    cin>>amount;
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(prices[i] + prices[j] == amount && i != j&& count<2) {
                sum++;
                count++;
                cout << "Items found: " << items[i]<<"-("<<prices[i] << ") + " << items[j] <<"-("<< prices[j]<< ") = " << amount << endl;
            }
        }
    }
}