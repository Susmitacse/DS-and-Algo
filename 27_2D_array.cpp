#include<iostream>
using namespace std;

void print(int arr[][100], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
     
    int arr[100][100];

    int m,n;
    cout<<"Enter the value of m and n";
    cin>> m>>n;

    // take input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>> arr[i][j];

        }
    }
    print(arr,m,n);
    return 0;
}