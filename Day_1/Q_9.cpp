#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number;";
    cin>>n;
    // for n=4
    while(i<=n){
        int j=1;
        while(j<=i){ 
            cout<<(i-j+1)<<" ";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
}