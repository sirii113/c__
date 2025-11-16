#include <iostream>

using namespace std;


 
 

int main() {
   
    int SIZE;
    int array1[SIZE];
    int array2[SIZE];
    int sumArray[SIZE];
    cout<<"enter size of the array";
    cin>>SIZE;

    
    cout << "Enter  elements for the first array:" ;
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array1[i];
    }

   
    cout << "\nEnter  elements for the second array:" ;
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array2[i];
    }

    
    for (int i = 0; i < SIZE; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

   
    cout << "\nSum of the two arrays:";
    for (int i = 0; i < SIZE; i++) {
        cout << sumArray[i] << " ";
    }

    return 0;
}
