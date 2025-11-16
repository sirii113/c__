#include<iostream>
using namespace std;
void swap(int a,int b) 
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"\n the value of a and b with in the function"<<a<<"\t"<<b;
};
main()
{
    int x,y;
    cout<<"enter the values of x and y";
    cin>>x>>y;
    cout<<"the values of x and y before calling the function"<<x<<"\t"<<y;
    swap(x,y);
    cout<<"the values of x and y after calling the function"<<x<<"\t"<<y;
    
    
}
