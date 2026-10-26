#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the point: ";
    cin>>x>>y;
    if(x > 0 and y > 0) cout<<"1st quadrant";
    else if(x < 0 and y > 0) cout<<"2nd quadrant";
    else if(x < 0 and y < 0) cout<<"3rd quadrant";
    else if(x > 0 and y < 0) cout<<"4th quadrant";
    else if(x == 0 and y == 0) cout<<"origin";
    else if(x == 0) cout<<"y axis";
    else cout<<"x axis";
    
}