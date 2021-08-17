#include<iostream>
using namespace std;

int Binary_Search(int arr[], int n, int key){
int start=0;
int end=n-1;
int mid;
while(start<=end){
    mid=(start+end)/2;
    if (key==arr[mid]){
        return mid;
    }
    else if (key<arr[mid]){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
}
return -1;
}

int main()
{
int arr[]={1,11,23,33,34,45,66,78,79,88,94};
int n = sizeof(arr)/sizeof(int);
int key;
cin>> key;
int index= Binary_Search(arr,n,key);
if(index!= -1)
{
    cout<< "Element found at"<< index+1 <<endl;
}
else{
    cout<< "Element not found"<< endl;
}
    return 0;
}
