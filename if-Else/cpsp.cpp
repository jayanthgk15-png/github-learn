#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"enter your cost price: ";
    cin>>x;
    cout<<"enter your selling price: ";
    cin>>y;
    if(x > y) cout<<"loss is"<<x - y;
    else if(x == y) cout<<"no profit or no loss";
    else cout<<"profit is"<<y - x;
    
}