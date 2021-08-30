#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main()
{
    int arr[]={10,4,5,3,2,-9,77,22,47,-99};
    int n= sizeof(arr)/sizeof(int);

    sort(arr, arr+n, compare);     // passing compare function to this function, to control the ascending or descending order of the sort
    // reverse(arr, arr+n);  // reverse the array in decending order

    for(int i=0;i<n;i++){
        cout<< arr[i]<<","; 
     
    }
    return 0;
}