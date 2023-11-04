/*
A   A   A
B   B   B   
C   C   C
*/
#include<iostream>
using namespace std;
int main(){
    int i=1, num;
    char ch= 'A';
    cout<<"Enter a number:";
    cin>>num;
    while(i<=num){
        int j=1;
        while(j<=num){
            cout<<ch<<"\t";
            j++;
        }
        cout<<endl;
        i++;
        ch++;
    }
    // Using another method
    cout<<"Printing the pattern using different method:"<<endl;
     i=1;
     while(i<=num){
        int j=1;
        while(j<=num){
            char ch = 'A'+i-1;
            cout<<ch<<"\t";
            j++;
        }
        cout<<endl;
        i++;
        ch++;
    }
}