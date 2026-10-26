#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter your num: ";
    cin>>x;
    int y = (int)x;
    if(x == y) cout<<"integer";
    else cout<<"not integer";
}