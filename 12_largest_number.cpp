#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int largestElement(vector<int> arr) {
    int largest=arr[0];
    for(int i=0; i < arr.size(); i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }
  return largest;   
}

int main(){
    vector<int> arr={2,3,-9,22,77,6, -98,88};
    
    cout<<largestElement(arr);
    return 0;
}