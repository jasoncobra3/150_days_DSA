#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    // for n=3
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(char)(65+i-1)<<" ";
            j++;

        }cout<<endl;
        i=i+1;
    }
}