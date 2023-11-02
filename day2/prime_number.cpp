#include<iostream>
using namespace std;
int main(){
    int i =2;
    int num;
    bool isPrime;
    cout<<"Please enter a number:";
    cin>>num;
    while(i<num){
        if(num%i==0){
            isPrime=false;
            break;
        } else{
            isPrime=true;
        }
        i++;
    }
    if(isPrime){
        cout<<"The number "<<num<<" is Prime.";
    } else{
        cout<<"The number "<<num<<" is Not Prime.";
    }
}