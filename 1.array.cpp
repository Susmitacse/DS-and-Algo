// When an array is passed to the function it is passed by reference. (Only the address is passed)
// If we need to pass an array to a function we also need to pass the size along with the reference to the array, otherwise it wont know upto what extent the array is 

#include <iostream>
using namespace std;

void printArray(int arr[])
{
    cout <<" In func" <<sizeof(arr) <<endl;
}

int main() {
	
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout <<"inside main" << sizeof(arr) <<endl;
    printArray(arr);


	return 0;
}
