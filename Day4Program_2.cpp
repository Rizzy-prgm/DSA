#include <iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size) {
    
    cout<< "Printing the array " << endl;
    //Print the array
    for{int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< "Printing DONE " << endl;
}
   int main () {
       
     //declare
     int number[15];
     
     //accessing an array
    cout << "value at 14 index " << number[14] << endl;
    
 //cout << "value at 20 index " << number [20] << endl;
 
       int third[15] = {2,7};
       
     int n = 15;
     printArray(third, 15);
     
    //initialising all locations with 0
    int fourth[10] = {0};
    
    n = 10;
    printArray(fourth, 10);
    
    //initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};
    
     n = 10;
     printArray(fifth,10);
     
     int fifthsize = sizeof(fifth)/sizeof(int);
     cout<<" size of Fifth is " << fifthsize <<endl;
