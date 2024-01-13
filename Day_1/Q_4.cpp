#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=n*n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<sum<<" ";
             sum=sum-1;
            j=j+1;
        }cout<<endl;
        i=i+1;

    }
}