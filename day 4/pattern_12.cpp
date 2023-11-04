/*
A   B   C
B   C   D
C   D   E
*/
#include<iostream>
using namespace std;
int main(){
    int i =1, num;
    cout<<"Enter a num:";
    cin>> num;
    
    while(i<=num){
        int j =1;
        while(j<=num){
            char ch = 'A'+i+j-2;
            cout<<ch<<"\t";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}