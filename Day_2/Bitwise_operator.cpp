#include<iostream>
using namespace std;
int main(){
    int a=2;
    int b=6;
    cout<<"a&b:"<<(a&b)<<endl;
    cout<<"a|b:"<<(a|b)<<endl;
    cout<<"~a:"<<~a<<endl;
    cout<<"a^b:"<<(a^b)<<endl;

    //Right shift And Left shift Operator
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    // Increment and  Decrement operator
    int i=7;
    cout<<(i++)<<endl;
    // 7
    cout<<(++i)<<endl;
    //8,i=9
    cout<<(i--)<<endl;
    //9 , i=9
    cout<<(--i)<<endl;
    //8 , i=7

}