#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            int m=n-j+1;
            cout<<m<<" ";
            j=j+1;
        }cout<<endl;
        i=i+1;

    }
}