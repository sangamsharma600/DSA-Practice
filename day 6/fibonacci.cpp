#include<iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter a num:";
   cin>> num;
   int a=0,b=1;
   cout<< a<<" "<< b<<" ";
   for(int i=1; i<=num; i++){
        int nextNum = a+b;
        cout<<nextNum<<" ";
        a=b;
        b=nextNum;
   }

}