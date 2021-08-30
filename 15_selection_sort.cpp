#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-2;i++){
        int current = arr[i];
        int min_pos=i;
        // find out the element
        for(int j=i; j<n; j++ ){
            if(arr[j]<arr[min_pos]){
                min_pos=j;
            }

        }

        // swap outside the loop
        swap(arr[min_pos], arr[i]);
    }

}

int main(){
    int arr[]={-6,9,3,22,-9,4,7,1,99,-77};
    int n= sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

     for(int i=0;i<n;i++){
        cout<< arr[i]<<",";
    }
          
    return 0;
    }
