#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    while (i<=n)
    {
        int j=1; int space=1;
        while(space<=i){
            cout<<" ";
            space=space+1;
        }
      while(j<=n-i+1){
        cout<<"*";
        j=j+1;
      }
      cout<<endl;
      i=i+1;
    }

}