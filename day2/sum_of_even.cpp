#include<iostream>
using namespace std;
int main(){
    int sum=0,n,i=2;
    cout<<"Enter a number:";
    cin>>n;
    while(i<=n){
        sum+=i;
        i=i+2;
    }
    cout<<sum;
}