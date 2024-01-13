#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    // for n=3
    while(i<=n){
        int j=1;
        char ch =(65 + i);
        while(j<=i){
            cout<<ch<<" ";
            j=j+1;
        }cout<<endl;
        i=i+1;
    }
}