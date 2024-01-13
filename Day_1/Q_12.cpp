#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int ch =65;
    // for n=4
    while(i<=n){
        int j=1; 
        while(j<=n){
            cout<<(char)ch<<" ";
              ch=ch+1;
             j++;

        }cout<<endl;
        i=i+1;
    }
}