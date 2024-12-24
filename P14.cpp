#include <iostream>
using namespace std;

void f(int a, int& b){
    int sum = a+b;
    cout<<sum<<endl;
    b = 0;
}

int main(){
    int a,b;
    cout<<"enter 2 numbers: ";
    cin>>a>>b;
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    f(a,b);
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    return 0;
}