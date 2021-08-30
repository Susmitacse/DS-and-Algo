// If the matrix is:    1  2  3
//                      4  5  6
//                      7  8  9

// Then the output is :  1 2 3 6 9 8 7 4 5

#include<iostream>
using namespace std;

void print(int arr[][10], int n, int m){
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    while(startCol<=endCol and startRow<=endRow){

        //Start row
        for(int col=startCol; col<=endCol; col++){
            cout<<arr[startRow][col]<<" ";
        }

        // Print the end col from startRow +1 
        for(int row=startRow; row<=endRow;row++){
            cout<<arr[row][endCol]<<" ";
        }

        // Print end row
        for(int col=endCol-1; col>=startCol; col--){
            if(startRow==endRow){
                break;
            }
            cout<<arr[endRow][col]<<" ";
        }

        // Starting column 
        for(int row=endRow-1; row>=startRow+1; row--){
            // Avoid duplicate printing of elements
            if(startCol==endCol){
                break;
            }
            cout<< arr[row][startCol]<<" ";
        }


        startRow++;
        endRow--;
        startCol++;
        endCol--;
        
    }

}

int main(){

    int arr[][10]={{1,2,3,4},
                {12,13,14,5},
                {11,16,15,16},
                {10,9,8,7}};

    int n=4, m=4;
    print(arr, m, n);


    return 0;
}