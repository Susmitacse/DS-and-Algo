// Finding Largest subarray sum using "KADANE'S Algorithm"
// Algorithm--
// 1. calculate the sum sum element wise 
// 2. if the sum is -ve, set it to 0
// 3. move across the array to calculate the sum and update the largest sum 

#include<iostream>
using namespace std;

int largestSubarraySum3(int arr[], int n){
    int sum=0;
    int largest_sum=0;
    for(int i=0; i<n; i++){
        sum=sum + arr[i];
        if(sum<0){
            sum=0;
        }

        largest_sum=max(largest_sum, sum);
    }
    return largest_sum;
}

int main(){
    int arr[]={1,-2,3,12,-6,-4,15,-8,2};
    int n= sizeof(arr)/sizeof(int);
    cout<<largestSubarraySum3(arr, n)  <<endl;
    return 0;

}
