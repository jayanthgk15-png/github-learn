#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a positive integer: ";
    cin>>x;
    if(x % 5 == 0 and x % 3 == 0) cout<<"jayanth";
    else if(x % 5 == 0) cout<<"rakshith";
    else if(x % 3 == 0) cout<<"kanthraj";
    else cout<<"vanajakshi";
}
    