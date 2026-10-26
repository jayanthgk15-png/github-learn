#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 nums: ";
    cin>>a>>b>>c;
    // if(a >= b and a >= c) cout<<"a is greater";
    // else if(b >= a and b >= c) cout<<"b is greater";
    // else cout<<"c is greater";

    if(a >= b){
        if(a >= c) cout<<a<<" is largest";
        else cout<<c<<" is largest";
    }
    else {
        if(b >= c) cout<<b<<" is largest";
        else cout<<c<<" is largest";
    }
}