#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[]={32, 46, 3, 2, 77, 41, 23 };
    int key;
    // cout<<"Enter the key";
    cin>> key;
    int n = sizeof(arr)/sizeof(int);
    int index = LinearSearch(arr, n, key);
    if (index!=-1){
        cout<<"The key is present at position"<<index+1 <<endl;
    }
    else
    {
        cout<<" The key is not found";
    }
    
return 0;
}