#include<iostream>
using namespace std;
int main(){

    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    while(i<=n){
        int space=1;
        while (space<=n-i)
        {
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=i){
            cout<<"*"<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
        
    }
}