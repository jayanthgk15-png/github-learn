#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"enter your cost price: ";
    cin>>x;
    cout<<"enter your selling price: ";
    cin>>y;
    if(x == y) cout<<"no loss";
    elif((x - y)>0) cout<<"profit";
    cout<<x - y;
    else cout<<"loss";
    cout<<x - y;
}
    