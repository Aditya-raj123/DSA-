#include<iostream>
using namespace std;
int main(){
    int cost_price;
    cout<<"enter the cost price";
    cin>>cost_price;
    int selling_price;
    cout<<"enter the selling price";
    cin>>selling_price;
    if (cost_price > selling_price){
        cout<<"the seller made the loss"<<cost_price-selling_price;
    }
    
    else if (selling_price == cost_price)
    {
        cout<<"the seller made no profit nd no loss";
    }
    
    else{
        cout<<"the seller made the profit"<<selling_price-cost_price;
    }
    return 0;
}