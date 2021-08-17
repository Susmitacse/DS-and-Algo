// Vector are like arrays but in vector the memory is dynamically allocated. 
//When it reaches to its full capacity a new memory is created with double the of the size of the previous vector
// Push , Pop, insert  operations can be done on vectors


#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    // Demo vector  
    vector<int> arr={1,3,6,10,14};

     // Fill constructor
    vector<int> arr1(6,8);       // stores same value 8 , of vector size 6
    cout<<"Fill constructor (another array arr1)" << endl;
     for(int i=0; i < arr1.size(); i++)
        cout<<arr1[i] <<endl;

        cout<<endl;


    //pop_back--- pops the top element
    arr.pop_back();            // pops the last element from arr i.e 14 here

    //push_back -- pushes the element
    arr.push_back(50);         // pushes 50
    arr.push_back(90);         // pushes 90 (to show the increase in memory alloc)

    // Printing the vector
    cout<<"Elements of the arr array";
    for(int i=0; i < arr.size();i++)
        cout<<arr[i] <<endl;
    
    cout<< endl;

    //Size of the vector(no.of elements)
    cout<<"Size of the vector"<<arr.size()<<endl;

    //Capacity of the vector
    cout<<"Capacity of the vector" <<arr.capacity() <<endl;

}
