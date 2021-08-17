// With n elements we can have nC2 number of subarrays
// Finding out the largest sum of the subarray by Brute force method (taking all possible subarrays and checking)
// Time complexity = O(n^3)

#include<iostream>
using namespace std;

int LargestSubarraySum(int arr[], int n){
    int largestSum =0;
    for(int i=0; i<n;i++){
        for(int j=i;j<n;j++){
            int subarraySum=0;
            for(int k=i;k<=j;k++){
                subarraySum+= arr[k];
            }
            // put a check on subarrySum > largestSum
            largestSum= max(largestSum, subarraySum);
            }
        }
        return largestSum;
    }



int main(){
    int arr[]={7,-2,4,5,-11,3,5,-6};
    int n=sizeof(arr)/sizeof(int);
    cout<< LargestSubarraySum(arr,n);

    return 0;
    }
