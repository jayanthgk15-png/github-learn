#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num: ";
    cin>>n;
    // (n % 2 == 0) ? cout<<"EVEN" : cout<<"ODD";
    cout<<((n % 2 == 0) ? "EVEN" : "ODD");
}