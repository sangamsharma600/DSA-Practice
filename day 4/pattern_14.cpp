/*
A
B   C
D   E   F
G   H   I   J
*/

#include<iostream>
using namespace std;
int main(){
    int i =1, num;
    cout<<"Enter a num:";
    cin>> num;
    char ch = 'A';
    while(i<=num){
        int j =1;
        while(j<=i){
            cout<<ch<<"\t";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}