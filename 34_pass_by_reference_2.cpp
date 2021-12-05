#include<iostream>
using namespace std;

void taxCalc(int *incomePtr){
    int tax=10;
    *incomePtr=*incomePtr - tax;
}

int main(){
    int income;
    cin>> income;
    taxCalc(&income);
    cout<<income;
    return 0;
}