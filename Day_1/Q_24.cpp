#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int count=1;
    while(i<=n){
        int j=1;
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space=space+1;
        }
        while (j<=i)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
        
    }
}