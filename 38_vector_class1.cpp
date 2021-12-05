#include<iostream>
using namespace std;

class Vector{
     int *arr;
     int cs;
     int ms;

public:
    Vector(int max_size=1){
        cs=0;
        ms=max_size;
        arr = new int[ms];
    }

    void push_back(int d){
        if(cs==ms){
            // create a new array with double the size
            int *oldArr = arr;
            ms = 2*ms;
            arr = new int[ms];

            // copying the elements from old to new array
            for(int i=0; i<cs; i++){
            arr[i] = oldArr[i];

        }
        
        // delete old array
        delete[] oldArr;
        }
        arr[cs]=d;
        cs++;
    }


    void pop_back(){
        if(cs>=0)
            cs--;
    }
    
    bool isEmpty(){
        return cs==0;
    }

    // Front , back , at[i], []
    int front(){
        return arr[0];
    }

    int back(){
        return arr[cs-1];
    }

    int at(int i){
        return arr[i];
    }

    int size(){
        return cs;
    }

    int capacity(){
        return ms;
    }

};


int main(){
    Vector v(5);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    v.pop_back();

    cout<<"front "<< v.front() << endl;
    cout <<"back " <<v.back() << endl;
    cout<<"at" <<v.at(2) << endl;


    cout<<v.size();
    cout<< endl;
    cout<<v.capacity();
    cout<<endl;

    for(int i=0; i<v.size();i++){
        cout<< v.at(i)<<",";
    }
}