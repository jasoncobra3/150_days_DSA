#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    while(i<=n){
        int j=1;
        int space=n-i+1;
        while(j<=space){
            cout<<"*";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
}