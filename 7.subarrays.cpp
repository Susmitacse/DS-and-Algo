// With n elements we can have nC2 number of subarrays
// Program prints all the subarray of a given array

#include<iostream>
using namespace std;

void PrintSubarray(int arr[], int n){
    for(int i=0; i<n;i++){
        for(int j=i;j<n;j++){
            // cout<< "("<<i<<","<<j<<"),";
            for(int k=i;k<=j;k++){
                cout<<arr[k] <<",";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}


int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    PrintSubarray(arr,n);

    return 0;
    }
