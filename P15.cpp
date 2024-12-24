#include <iostream>
using namespace std;

int main(){
    int i;
    int j;
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    for(i=1;i<=num;i++){
        for (j=1;j<=i;j++){
            cout<<'*'<<" ";
        }
    cout<<"\n";
    } 
    return 0;
}