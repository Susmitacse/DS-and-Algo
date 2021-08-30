#include<iostream>
using namespace std;

void bubbleSort(int a[], int n){
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<=n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

}


int main(){
    int a[]={-9,8,4,-3,0,2,34,1,9,2};
    int n=sizeof(a)/sizeof(int);
    bubbleSort(a, n);
    for(int i=0;i<n;i++){
        cout<< a[i]<<",";
    }
          
    return 0;
    }