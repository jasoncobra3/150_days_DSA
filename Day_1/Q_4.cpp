#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int count=1;
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<< i*3-(3-j);
            j=j+1;

        }cout<<endl;
        i=i+1;

    }
    
}