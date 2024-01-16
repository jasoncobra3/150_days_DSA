#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    int product=1;
    while(n!=0){
        int dig=n%10;
        sum=sum+dig;
        product=product*dig;
        n=n/10;

    }
    int ans=product-sum;
    return ans;
}