#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of the array";
    cin>>size;
    int array1[size],array2[size],mulArray[size];
    cout<<"enter elements of first array";
    for(int i=0;i<size;i++){
        cin>>array1[i];
    }
    cout<<"enter elements of second array";
    for(int i=0;i<size;i++){
        cin>>array2[i];
    }
    for(int i=0;i<size;i++){
        mulArray[i]=array1[i]*array2[i];
        
    }
    cout<<"resultant array";
    for(int i=0;i<size;i++){
        cout<<mulArray[i]<<"";
    }
    return 0;
}
