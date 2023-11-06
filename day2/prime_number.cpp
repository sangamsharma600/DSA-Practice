#include<iostream>
using namespace std;
int main(){
    int i =2;
    int num;
    bool isPrime=1;
    cout<<"Please enter a number:";
    cin>>num;
    while(i<num){
        if(num%i==0){
            isPrime=0;
            break;
        }
        i++;
    }
    if(isPrime==1){
        cout<<"The number "<<num<<" is Prime.";
    } else{
        cout<<"The number "<<num<<" is Not Prime.";
    }
}