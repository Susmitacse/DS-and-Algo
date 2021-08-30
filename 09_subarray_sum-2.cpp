// We take a prefix sum array where we calculate the sum of the elements upto each array index and store it in the respective index value
//arr[]={1,2,4,-2,3}       prefix_sum[]={1,3,7,5,8}
//To find subarray sum add all the previous elements and store it in the prefix_sum array
//To find the largest sum of subarray     prefix[j]-prefix[i-1]  where j is driven by i
// Time complexity = O(N+N^2)


#include<iostream>
using namespace std;

int subarraySum2(int arr[], int n){
    int prefix[100]={0};
    prefix[0]=arr[0];

    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]+arr[i];
    }

    int largest_sum=0;
    for(int i=1; i<n; i++){
        for(int j=i; j<n;j++){
            int subarraysum = i>0? prefix[j]-prefix[i-1] : prefix[j];
            largest_sum=max(largest_sum,subarraysum);

        }
    }
    return largest_sum;
}

int main()
{
    int arr[]={2,3,-22,4,5,7,1,-5,8};
    int n=sizeof(arr)/sizeof(int);
    cout<< subarraySum2(arr, n)<<endl;
    return 0;
}