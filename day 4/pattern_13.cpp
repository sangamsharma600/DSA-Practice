/*
A
B   B
C   C   C
*/

#include<iostream>
using namespace std;
int main(){
    int i =1, num;
    cout<<"Enter a num:";
    cin>> num;
    while(i<=num){
        int j =1;
        while(j<=i){
            char ch = 'A'+i-1;
            cout<<ch<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
}