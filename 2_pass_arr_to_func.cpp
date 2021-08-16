#include<iostream>
using namespace std;

void printArray(int arr[]){
    cout<< "Size of array in function"<< sizeof(arr)<< endl;
    int n =sizeof(arr)/sizeof(int);
    for (int i=0; i<n;i++){
        cout<<"Inside function"<<arr[i]<< endl;
}
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(int);
    for (int i=0; i<n;i++){
        cout<<"Inside main"<<arr[i]<< endl;
    }
    cout<< "Size of array in main"<< sizeof(arr)<< endl;
    printArray(arr);
}




// When we passs the array to a function it is paased by refernce and not pass by value, 
// means only the address of the array is passes. The address is of  bytes and the int is of 4 bytes.
// therefore in the function n= 8/4=2 and its prints 2 elements. If we dont pass the value of "n" it will
// not know what the size of n is .

// We can also define the function as "  void printArray(int * arr) "  specifying that its a pointer