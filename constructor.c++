#include<iostream>
using namespace std;
class integer
{
    int m,n;
    public:
    integer()
    {
        cout<<"enter values of m and n:";
        cin>>m>>n;
        cout<<"the values of m and n are:"<<m<<"\t"<<n;
        
    }
    integer(int x,int y)
    {
        m=x;
        n=y;
        cout<<"the values of m and n are"<<m<<"\t"<<n;
        
    }
    integer(integer &i)
    {
        m=i.m;
        n=i.n;
        cout<<"the values of m and n are"<<m<<"\t"<<n;
    }
        
    };
int main()
{
    integer i1;
    integer i2(5,4);
    integer i3(i2);

}
