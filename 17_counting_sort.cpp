#include<iostream>
#include<vector>
using namespace std;

void counting_sort(int a[], int n){
// Largest element
int largest=-1;
for(int i=0;i<n;i++){
    largest=max(largest,a[i]);
}

vector<int> freq(largest+1, 0);

//update the freq array
for(int i=0;i<n;i++){
    freq[a[i]]++;
}

//put back the elements from freq array to original array
int j=0;
for(int i=0;i<=largest;i++){
    while(freq[i]>0){
        a[j]=i;
        freq[i]--;
        j++;
    }
}
return;
}


int main(){
    int arr[]={2,4,7,1,9,23,5,6,9, 6,12,15};
    int n=sizeof(arr)/sizeof(int);
    counting_sort(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}