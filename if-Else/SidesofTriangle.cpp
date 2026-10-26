// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter a num1: ";
//     cin>>a;
//     cout<<"Enter a num2: ";
//     cin>>b;
//     cout<<"Enter a num3: ";
//     cin>>c;
//     if((a + b > c)&&(a + c > b)&&(b + c > a)) cout<<"abc are sides of triangle";
//     else cout<<"not";
// }

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 nums: ";
    cin>>a>>b>>c;
    if((a + b > c)&&(a + c > b)&&(b + c > a)) cout<<"valid triangle";
    else cout<<"invalid triangle";
}