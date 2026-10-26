#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a num: ";
    cin>>x;
    if(x >= 1000 and x <= 9999) cout<<"4 digit num";
    else cout<<"not a 4 digit num";
}