
#include <iostream>
using namespace std;

void printArray(int arr[])
{
    cout <<" In func" <<sizeof(arr) <<endl;
}

int main() {
	// your code goes here
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout <<"inside main" << sizeof(arr) <<endl;
    printArray(arr);


	return 0;
}
